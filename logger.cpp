#include "logger.h"
#include <QDebug>
#include <QDir>
Logger::Logger(QObject *parent) :
    QObject(parent)
{
}
void Logger::logMessage(QString sender_name, QString message) {
    QString path = "logs/";
    QDir().mkpath(path);
    QFile file(path + this->name + ".log");
    if (file.open(QIODevice::Append)) {
        QTextStream s(&file);
        s << sender_name << ": " << message << "\n";
        file.close();
        qDebug() << sender_name << ": " << message << "\n";
     } else {
        qDebug() << "Could not open log file.";
    }
}
