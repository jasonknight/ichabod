#include "io.h"
#include <QDebug>

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
