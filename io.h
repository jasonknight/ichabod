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

signals:

public slots:
    QString read(QString &file_name);
    bool write(QString &fileName,QString &contents);
};

#endif // IO_H
