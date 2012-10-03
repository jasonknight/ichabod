#include "downloader.h"
#include <QtGlobal>
#include <QSize>
#include <QFont>
Downloader::Downloader(QObject *parent) :
    QObject(parent)
{

}
void Downloader::setReply(QNetworkReply *rep) {
    this->reply = rep;
    qDebug() << "Setting reply for downloader.";
    gettimeofday(&this->p_start_time, NULL);
    connect(this->reply,SIGNAL(finished()),this,SLOT(writeFile()));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(updateFileProgress(qint64,qint64)));
}
void Downloader::writeFile() {
    QByteArray ba = reply->readAll();
    QFile f(file_name);
    if (f.open(QIODevice::WriteOnly)) {
        QTextStream out(&f);
        out << ba;
        f.close();
    } else {
        qDebug() << "Failed to save file" << file_name;
    }
    struct timeval now;
    gettimeofday(&now, NULL);
    long diff, seconds, useconds;
    seconds  = now.tv_sec  - this->p_start_time.tv_sec;
    useconds = now.tv_usec - this->p_start_time.tv_usec;
    diff = ((seconds) * 1000 + useconds/1000.0) + 0.5;
    emit timeTaken(diff);
    emit fileDownloaded(file_name);
    emit finished();

}
void Downloader::updateFileProgress(qint64 read,qint64 total) {
    qDebug() << this->file_name << ": " << QString::number(read) << "  " << QString::number(total);
}
