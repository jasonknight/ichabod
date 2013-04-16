#include "factory.h"
#include "browserdialog.h"
#include <QDebug>
Factory::Factory(QObject *parent) :
    QObject(parent)
{
}
Factory::~Factory() {
    qDebug() << "Calling Factory Destructor";
    for (int i = 0; i < m_views.size(); i++) {
        Hessian * v = m_views.at(i);
        delete v;
    }
    m_views.clear();
}

QObject * Factory::GetHessian(QString name) {
    Hessian * t = new Hessian;
    t->name = name;
    m_views.append(t);
    return (QObject *)t;
}


