#ifndef TESTPAGE_H
#define TESTPAGE_H
#include <QObject>
#include <QWebPage>
#include <QStringList>
#include "downloader.h"
class TestPage : public QWebPage
{
    Q_OBJECT
public:
    TestPage(QObject * parent = 0);
    void setAttribute(QWebSettings::WebAttribute option, const QString& value);
    void setUserAgent(const QString& userAgent);
    void setAlertString(const QString& alertString);
    QStringList * console_messages;
    QString user_agent;
    QString alert_string;
    int num_of_downloads;
    QStringList * downloaded_files;
    Q_INVOKABLE QObject * GetMainFrame() { return (QObject *)this->mainFrame();}
    Q_INVOKABLE void SetUserAgent(QString name) { setUserAgent(name);}
    Q_INVOKABLE void SetAlertString(QString alert_string) { setAlertString(alert_string);}
signals:
    void FileDownloadedSignal(QString fname);
public slots:
    bool SetAttribute(QString attribute,QString value);
    QStringList GetConsoleMessages();
    bool ClearConsoleMessages();
    QString GetAlertString();
    // Downloading
    void downloadFile(QNetworkReply * reply);
    void fileDownloaded(QString);
protected:
    virtual void javaScriptConsoleMessage ( const QString & message, int lineNumber, const QString & sourceID  );
    void javaScriptAlert(QWebFrame* frame, const QString& msg);
    bool javaScriptPrompt(QWebFrame* frame, const QString& msg, const QString& defaultValue, QString* result);
    bool javaScriptConfirm(QWebFrame* frame, const QString& msg);
    QString userAgentForUrl(const QUrl& url) const;
};

#endif // TESTPAGE_H
