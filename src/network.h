#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QMap>
#include <QDateTime>
#include "logger.h"
class Network : public QNetworkAccessManager
{
    Q_OBJECT
public:
    explicit Network(QObject *parent = 0);
    QString name;
    QMap<QString,int> history;
    Logger * logger;
signals:
    void logMessage(QString, QString);
public slots:
    void requestCompleted(QNetworkReply * reply);
protected:
   QNetworkReply *	createRequest ( Operation op, const QNetworkRequest & req, QIODevice * outgoingData = 0 );
    
};

#endif // NETWORK_H
