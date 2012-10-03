#include "testview.h"
#include <QDesktopServices>
#include <QNetworkDiskCache>
#include <QWebFrame>
#include "network.h"
#include "cookiejar.h"
#include <QDebug>
TestView::TestView(QObject *parent) : QObject(parent), QScriptable () {
    this->use_cache = true;
    this->use_local_db = true;
    this->cache_location = QDesktopServices::storageLocation(QDesktopServices::CacheLocation);
    this->local_db_location = QDesktopServices::storageLocation(QDesktopServices::DataLocation);
    this->use_cookies = true;
    this->cookie_location = "";
    this->name = "Default";
}
void TestView::CreateView() {

    this->page = new TestPage;
    this->page->setForwardUnsupportedContent(true);
    this->view = new QWebView;
    this->view->setPage(this->page);
    logger = new Logger();
    logger->name = this->name;
    Network* net = new Network(this);
    net->logger = logger;
    net->name = this->name + "NetworkManager";
    connect(net,SIGNAL(logMessage(QString,QString)),logger,SLOT(logMessage(QString,QString)));
    this->view->page()->setNetworkAccessManager(net);
    if (this->use_cache) {
        QNetworkDiskCache *diskCache = new QNetworkDiskCache;
        diskCache->setCacheDirectory(this->cache_location);
        this->view->page()->networkAccessManager()->setCache(diskCache);
    }
    if (this->use_local_db) {
        QWebSettings::globalSettings()->setAttribute(QWebSettings::OfflineStorageDatabaseEnabled, true);
        QWebSettings::globalSettings()->setOfflineStoragePath(this->local_db_location);
    }
    if (this->use_cookies) {
        CookieJar * jar = new CookieJar(this);
        jar->Init();
        this->view->page()->networkAccessManager()->setCookieJar(jar);
    }
    connect(view->page()->mainFrame(),SIGNAL(javaScriptWindowObjectCleared()),this,SLOT(JavaScriptWindowObjectCleared()));
    connect(view, SIGNAL(loadProgress(int)), SLOT(SetProgress(int)));
    connect(view, SIGNAL(loadFinished(bool)), SLOT(FinishedLoading(bool)));
    //connect(this,SIGNAL(loadUrlSignal(QString&)),this,SLOT(loadUrl(QString&)));
}
bool TestView::SetAttribute(QString attribute, QString value) {
    if (attribute == "name") {
        this->name = value;
    }
    if (attribute == "cache") {
        this->use_cache = (value == "on") ? true : false;
    }
    if (attribute == "db") {
        this->use_local_db = (value == "on") ? true : false;
    }
    if (attribute == "cookies") {
        this->use_cookies = (value == "on") ? true : false;
    }
    return true;
}
void TestView::Load(QString url) {
    this->view->load(QUrl::fromUserInput(url));
}
void TestView::JavaScriptWindowObjectCleared() {
    view->page()->mainFrame()->addToJavaScriptWindowObject("TestView",this);
}
void TestView::SetProgress(int p) {
    this->progress = p;
}
void TestView::FinishedLoading(bool b) {
    emit FinishedLoadingSignal(this->name);
}
void TestView::ExecuteJS(QString &js) {
    view->page()->mainFrame()->evaluateJavaScript(js);
}
QString TestView::GetContent() {
    return view->page()->mainFrame()->toHtml();
}
QString TestView::GetContentAsText() {
    return view->page()->mainFrame()->toPlainText();
}
QObject * TestView::GetPage() {
    return (QObject *)this->view->page();
}
