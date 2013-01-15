#include <QObject>
#include <QVariant>
#include <QVariantMap>
#include <QWebElement>
#include <QStringList>
#include <QScriptValue>
#include <QDebug>
extern QString idOf(QScriptValue v) {
    QVariant val = v.toVariant();
    //qDebug() << "### idOf(" << val.typeName() << ")";
    if (val.type() == QMetaType::QVariantMap) {
        QVariantMap map = val.toMap();
        QString id = map["id"].toString();
        return id;
    } else {
        //qDebug() << "Converting to QString";
        return val.toString();
    }
}
extern QVariantMap toMap(QWebElement el, QStringList css_attrs) {
    QVariantMap map;
    map["isNull"] = false;
    map["classes"] = QVariant(el.classes());
    map["tagName"] = QVariant(el.tagName());
    QVariantMap attrs;
    QStringList attributes = el.attributeNames();
    foreach(QString name,attributes) {
        attrs[name] = el.attribute(name);
    }
    map["id"] = "#" + el.attribute("id");
    map["attributes"] = QVariant(attrs);
    QVariantMap css;
    foreach (QString css_attr, css_attrs) {
        css[css_attr] = el.styleProperty(css_attr, QWebElement::CascadedStyle);
    }
    int i = 0;
    QVariantMap children;
    QWebElementCollection col = el.findAll("*");
    for (i = 0; i < col.count(); i++) {
        QWebElement cel = col.at(i);
        QString name = cel.attribute("id","__NOIDSET");
        if (name == "__NOIDSET") {
            name = cel.attribute("name", "__NONAMESET");
            if (name == "__NONAMESET") {
                name = QString::number(i);
            }
        }
        children.insert( name,QVariant( toMap(cel,css_attrs) ) );
    }
    map["children"] = QVariant(children);
    map["css"] = QVariant(css);
    return map;
}
