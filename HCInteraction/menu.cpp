#include "menu.h"
#include "ui_menu.h"

menu::menu(QSqlDatabase db_,int accountID_,QString Mname_,QWidget *parent) :
     db(db_),
     accountID(accountID_),
     Mname(Mname_),
    QMainWindow(parent),
    ui(new Ui::menu)
{

     qDebug()<<accountID_;
     qDebug()<<Mname;
    ui->setupUi(this);

    this->setStyleSheet("QMainWindow {background-image:url(:/menu/images/school.webp)}");

    ui->hellolabel->setText(("欢迎您!\nID:")+QString::number(accountID)+("\n用户名:")+Mname);

    mw1=new MainWindow(db_);
    mw2=new MainWindow2(db_);
    mw3=new MainWindow3(db_);

    ui->stackedWidget->addWidget(mw1);
    ui->stackedWidget->addWidget(mw2);
    ui->stackedWidget->addWidget(mw3);

    setWindowTitle("主菜单窗口");
     this->setWindowIcon(QIcon(":/menu/images/menu.png") );
}

menu::~menu()
{
    delete ui;
}

void menu::on_StuButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);

}


void menu::on_clasButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void menu::on_gradeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void menu::on_helpButton_clicked()
{
    HelpWindow *help=new HelpWindow();
    help->show();

}


void menu::on_exitButton_clicked()
{
    this->close();
}


void menu::on_studentManage_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void menu::on_classManage_triggered()
{
     ui->stackedWidget->setCurrentIndex(1);
}


void menu::on_gradeManage_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void menu::on_help_triggered()
{
    HelpWindow *help=new HelpWindow();
    help->show();
}


void menu::on_exit_triggered()
{
     this->close();
}


void menu::on_switchAccount_triggered()
{

    Login *lo=new Login(db);//必须用指针
    lo->show();
    this->close();
}


void menu::on_passWordEdit_triggered()
{
    changePassWord *ch=new changePassWord(this->accountID);
    ch->show();
}


void menu::on_nameReEdit_triggered()
{
    changemname *ch=new changemname(this->accountID);
    ch->show();
}

