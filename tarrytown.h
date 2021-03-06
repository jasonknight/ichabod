#ifndef TARRYTOWN_H
#define TARRYTOWN_H

#include <QObject>
#include <QHash>
#include <QList>
#include <QTimerEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QScriptEngine>
#include <QScriptable>
#include <QApplication>
#include <QDesktopWidget>
#include <QVariantMap>
#include <QDebug>
#include <unistd.h>

extern QVariantMap toMap(QRect r);
class TarryTown : public QObject
{
    Q_OBJECT
public:
    TarryTown(QObject *parent = 0);
    ~TarryTown();
    Q_INVOKABLE QScriptValue evaluate(const QString &code, const QString &fileName = QString());
    Q_INVOKABLE void pKeyPress(QScriptValue target,QString text);
    Q_INVOKABLE void pKeyRelease(QScriptValue target,QString text);
    Q_INVOKABLE void DebugScriptValue(QScriptValue value);
    Q_INVOKABLE void exit() { QApplication::exit();}
    Q_INVOKABLE void restart() {this->evaluate(this->main_code,this->main_filename);}
    Q_INVOKABLE void breakpoint();
    Q_INVOKABLE void sleep(int secs);
    Q_INVOKABLE void usleep(int usecs);
    Q_INVOKABLE void p_sendText(QScriptValue target, QString text);
    Q_INVOKABLE QVariantMap window() {
        QVariantMap m;
        QDesktopWidget *d = QApplication::desktop();
        m["geometry"] = QVariant(toMap(d->screenGeometry(-1)));
        return m;
    }
    Q_INVOKABLE QVariantMap window(int scr) {
        QVariantMap m;
        QDesktopWidget *d = QApplication::desktop();
        m["geometry"] = QVariant(toMap(d->screenGeometry(scr)));
        return m;
    }
    QScriptValue toWrapper(QObject *object);
    QScriptEngine *engine() const;
    bool hasIntervalTimers() const;
    void rideOut();
    QString main_code;
    QString main_filename;
signals:
    void scriptError(const QScriptValue &error);
public slots:
    int setInterval(const QScriptValue &expression, int delay);
    void clearInterval(int timerId);

    int setTimeout(const QScriptValue &expression, int delay);
    void clearTimeout(int timerId);



    void TestFailure(QString msg);


private:
    QScriptEngine * p_engine;
    QScriptValue p_originalGlobalObject;
    QHash<int, QScriptValue> p_intervalHash;
    QHash<int, QScriptValue> p_timeoutHash;
    void emitScriptError();
protected:
     void timerEvent(QTimerEvent *event);
};

#endif // TARRYTOWN_H
