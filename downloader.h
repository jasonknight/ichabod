#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QNetworkReply>
#include <QWidget>
#include <QProgressBar>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <sys/time.h>
class Downloader : public QObject
{
    Q_OBJECT
public:
    explicit Downloader(QObject *parent = 0);
    void setReply(QNetworkReply * rep);
    QString file_name;
    struct timeval      p_start_time;
signals:
    void fileProgressUpdated(int);
    void finished();
    void fileDownloaded(QString);
    void timeTaken(long);
public slots:
    void updateFileProgress(qint64 read,qint64 total);
    void writeFile();
private:
    QNetworkReply * reply;

};

#endif // DOWNLOADER_H
