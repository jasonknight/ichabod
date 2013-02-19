#include <QObject>
#include <QVariant>
#include <QVariantMap>
#include <QWebElement>
#include <QStringList>
#include <QScriptValue>
#include <QDebug>
#include <QMetaProperty>
#include <QFileInfo>
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
extern QVariantMap toMap(QObject * object) {
    qDebug() << "Converting " << object;
    QVariantMap map;
    const QMetaObject * metaobject = object->metaObject();
    int count = metaobject->propertyCount();
    for (int i = 0; i < count; ++i) {
        QMetaProperty metaproperty = metaobject->property(i);
        const char * name = metaproperty.name();
        QVariant value = object->property(name);
        map.insert(name,value);
    }
    return map;
}
extern QVariantMap toMap(QFileInfo file_info) {
    QVariantMap m;
    m["name"] = file_info.fileName();
    m["path"] = file_info.absoluteFilePath();
    m["baseDir"] = file_info.path();
    m["isDir"] = file_info.isDir();
    m["isExecutable"] = file_info.isExecutable();
    m["isHidden"] = file_info.isHidden();
    m["isReadable"] = file_info.isReadable();
    m["isWritable"] = file_info.isWritable();
    m["isSymlink"] = file_info.isSymLink();
    m["owner"] = file_info.owner();
    m["ownerId"] = file_info.ownerId();
    return m;
}
