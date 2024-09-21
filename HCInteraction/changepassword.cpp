#include "changepassword.h"
#include "ui_changepassword.h"

changePassWord::changePassWord(int accountID_,QWidget *parent) :
    accountID(accountID_),
    QWidget(parent),
    ui(new Ui::changePassWord)
{
    ui->setupUi(this);
    this->setWindowTitle("修改密码");
    this->setWindowIcon(QIcon(":/menu/images/password.png") );
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

changePassWord::~changePassWord()
{
    delete ui;
}

bool changePassWord::eventFilter(QObject *watched, QEvent *event)
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

void changePassWord::on_RegisteButton_clicked()
{
    QString Password1 = ui->pwline->text();
    QString Password2 = ui->pwline_2->text();
    if(Password1==""||Password2=="")
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"输入检查","密码不能为空");
    }
    else if(Password1==Password2)
    {
        QMessageBox::information(this,"输入检查","两次输入密码相同同");
    }
    else
    {


        QSqlQuery query;
        QString sql1 = QString("UPDATE manager SET Mpassword = '%1' WHERE Mid = '%2'").arg(Password2,QString::number(accountID));
        query.prepare(sql1);
        if(query.exec(sql1))
        QMessageBox::information(this,"提示","修改成功！",QMessageBox::Ok);
        else
        QMessageBox::warning(this, tr("提示"), tr("修改失败，详情: %1").arg(query.lastError().text()));//输出报错原因
    }

}


void changePassWord::on_backButton_clicked()
{
    this->close();
}

