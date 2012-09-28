#include "factory.h"

Factory::Factory(QObject *parent) :
    QObject(parent)
{
}

QObject * Factory::GetTestView(QString name) {
    TestView * t = new TestView;
    t->name = name;
    return (QObject *)t;
}
