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
class TarryTown : public QObject
{
    Q_OBJECT
public:
    TarryTown(QObject *parent = 0);
    ~TarryTown();
    QScriptValue evaluate(const QString &code, const QString &fileName = QString());
    QScriptValue toWrapper(QObject *object);
    QScriptEngine *engine() const;
    bool hasIntervalTimers() const;
    void rideOut();
signals:
    void scriptError(const QScriptValue &error);
public slots:
    int setInterval(const QScriptValue &expression, int delay);
    void clearInterval(int timerId);

    int setTimeout(const QScriptValue &expression, int delay);
    void clearTimeout(int timerId);

    void KeyPress(QScriptValue target,QString text);
    void KeyRelease(QScriptValue target,QString text);

    void TestFailure(QString msg);

    void exit() {
        QApplication::exit();
    }
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
