#include "io.h"


IO::IO(QObject *parent) :
    QObject(parent), QScriptable()
{
}
QString IO::read(QString &fileName) {
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly)) {

        return QString::null;
    }
    return QTextStream(&file).readAll();
}
bool IO::write(QString &fileName, QString &contents) {
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly)) {
        return false;
    }
    QTextStream(&file) << contents;
    return true;
}
