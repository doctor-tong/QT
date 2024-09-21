#include "helpwindow.h"
#include "ui_helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("帮助界面");
    this->setWindowIcon(QIcon(":/menu/images/help.png") );
}

HelpWindow::~HelpWindow()
{
    delete this->ui;
}

void HelpWindow::closeEvent(QCloseEvent *e){
    // 想要实现的操作
    this->hide();
}
