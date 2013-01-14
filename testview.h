#ifndef TESTVIEW_H
#define TESTVIEW_H

#include <QObject>
#include <QWebView>
#include <QScriptable>
#include "testpage.h"
#include "logger.h"
#include <QVariantMap>
#include <QScriptValue>
class TestView : public QObject, protected QScriptable
{
    Q_OBJECT
public:
    explicit TestView(QObject *parent = 0);

    bool use_cache;
    QString cache_location;
    bool use_local_db;
    QString local_db_location;
    bool use_cookies;
    QString cookie_location;
    QString name;
    QString lastLoadedPath;
    Q_PROPERTY( QString name WRITE setName READ getName )

    Q_PROPERTY( QString lastLoadedPath WRITE setLastLoadedPath READ getLastLoadedPath )
    Q_INVOKABLE QVariantMap GetElement(QString selector);
    Q_INVOKABLE QVariantMap GetElement(QString selector,QStringList css_attrs);
    Q_INVOKABLE QVariant ExecuteJS(QString js);
    QString status;
    int progress;
    Logger * logger;
signals:
    void FinishedLoadingSignal(QString);
public slots:

    void setName(QString str) { name = str; }
    QString getName() { return name; }

    void setLastLoadedPath(QString str) { lastLoadedPath = str; }
    QString getLastLoadedPath() { return lastLoadedPath; }


    bool SetAttribute(QString attribute,QString value);
    void CreateView();
    void Load(QString url);
    void SetProgress(int p);
    void FinishedLoading(bool);

    void Show();
    void Click(QString id);
    void MouseDown(QString id);
    void MouseUp(QString id);
    void Fill(QString id, QString value);
    QString GetContent();
    QString GetContentOfElement(QString selector);
    QString GetContentAsText();
    QString GetName() { return this->name; }
    QObject * GetPage();
    QWebView * GetView() { return this->view; }
private slots:
    void JavaScriptWindowObjectCleared();

private:
    QWebView * view;
    TestPage * page;
};

#endif // TESTVIEW_H
