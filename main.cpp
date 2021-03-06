#include <QApplication>
#include <QScriptEngine>
#include <iostream>
#include <stdio.h>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>
#include <QFileInfoList>
#include "factory.h"
#include "io.h"
#include "macros.h"
#include "browserdialog.h"
#include "tarrytown.h"
#include <QTimer>

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

     //QScriptEngine * engine = new QScriptEngine;


     QString code = QTextStream(&file).readAll();
     file.close();
     /* Factory * f = new Factory;
     IO * io = new IO;
     QScriptValue objectValue = engine->newQObject(f);
     QScriptValue IOobjectValue = engine->newQObject(io);
     engine->globalObject().setProperty("Factory", objectValue);
     engine->globalObject().setProperty("IO", IOobjectValue);
     qDebug() << "Executing script" << fileName;

     QScriptValue r = engine->evaluate(code);
      if (engine->hasUncaughtException()) {
          QStringList backtrace = engine->uncaughtExceptionBacktrace();
          fprintf (stderr, "    %s\n%s\n\n", qPrintable(r.toString()),
                   qPrintable(backtrace.join("\n")));
          return EXIT_FAILURE;
      }
    */
      TarryTown * env = new TarryTown;

      QDir dir("./lib");
      QFileInfoList list;
      if ( ! dir.exists()) {
          dir.setPath("/usr/share/ichabod/lib");
          if (! dir.exists()) {
              qDebug() << "Cannot find lib, needs to be either: ./lib or /usr/share/ichabod/lib";
              goto execute_code;
          }
      }
      dir.setFilter(QDir::Files);
      list  = dir.entryInfoList();
      for (int i = 0; i < list.size(); i++) {
          QFileInfo info = list.at(i);
          QFile file(info.absoluteFilePath());
          if (file.open(QFile::ReadOnly)) {
              qDebug() << "[ichabod] Loading lib file " << info.absoluteFilePath();
              QString lib_code = QTextStream(&file).readAll();
              file.close();
              env->evaluate(lib_code,info.fileName());
          }
      }
      execute_code:
      env->main_code = code;
      env->main_filename = fileName;
      //env->evaluate(code,fileName);
      QTimer::singleShot(0,env,SLOT(restart()));
      return a.exec();
}
