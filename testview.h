#ifndef TESTVIEW_H
#define TESTVIEW_H

#include <QObject>
#include <QWebView>
#include <QScriptable>
#include "testpage.h"
#include "logger.h"
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
    int progress;
    Logger * logger;
signals:
    void FinishedLoadingSignal(QString);
public slots:
    bool SetAttribute(QString attribute,QString value);
    void CreateView();
    void Load(QString url);
    void SetProgress(int p);
    void FinishedLoading(bool);
    void ExecuteJS(QString &js);
    QString GetContent();
    QString GetContentAsText();
    QString GetName() { return this->name; }

private slots:
    void JavaScriptWindowObjectCleared();

private:
    QWebView * view;
    TestPage * page;
};

#endif // TESTVIEW_H
