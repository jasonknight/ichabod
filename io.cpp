#include "io.h"
#include <QDebug>
#include <QVariant>
#include <QVariantMap>
#include <QList>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>
extern QVariantMap toMap(QFileInfo file_info);
IO::IO(QObject *parent) :
    QObject(parent), QScriptable()
{
}
QString IO::read(QString fileName) {
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly)) {
        return "!ERROR Could not open file.";
    }
    QString text = QTextStream(&file).readAll();
    file.close();
    return text;
}
bool IO::write(QString fileName, QString contents) {
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly)) {
        return false;
    }
    QTextStream(&file) << contents;
    file.close();
    return true;
}
QVariant IO::dir(QString name) {
    QList<QVariant> files;
    QDir dir(name);
    QFileInfoList list = dir.entryInfoList();
    for (int i = 0; i < list.size(); i++) {
        QFileInfo info = list.at(i);
        QVariantMap map;
        map = toMap(info);
        files.append(QVariant(map));
    }
    return files;
}
