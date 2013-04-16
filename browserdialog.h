#ifndef BROWSERDIALOG_H
#define BROWSERDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QWebView>
class BrowserDialog : public QDialog
{
    Q_OBJECT
public:
    explicit BrowserDialog(QWidget *parent = 0);
    void append(QWebView *browser);
signals:
    
public slots:
    
};

#endif // BROWSERDIALOG_H
