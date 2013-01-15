#-------------------------------------------------
#
# Project created by QtCreator 2012-09-24T14:11:25
#
#-------------------------------------------------

QT       += core webkit script network gui


TARGET = ichabod
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += src/main.cpp \
    src/testview.cpp \
    src/testpage.cpp \
    src/cookiejar.cpp \
    src/network.cpp \
    src/factory.cpp \
    src/io.cpp \
    src/logger.cpp \
    src/downloader.cpp \
    src/browserdialog.cpp \
    src/tarrytown.cpp \
    src/helpers.cpp

HEADERS += \
    src/testview.h \
    src/testpage.h \
    src/cookiejar.h \
    src/network.h \
    src/factory.h \
    src/io.h \
    src/macros.h \
    src/logger.h \
    src/downloader.h \
    src/browserdialog.h \
    src/tarrytown.h \
    src/getkeyevent.h
LIBS += -lrt

OTHER_FILES += \
    test.js

FORMS +=
