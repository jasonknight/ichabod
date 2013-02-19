#ifndef IO_H
#define IO_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QScriptable>
class IO : public QObject, protected QScriptable
{
    Q_OBJECT

public:
    explicit IO(QObject *parent = 0);
    Q_INVOKABLE QString read(QString file_name);
    Q_INVOKABLE bool write(QString fileName,QString contents);
    Q_INVOKABLE QVariant dir(QString name);
signals:

public slots:

};

#endif // IO_H
