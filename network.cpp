#include "network.h"
#include <sys/time.h>
#include <QFileInfo>
const double N2M = 1.0 / 1000000.0;
Network::Network(QObject *parent) :
    QNetworkAccessManager(parent)
{
    connect(this,SIGNAL(finished(QNetworkReply*)),this,SLOT(requestCompleted(QNetworkReply*)));
}
QNetworkReply * Network::createRequest(
    QNetworkAccessManager::Operation operation,
    const QNetworkRequest & originalRequest,
    QIODevice * device)
{
    QNetworkRequest request = originalRequest;
    if (
            (originalRequest.url().toString().indexOf(".css") != -1) ||
            (originalRequest.url().toString().indexOf(".png") != -1) ||
            (originalRequest.url().toString().indexOf(".js") != -1)
       ) {
        request.setAttribute(QNetworkRequest::CacheLoadControlAttribute,
            QNetworkRequest::PreferCache);
        //qDebug() << "Setting to prefer cache for: " << request.url().toString();
    }

    QString filename = QFileInfo(request.url().toString()).fileName();
    QDateTime now = QDateTime::currentDateTime();
    history[filename] = now.toTime_t();
    QString message = request.url().toString() + ": Started at: " + now.toString();
    emit logMessage(this->name,message);
    return QNetworkAccessManager::createRequest(operation, request, device);
}
void Network::requestCompleted(QNetworkReply *reply) {
    QString url = reply->url().toString();
    QString filename = QFileInfo(url).fileName();
    QDateTime now = QDateTime::currentDateTime();
    QString message = url + ": Ended at: " + now.toString();
    int diff = now.msecsTo(QDateTime::fromTime_t(history[filename])) * -1;
    message = message + " [" + QString::number(diff) +"]ms";
    history[filename] = 0;
    emit logMessage(this->name,message);
}
