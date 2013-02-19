#include "tarrytown.h"
#include <QScriptValueIterator>
#include <QDateTime>
#include <QApplication>
#include <QWebView>
#include "io.h"
#include "factory.h"
#include "getkeyevent.h"
#include "hessian.h"
#include <QTextStream>
TarryTown::TarryTown(QObject *parent) :
    QObject(parent)
{
    p_engine = new QScriptEngine(this);
    p_originalGlobalObject = p_engine->globalObject();
    rideOut();
}
TarryTown::~TarryTown() {}
QScriptEngine * TarryTown::engine() const { return p_engine; }
bool TarryTown::hasIntervalTimers() const {
     return !p_intervalHash.isEmpty();
}
int TarryTown::setTimeout(const QScriptValue &expression, int delay) {
    if (expression.isString() || expression.isFunction()) {
         int timerId = startTimer(delay);
         p_timeoutHash.insert(timerId, expression);
         return timerId;
    }
    return -1;
}
void TarryTown::clearTimeout(int timerId)
 {
     killTimer(timerId);
     p_timeoutHash.remove(timerId);
 }

 int TarryTown::setInterval(const QScriptValue &expression, int delay)
 {
     if (expression.isString() || expression.isFunction()) {
         int timerId = startTimer(delay);
         p_intervalHash.insert(timerId, expression);
         return timerId;
     }
     return -1;
 }

void TarryTown::clearInterval(int timerId) {
    killTimer(timerId);
    p_intervalHash.remove(timerId);
}

void TarryTown::timerEvent(QTimerEvent *event) {
     int id = event->timerId();
     QScriptValue expression = p_intervalHash.value(id);
     if (!expression.isValid()) {
         expression = p_timeoutHash.value(id);
         if (expression.isValid()) {
             killTimer(id);
         }
     }
     if (expression.isString()) {
         evaluate(expression.toString());
     } else if (expression.isFunction()) {
         //qDebug() << "Calling expression";
         expression.call();
     }
     emitScriptError();
}
void TarryTown::rideOut() {
    if (p_engine->isEvaluating()) {
        p_engine->abortEvaluation();
    }
    {
         QHash<int, QScriptValue>::const_iterator it;
         for (it = p_intervalHash.constBegin(); it != p_intervalHash.constEnd(); ++it)
             killTimer(it.key());
         p_intervalHash.clear();
         for (it = p_timeoutHash.constBegin(); it != p_timeoutHash.constEnd(); ++it)
             killTimer(it.key());
         p_timeoutHash.clear();
     }
    QScriptValue self = p_engine->newQObject(this, QScriptEngine::QtOwnership, QScriptEngine::ExcludeSuperClassContents);

     {
         QScriptValueIterator it(p_originalGlobalObject);
         while (it.hasNext()) {
             it.next();
             self.setProperty(it.scriptName(), it.value(), it.flags());
         }
     }

     self.setProperty("env", self);

     Factory * f = new Factory;
     IO * io = new IO;
     QScriptValue objectValue = p_engine->newQObject(f);
     QScriptValue IOobjectValue =p_engine->newQObject(io);
     self.setProperty("Factory", objectValue);
     self.setProperty("IO", IOobjectValue);
     p_engine->setGlobalObject(self);
     p_engine->collectGarbage();
}
QScriptValue TarryTown::evaluate(const QString &code, const QString &fileName) {
 QScriptValue r = p_engine->evaluate(code, fileName);
 emitScriptError();
 return r;
}
void TarryTown::emitScriptError()
{
    if (p_engine->hasUncaughtException()) {
        QStringList backtrace = p_engine->uncaughtExceptionBacktrace();
        fprintf (stderr, "    %s\n\n", qPrintable(backtrace.join("\n")));
        emit scriptError(p_engine->uncaughtException());

    }
}
void TarryTown::KeyPress(QScriptValue target,QString text) {
    Hessian * tv = (Hessian *)target.toQObject();
    QWebView * v = (QWebView*)tv->GetView();
    QApplication::sendEvent(v,getKeyEvent(text,"press"));
}
void TarryTown::KeyRelease(QScriptValue target, QString text) {
    Hessian * tv = (Hessian *)target.toQObject();
    QWebView * v = (QWebView*)tv->GetView();
    QApplication::sendEvent(v,getKeyEvent(text,"release"));
}
void TarryTown::TestFailure(QString msg) {
    printf("TestFailure: %s\n",msg.toAscii().data());
}
void TarryTown::DebugScriptValue(QScriptValue value) {
    QVariant val = value.toVariant();
    qDebug() << val;
}
void TarryTown::breakpoint() {
    qDebug() << "Entering debugging mode";
    QTextStream in(stdin);
    QTextStream out(stdout);
    QString to_eval;
    while (to_eval != "cont") {
        out << "> ";
        out.flush();
        to_eval = in.readLine();
        to_eval = to_eval.replace(QString("\n"),"");
        if (to_eval != "cont") {
            QScriptValue result = p_engine->evaluate(to_eval);
            if (p_engine->hasUncaughtException()) {
                QStringList backtrace = p_engine->uncaughtExceptionBacktrace();
                fprintf (stderr, "    %s\n\n", qPrintable(backtrace.join("\n")));
            } else {
                QVariant value = result.toVariant();
                if (value.type() == QMetaType::QVariantMap) {
                    qDebug() << "=> " << value.toMap();
                } else if (value.type() == QMetaType::QVariantList) {
                    qDebug() << "=> " << value.toList();
                } else if (value.type() == QMetaType::QVariantHash) {
                    qDebug() << "=> " << value.toHash();
                } else if (value.type() == QMetaType::QString) {
                    qDebug() << "=> \n" << value.toString();
                } else {
                    qDebug() << "=> " << value;
                }
            } // if (p_engine->hasUncaughtException())
        }
    }
}
