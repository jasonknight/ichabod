#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QScriptable>
#include <QFile>
#include <QTextStream>

class Logger : public QObject, protected QScriptable
{
    Q_OBJECT
public:
    explicit Logger(QObject *parent = 0);
    QString name;
signals:
    
public slots:
    void logMessage(QString sender_name,QString message);
};

#endif // LOGGER_H
