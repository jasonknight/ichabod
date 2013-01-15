#include "testpage.h"
#include <QDateTime>
#include <QFileInfo>
#include <QDir>
TestPage::TestPage(QObject * parent):QWebPage(parent) {
    connect(this,SIGNAL(unsupportedContent(QNetworkReply*)),this,SLOT(downloadFile(QNetworkReply*)));
    this->num_of_downloads = 0;
    this->downloaded_files = new QStringList;
    this->console_messages = new QStringList;
}

void TestPage::javaScriptConsoleMessage ( const QString & message, int lineNumber, const QString & sourceID  ) {
    QString err = QString() + "A Javascript error Occurred: " + message + "'\nat line " + QString::number(lineNumber) + "\nin " + sourceID;
    this->console_messages->append(err);
}
QStringList TestPage::GetConsoleMessages() {
    return *this->console_messages;
}
bool TestPage::javaScriptConfirm(QWebFrame* /*frame*/, const QString& /*msg*/) {
  return true;
}
bool TestPage::javaScriptPrompt(QWebFrame* frame /*frame*/,
                           const QString& msg /*msg*/,
                           const QString& default_value/*defaultValue*/,
                           QString* result /*result*/) {
  return true;
}
void TestPage::javaScriptAlert(QWebFrame* /*frame*/, const QString& msg) {
   return;
}
QString TestPage::userAgentForUrl(const QUrl& url) const {
  return QWebPage::userAgentForUrl(url);
}
void TestPage::setUserAgent(const QString& userAgent) {
  user_agent = userAgent;
}
void TestPage::setAlertString(const QString& alertString) {
  alert_string = alertString;
}

QString TestPage::GetAlertString() {
  return alert_string;
}
bool TestPage::ClearConsoleMessages() {
    this->console_messages->clear();
    return true;
}
bool TestPage::SetAttribute(QString attribute, QString value) {
    return true;
}
void TestPage::downloadFile(QNetworkReply *reply) {
    QString default_file_name = QFileInfo(reply->url().toString()).fileName();
    QDir().mkpath("downloads/");
    QString file_name = "downloads/" + default_file_name + "." + QString::number(QDateTime::currentDateTime().toTime_t());
    if (file_name.isEmpty()) {
        qDebug() << "filename is empty";
        return;
    }
    Downloader * d = new Downloader;
    d->file_name = file_name;

    //connect(d,SIGNAL(fileProgressUpdated(int)),this->main,SLOT(setProgress(int)));
    connect(d,SIGNAL(finished()),d,SLOT(deleteLater()));
    connect(d,SIGNAL(fileDownloaded(QString)),this,SLOT(fileDownloaded(QString)));
    d->setReply(reply);
}
void TestPage::fileDownloaded(QString fname) {

    this->downloaded_files->append(fname);
    this->num_of_downloads += 1;
    emit FileDownloadedSignal(fname);
}
