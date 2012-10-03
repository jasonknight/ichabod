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


SOURCES += main.cpp \
    testview.cpp \
    testpage.cpp \
    cookiejar.cpp \
    network.cpp \
    factory.cpp \
    io.cpp \
    logger.cpp \
    downloader.cpp

HEADERS += \
    testview.h \
    testpage.h \
    cookiejar.h \
    network.h \
    factory.h \
    io.h \
    macros.h \
    logger.h \
    downloader.h
LIBS += -lrt

OTHER_FILES += \
    test.js
