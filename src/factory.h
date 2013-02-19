#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>
#include <QList>
#include "hessian.h"
class Factory : public QObject
{
    Q_OBJECT
public:
    Factory(QObject *parent = 0);
    ~Factory();
    // Left here for backwards compat
    Q_INVOKABLE QObject * GetTestView(QString name = "Default") { return GetHessian(name);}
    Q_INVOKABLE QObject * GetHessian(QString name = "Default");
signals:
    
public slots:

private:
    QList<Hessian *> m_views;
};

#endif // FACTORY_H
