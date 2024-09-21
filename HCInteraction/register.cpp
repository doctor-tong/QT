#include "register.h"
#include "ui_register.h"
#include <QCoreApplication>
#include <QDebug>
#include <QRegularExpressionValidator>

Register::Register(QSqlDatabase db_,QWidget *parent) :
    db(db_),
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    this->setWindowTitle("注册账号");
    this->setWindowIcon(QIcon(":/login/images/modify.png") );
    ui->pwline->setEchoMode(QLineEdit::Password);
    ui->pwline_2->setEchoMode(QLineEdit::Password);
    ui->pwline->setMaxLength(10);
    ui->pwline_2->setMaxLength(10);

    ui->eye->setAlignment(Qt::AlignCenter);
    ui->eye->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
    ui->eye->installEventFilter(this);//安装事件

    ui->eye_2->setAlignment(Qt::AlignCenter);
    ui->eye_2->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
    ui->eye_2->installEventFilter(this);//安装事件
}

Register::~Register()
{
    delete ui;

}

bool Register::eventFilter(QObject *watched, QEvent *event)
{
    switch (event->type()) {
        case QEvent::Enter:
        if(watched==ui->eye)
        {
            ui->pwline->setEchoMode(QLineEdit::Normal);  //显示密码
            ui->eye->setPixmap(QPixmap(":/login/images/eye.png").scaled(20, 20));
        }
        if(watched==ui->eye_2)
        {
            ui->pwline_2->setEchoMode(QLineEdit::Normal);  //显示密码
            ui->eye_2->setPixmap(QPixmap(":/login/images/eye.png").scaled(20, 20));
        }
            break;
        case QEvent::Leave:
        if(watched==ui->eye)
        {
            ui->pwline->setEchoMode(QLineEdit::Password);//隐藏密码
            ui->eye->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
        }
        if(watched==ui->eye_2)
        {
            ui->pwline_2->setEchoMode(QLineEdit::Password);  //显示密码
            ui->eye_2->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
        }
            break;
        default:
            break;
    }
    return QWidget::eventFilter(watched, event);
}

void Register::on_backButton_clicked()
{
    Login *login=new Login (db);
    login->show();
    this->close();
}


void Register::on_RegisteButton_clicked()
{
    QString name = ui->nameline->text();
    QString Password1 = ui->pwline->text();
    QString Password2 = ui->pwline_2->text();
    bool flag=0;
    int nCount = Password1.count();
    for(int i = 0; i < nCount; i++)
    {
        QChar ch = Password1.at(i);
        ushort uNum = ch.unicode();
        if(uNum >= 0x4E00 && uNum <= 0x9FA5)
        {
               flag=1;
               break;
        }
    }
    if(name==""||Password1==""||Password2=="")
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"输入检查","用户名或密码不能为空");
    }
    else if(Password1!=Password2)
    {
        QMessageBox::information(this,"输入检查","两次输入密码不同");
    }
    else if(flag)
    {
        QMessageBox::information(this,"输入检查","密码含有中文");
    }
    else if(name.length()>8)
    {
        QMessageBox::information(this,"输入检查","请输入不超过8位的用户名");
    }
    else if(Password1.length()>16)
    {
        QMessageBox::information(this,"输入检查","请输入不超过16位的密码");
    }
    else
    {
            QString sql1 = QString("select * from manager where Mname='%1' ").arg(name);
            QSqlQuery query(sql1);
            if(query.next())
            {

                QMessageBox::information(this,"提示","用户名已存在！",QMessageBox::Ok);

            }
            else
            {
                query.prepare("insert into manager(Mname,Mpassword)"
                              "values(:Mname_,:Mpassword_)");
                query.bindValue(":Mname_", name);
                query.bindValue(":Mpassword_",Password1);
                if(query.exec())
                QMessageBox::information(this,"提示","注册成功！",QMessageBox::Ok);
                else
                QMessageBox::warning(this, tr("提示"), tr("注册失败，详情: %1").arg(query.lastError().text()));//输出报错原因
            }
    }
}

