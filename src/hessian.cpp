#include "hessian.h"
#include <QDesktopServices>
#include <QNetworkDiskCache>
#include <QWebFrame>
#include <QWebPage>
#include <QWebElement>
#include "network.h"
#include "cookiejar.h"
#include <QDebug>

extern QString idOf(QScriptValue v);
extern QVariantMap toMap(QWebElement el, QStringList css_attrs);
Hessian::Hessian(QObject *parent) : QObject(parent), QScriptable () {
    this->use_cache = true;
    this->use_local_db = true;
    this->cache_location = QDesktopServices::storageLocation(QDesktopServices::CacheLocation);
    this->local_db_location = QDesktopServices::storageLocation(QDesktopServices::DataLocation);
    this->use_cookies = true;
    this->cookie_location = "";
    this->name = "Default";
    this->has_dialog = false;
    _created = false;
    size = new QRect(100,100,640,480);
}
Hessian::~Hessian() {
    if (this->has_dialog == true) {
        this->dialog->close();
    }
}

void Hessian::CreateView() {

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
    QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);
    connect(view->page()->mainFrame(),SIGNAL(javaScriptWindowObjectCleared()),this,SLOT(JavaScriptWindowObjectCleared()));
    connect(view, SIGNAL(loadProgress(int)), SLOT(SetProgress(int)));
    connect(view, SIGNAL(loadFinished(bool)), SLOT(FinishedLoading(bool)));
    //connect(this,SIGNAL(loadUrlSignal(QString&)),this,SLOT(loadUrl(QString&)));
    _created = true;

}
bool Hessian::SetAttribute(QString attribute, QString value) {
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
void Hessian::Load(QString url) {
    if (!_created)
        return;
    this->lastLoadedPath = url;
    QUrl location = QUrl(url);
    this->view->load(location);
}
void Hessian::JavaScriptWindowObjectCleared() {
    view->page()->mainFrame()->addToJavaScriptWindowObject("Hessian",this);
}
void Hessian::SetProgress(int p) {
    this->progress = p;
}
void Hessian::FinishedLoading(bool b) {
    emit FinishedLoadingSignal(this->name);
}
QVariant Hessian::ExecuteJS(QString js) {
    if (!_created)
        return QVariant(false);
   return view->page()->mainFrame()->evaluateJavaScript(js);
}
void Hessian::Fill(QScriptValue id, QString value) {
    if (!_created)
        return;
    QString selector = idOf(id);
    view->page()->mainFrame()->evaluateJavaScript("$('" + selector + "').val('" + value + "');");
}
void Hessian::Click(QScriptValue id) {
    if (!_created)
        return;
    QString selector = idOf(id);
    view->page()->mainFrame()->evaluateJavaScript("$('" + selector + "').click();");
}
void Hessian::MouseDown(QScriptValue id) {
    if (!_created)
        return;
    QString selector = idOf(id);
    view->page()->mainFrame()->evaluateJavaScript("$('" + selector + "').trigger('mousedown');");
}
void Hessian::MouseUp(QScriptValue id) {
    if (!_created)
        return;
    QString selector = idOf(id);
    view->page()->mainFrame()->evaluateJavaScript("$('" + selector + "').trigger('mouseup');");
}
QString Hessian::GetContent() {
    if (!_created)
        return QString();
    return view->page()->mainFrame()->toHtml();
}
QString Hessian::GetContentAsText() {
    if (!_created)
        return QString();
    return view->page()->mainFrame()->toPlainText();
}
QString Hessian::GetContentOfElement(QString selector) {
    if (!_created)
        return QString();
    QWebPage * p = (QWebPage *) this->page;
    QWebElement el = p->mainFrame()->findFirstElement(selector);
    if (el.isNull()) {
        return QString("");
    }
    return el.toInnerXml();
}
QVariantMap Hessian::GetElement(QString selector) {
    QVariantMap map;
    if (!_created) {
        map["isNull"] = true;
        return map;
    }
    QWebPage * p = (QWebPage *) this->page;
    QWebElement el = p->mainFrame()->findFirstElement(selector);


    if (el.isNull()) {
        map["isNull"] = true;
        return map;
    }
    QStringList css_attrs = QStringList() << "display" << "background" << "color" << "font-size" << "position" << "top" << "left" << "bottom" << "right" << "border";
    map = toMap(el,css_attrs);
    return map;
}
QVariantMap Hessian::GetElement(QString selector, QStringList css_attrs) {
    QVariantMap map;
    if (!_created) {
        map["isNull"] = true;
        return map;
    }
    QWebPage * p = (QWebPage *) this->page;
    QWebElement el = p->mainFrame()->findFirstElement(selector);
    if (el.isNull()) {
        map["isNull"] = true;
        return map;
    }
    map = toMap(el,css_attrs);
    return map;
}

QObject * Hessian::GetPage() {
    if (!_created)
        return new QObject();
    return (QObject *)this->view->page();
}
void Hessian::Show() {
    if (!_created)
        return;
    if (this->has_dialog == false) {
        this->has_dialog = true;
        this->dialog = new BrowserDialog;
        dialog->setWindowTitle(this->name);
        this->dialog->append(this->view);
    }
    QRect dsize = this->dialog->geometry();
    dsize.setWidth(size->width() + 10);
    dsize.setHeight(size->height() + 10);
    this->view->setGeometry(*size);
    this->dialog->setGeometry(dsize);
    this->dialog->show();
    this->dialog->raise();
    this->dialog->activateWindow();
}
void Hessian::Hide() {
    if (!_created)
        return;
    if (this->has_dialog == true) {
        this->dialog->hide();
    }
}
void Hessian::SetViewGeometry(int x, int y, int width, int height)  {
    size = new QRect(0,0,width,height);

    if (this->has_dialog == true) {
        QRect* dsize = new QRect(x,y,width+10,height+10);
        this->view->setGeometry(*size);
        this->dialog->setGeometry(*dsize);
    }
}
QVariantMap Hessian::GetViewGeometry()  {
    QRect r = this->view->geometry();
    return toMap(r);
}
QVariantMap Hessian::GetGeometry()  {
    if (this->has_dialog) {
        QRect r = this->view->geometry();
        return toMap(r);
    } else {
        QVariantMap m;
        return m;
    }
}
void Hessian::Move(int x, int y){
    if (this->has_dialog == true) {
        QRect dsize = this->dialog->geometry();
        QRect nd = QRect(x,y,dsize.width(),dsize.height());
        this->dialog->setGeometry(nd);
    }
}
void Hessian::SetViewGeometry(QScriptValue v) {
    QVariant val = v.toVariant();
    if (val.type() == QMetaType::QVariantMap) {
        QVariantMap map = val.toMap();
        SetViewGeometry(map["x"].toInt(),map["y"].toInt(),map["width"].toInt(),map["height"].toInt());
    }
 }
void Hessian::SetGeometry(int x, int y, int width, int height) {
    if (this->has_dialog == true) {
        QRect* dsize = new QRect(x,y,width,height);
        this->dialog->setGeometry(*dsize);
    }
}
void Hessian::SetGeometry(QScriptValue v) {
    QVariant val = v.toVariant();
    if (val.type() == QMetaType::QVariantMap) {
        QVariantMap map = val.toMap();
        SetGeometry(map["x"].toInt(),map["y"].toInt(),map["width"].toInt(),map["height"].toInt());
    }
 }
