
#include <QScriptValueIterator>
#include <QDateTime>
#include <QApplication>
#include <QWebView>
#include "io.h"
#include "factory.h"
#include "getkeyevent.h"
#include "hessian.h"
#include <QTextStream>
#include "tarrytown.h"



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>
#include <X11/Xlibint.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/cursorfont.h>
#include <X11/keysymdef.h>
#include <X11/keysym.h>
#include <X11/extensions/XTest.h>
#include <iostream>
#include <iomanip>
#include <iostream>
#include "chartbl.h"

//X11 stuff

#define PROG "Ichabod"
Display * remoteDisplay (const char * DisplayName) {

  int Event, Error;
  int Major, Minor;

  // open the display
  Display * D = XOpenDisplay ( DisplayName );

  // did we get it?
  if ( ! D ) {
    // nope, so show error and abort
    std::cerr << PROG << ": could not open display \"" << XDisplayName ( DisplayName )
         << "\", aborting." << std::endl;
    exit ( EXIT_FAILURE );
  }

  // does the remote display have the Xtest-extension?
  if ( ! XTestQueryExtension (D, &Event, &Error, &Major, &Minor ) ) {
    // nope, extension not supported
    std::cerr << PROG << ": XTest extension not supported on server \""
         << DisplayString(D) << "\"" << std::endl;

    // close the display and go away
    XCloseDisplay ( D );
    exit ( EXIT_FAILURE );
  }

  // print some information
  std::cerr << "XTest for server \"" << DisplayString(D) << "\" is version "
       << Major << "." << Minor << "." << std::endl << std::endl;;

  // execute requests even if server is grabbed
  XTestGrabControl ( D, True );

  // sync the server
  XSync ( D,True );

  // return the display
  return D;
}
static Display *RemoteDpy;
void sendChar(char c) {


    KeySym ks, sks, *kss, ksl, ksu;
    KeyCode kc, skc;
    int Delay = 10;
    int syms;
#ifdef DEBUG
    int i;
#endif

    sks=XK_Shift_L;

    ks=XStringToKeysym(chartbl[0][(unsigned char)c]);
    if ( ( kc = XKeysymToKeycode ( RemoteDpy, ks ) ) == 0 )
    {
        std::cerr << "No keycode on remote display found for char: " << c << std::endl;
        return;
    }
    if ( ( skc = XKeysymToKeycode ( RemoteDpy, sks ) ) == 0 )
    {
        std::cerr << "No keycode on remote display found for XK_Shift_L!" << std::endl;
        return;
    }

    kss=XGetKeyboardMapping(RemoteDpy, kc, 1, &syms);
    if (!kss)
    {
        std::cerr << "XGetKeyboardMapping failed on the remote display (keycode: " << kc << ")" << std::endl;
        return;
    }
    for (; syms && (!kss[syms-1]); syms--);
    if (!syms)
    {
        std::cerr << "XGetKeyboardMapping failed on the remote display (no syms) (keycode: " << kc << ")" << std::endl;
        XFree(kss);
        return;
    }
    XConvertCase(ks,&ksl,&ksu);
#ifdef DEBUG
    std::cout << "kss: ";
    for (i=0; i<syms; i++) std::cout << kss[i] << " ";
    std::cout << "(" << ks << " l: " << ksl << "  h: " << ksu << ")" << std::endl;
#endif
    if (ks==kss[0] && (ks==ksl && ks==ksu)) sks=NoSymbol;
    if (ks==ksl && ks!=ksu) sks=NoSymbol;
    if (sks!=NoSymbol) XTestFakeKeyEvent ( RemoteDpy, skc, True, Delay );
    XTestFakeKeyEvent ( RemoteDpy, kc, True, Delay );
    XFlush ( RemoteDpy );
    XTestFakeKeyEvent ( RemoteDpy, kc, False, Delay );
    if (sks!=NoSymbol) XTestFakeKeyEvent ( RemoteDpy, skc, False, Delay );
    XFlush ( RemoteDpy );
    XFree(kss);
}


TarryTown::TarryTown(QObject *parent) :
    QObject(parent)
{
    p_engine = new QScriptEngine(this);
    p_originalGlobalObject = p_engine->globalObject();
    RemoteDpy = remoteDisplay(NULL);
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
void TarryTown::p_sendText(QScriptValue target,QString text) {
    int i;
    for (i = 0; i < text.length(); i++) {
        QChar c = text.at(i);
        sendChar(c.toAscii());
    }
}

void TarryTown::pKeyPress(QScriptValue target,QString text) {
    Hessian * tv = (Hessian *)target.toQObject();
    QWebView * v = (QWebView*)tv->GetView();
    QKeyEvent * event = getKeyEvent(text,"press");
    QApplication::sendEvent(v,event);
}
void TarryTown::pKeyRelease(QScriptValue target, QString text) {
    Hessian * tv = (Hessian *)target.toQObject();
    QWebView * v = (QWebView*)tv->GetView();
    QKeyEvent * event = getKeyEvent(text,"release");
    QApplication::sendEvent(v,event);
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
void TarryTown::sleep(int secs) {
    sleep(secs);
}
void TarryTown::usleep(int usecs) {
    usleep(usecs);
}
