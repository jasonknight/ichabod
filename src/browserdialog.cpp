#include "browserdialog.h"

#include "hessian.h"
BrowserDialog::BrowserDialog(QWidget *parent) :
    QDialog(parent)
{

}
void BrowserDialog::append(QWebView * browser)  {
    QVBoxLayout* topLayout = new QVBoxLayout;
    topLayout->addWidget(browser);
    setLayout(topLayout);

}
