#ifndef Hessian_H
#define Hessian_H

#include <QObject>
#include <QWebView>
#include <QScriptable>
#include "testpage.h"
#include "logger.h"
#include <QVariantMap>
#include <QVariant>
#include <QScriptValue>
#include "browserdialog.h"
extern QVariantMap toMap(const QRect r);
class Hessian : public QObject, protected QScriptable
{
    Q_OBJECT
public:
    Hessian(QObject *parent = 0);
    ~Hessian();

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
    Q_PROPERTY( bool ready WRITE setready READ getready )
        bool getready() { return p_ready; }
        void setready(bool r) { p_ready = r; }
    Q_INVOKABLE QVariantMap         GetElement(QString selector);
    Q_INVOKABLE QVariantMap         GetElement(QString selector,QStringList css_attrs);
    Q_INVOKABLE QVariantMap         GetElements(QString selector);
    Q_INVOKABLE QVariantMap         GetElements(QString selector,QStringList css_attrs);

    Q_INVOKABLE QVariant            ExecuteJS(QString js);

    Q_INVOKABLE bool                SetAttribute(QString attribute,QString value);
    Q_INVOKABLE void                CreateView();
    Q_INVOKABLE void                Load(QString url);
    Q_INVOKABLE void                SetProgress(int p);
    Q_INVOKABLE void                FinishedLoading(bool);

    Q_INVOKABLE void                Show();
    Q_INVOKABLE void                Hide();

    Q_INVOKABLE void                Click(QScriptValue id);

    Q_INVOKABLE void                MouseDown(QScriptValue id);


    Q_INVOKABLE void                MouseUp(QScriptValue id);


    Q_INVOKABLE void                Fill(QScriptValue id, QString value);


    Q_INVOKABLE QString             GetContent();
    Q_INVOKABLE QString             GetContentOfElement(QString selector);
    Q_INVOKABLE QString             GetContentAsText();
    Q_INVOKABLE QObject *           GetPage();
    Q_INVOKABLE QObject *           GetView() { return (QObject *)this->view; }
    Q_INVOKABLE QVariantMap         GetViewGeometry();
    Q_INVOKABLE QVariantMap         GetGeometry();

    Q_INVOKABLE void                Move(int x,int y);
    Q_INVOKABLE void                SetViewGeometry(int x,int y,int width, int height);
    Q_INVOKABLE void                SetViewGeometry(QScriptValue v);
    Q_INVOKABLE void                SetGeometry(int x,int y,int width, int height);
    Q_INVOKABLE void                SetGeometry(QScriptValue v);

    QString status;
    int progress;
    Logger * logger;
signals:
    void FinishedLoadingSignal(QString);
public slots:
private slots:
    void JavaScriptWindowObjectCleared();

private:
    QWebView * view;
    TestPage * page;
    BrowserDialog * dialog;
    bool has_dialog;
    bool _created;
    QRect*  size;
    bool p_ready;
};

#endif // Hessian_H
