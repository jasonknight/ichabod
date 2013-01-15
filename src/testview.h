#ifndef TESTVIEW_H
#define TESTVIEW_H

#include <QObject>
#include <QWebView>
#include <QScriptable>
#include "testpage.h"
#include "logger.h"
#include <QVariantMap>
#include <QVariant>
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

    Q_PROPERTY( QString name WRITE SetName READ GetName )
        Q_INVOKABLE QString GetName() { return this->name; }
        Q_INVOKABLE void SetName(QString n) { this->name = n; }

    Q_PROPERTY( QString lastLoadedPath WRITE setLastLoadedPath READ getLastLoadedPath )
        void setLastLoadedPath(QString str) { lastLoadedPath = str; }
        QString getLastLoadedPath() { return lastLoadedPath; }
    Q_INVOKABLE QVariantMap GetElement(QString selector);
    Q_INVOKABLE QVariantMap GetElement(QString selector,QStringList css_attrs);

    Q_INVOKABLE QVariant ExecuteJS(QString js);

    Q_INVOKABLE bool SetAttribute(QString attribute,QString value);
    Q_INVOKABLE void CreateView();
    Q_INVOKABLE void Load(QString url);
    Q_INVOKABLE void SetProgress(int p);
    Q_INVOKABLE void FinishedLoading(bool);

    Q_INVOKABLE void Show();

    Q_INVOKABLE void Click(QScriptValue id);

    Q_INVOKABLE void MouseDown(QScriptValue id);


    Q_INVOKABLE void MouseUp(QScriptValue id);


    Q_INVOKABLE void Fill(QScriptValue id, QString value);


    Q_INVOKABLE QString GetContent();
    Q_INVOKABLE QString GetContentOfElement(QString selector);
    Q_INVOKABLE QString GetContentAsText();


    QString status;
    int progress;
    Logger * logger;
signals:
    void FinishedLoadingSignal(QString);
public slots:





    QObject * GetPage();
    QWebView * GetView() { return this->view; }
private slots:
    void JavaScriptWindowObjectCleared();

private:
    QWebView * view;
    TestPage * page;
};

#endif // TESTVIEW_H
