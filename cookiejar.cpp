/*
 * Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies)
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "cookiejar.h"
#include <QDebug>
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
#include <QStandardPaths>
#else
#include <QDesktopServices>
#endif
#include <QDir>
#include <QTextStream>

CookieJar::CookieJar(QObject* parent)
    : QNetworkCookieJar(parent)
    , m_storageEnabled(true)
{
    // We use a timer for the real disk write to avoid multiple IO
    // syscalls in sequence (when loading pages which set multiple cookies).
    m_timer.setInterval(1000);
    m_timer.setSingleShot(true);
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(saveToDisk()));


#ifndef QT_NO_DESKTOPSERVICES
    #if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
        m_path = QStandardPaths::writableLocation(QStandardPaths::CacheLocation);
    #else
        m_path = QDesktopServices::storageLocation(QDesktopServices::CacheLocation);
    #endif
#else
    m_path = QDir::homePath() + "/.TestBrowser";
#endif
    m_path = "/tmp";
    //qDebug() << path;



}
CookieJar::~CookieJar()
{
    if (m_storageEnabled) {
        //qDebug() << "Dumping to disk";
        extractRawCookies();
        saveToDisk();
    } else {
        qDebug() << "Not writing to disk";
    }
}

void CookieJar::Init() {
    QDir().mkpath(m_path);
    m_file.setFileName(m_path + "/CookieJar");
    loadFromDisk();
}

bool CookieJar::setCookiesFromUrl(const QList<QNetworkCookie>& cookieList, const QUrl& url)
{
    bool status = QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
    if (status && m_storageEnabled) {
        scheduleSaveToDisk();

    } else {
        //qDebug() << "hello";
    }
    return status;
}

void CookieJar::setDiskStorageEnabled(bool enabled)
{
    m_storageEnabled = enabled;

    if (enabled && allCookies().isEmpty())
        loadFromDisk();

    // When disabling, save current cookies.
    if (!enabled && !allCookies().isEmpty())
        scheduleSaveToDisk();
}

void CookieJar::scheduleSaveToDisk()
{
    // We extract the raw cookies here because the user may
    // enable/disable/clear cookies while the timer is running.
    extractRawCookies();
    m_timer.start();
}

void CookieJar::extractRawCookies()
{
    //qDebug() << "Extract raw cookies";
    QList<QNetworkCookie> cookies = allCookies();
    m_rawCookies.clear();

    foreach (const QNetworkCookie &cookie, cookies) {
      m_rawCookies.append(cookie.toRawForm());
    }
}

void CookieJar::saveToDisk()
{
    m_timer.stop();

    if (m_file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&m_file);
        foreach (const QByteArray &cookie, m_rawCookies)
            out << cookie + "\n";
        m_file.close();
    } else
        qWarning("IO error handling cookiejar file");
}

void CookieJar::loadFromDisk()
{
    if (!m_file.exists()) {
        //qDebug() << "!File Exists";
        return;
    }

    QList<QNetworkCookie> cookies;
    if (m_file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&m_file);
        QString txt = in.readAll();
        QStringList lines = txt.split("\n");
       foreach (QString c, lines) {
        cookies.append(QNetworkCookie::parseCookies(c.toUtf8()));
       }
        m_file.close();
    } else {
        qWarning("IO error handling cookiejar file");
    }
    //qDebug() << "Setting cookies..." << QString::number(cookies.length());
    setAllCookies(cookies);
}

void CookieJar::reset()
{
    setAllCookies(QList<QNetworkCookie>());
    if (m_storageEnabled)
        scheduleSaveToDisk();
}
