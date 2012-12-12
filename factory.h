#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>
#include "testview.h"
class Factory : public QObject
{
    Q_OBJECT
public:
    explicit Factory(QObject *parent = 0);
    
signals:
    
public slots:
    QObject * GetTestView(QString name = "Default");

};

#endif // FACTORY_H
