#include "browserdialog.h"

#include "testview.h"
BrowserDialog::BrowserDialog(QWidget *parent) :
    QDialog(parent)
{

}
void BrowserDialog::append(QWebView * browser)  {
    QVBoxLayout* topLayout = new QVBoxLayout;
    topLayout->addWidget(browser);
    setLayout(topLayout);

}
