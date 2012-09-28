#ifndef COOKIEJAR_H
#define COOKIEJAR_H

#include <QFile>
#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QTimer>

class CookieJar : public QNetworkCookieJar {
    Q_OBJECT

public:
    CookieJar(QObject* parent = 0);
    virtual ~CookieJar();
    void Init();
    virtual bool setCookiesFromUrl(const QList<QNetworkCookie>&, const QUrl&);
    QString m_path;
    void setDiskStorageEnabled(bool);

public slots:
    void scheduleSaveToDisk();
    void loadFromDisk();
    void reset();

private slots:
    void saveToDisk();

private:
    void extractRawCookies();

    QList<QByteArray> m_rawCookies;
    bool m_storageEnabled;
    QFile m_file;
    QTimer m_timer;
};

#endif // COOKIEJAR_H
