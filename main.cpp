#include <QApplication>
#include <QScriptEngine>
#include <iostream>
#include <stdio.h>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "factory.h"
#include "io.h"
#include "macros.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (argc < 2) {
         fprintf(stderr, "*** you must specify a script file to evaluate\n");
         return(-1);
     }

     QString fileName = QString::fromLatin1(argv[1]);
     QFile file(fileName);
     if (!file.open(QFile::ReadOnly)) {
         fprintf(stderr, "*** failed to open `%s' for reading\n", argv[1]);
         return(-1);
     }

     QScriptEngine * engine = new QScriptEngine;



     QString code = QTextStream(&file).readAll();
     file.close();
     Factory * f = new Factory;
     IO * io = new IO;
     QScriptValue objectValue = engine->newQObject(f);
     QScriptValue IOobjectValue = engine->newQObject(io);
     engine->globalObject().setProperty("Factory", objectValue);
     engine->globalObject().setProperty("IO", IOobjectValue);
     qDebug() << "Executing script" << fileName;
     QScriptValue r = engine->evaluate(code);
     qDebug() << "...well...";
      if (engine->hasUncaughtException()) {
          QStringList backtrace = engine->uncaughtExceptionBacktrace();
          fprintf (stderr, "    %s\n%s\n\n", qPrintable(r.toString()),
                   qPrintable(backtrace.join("\n")));
          return EXIT_FAILURE;
      }

      return a.exec();
}
