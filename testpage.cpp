#include "testpage.h"

TestPage::TestPage(QObject * parent):QWebPage(parent) { }

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

}
