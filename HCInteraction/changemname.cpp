#include "changemname.h"
#include "ui_changemname.h"

changemname::changemname(int accountID_,QWidget *parent) :
    accountID(accountID_),
    QWidget(parent),
    ui(new Ui::changemname)
{
    ui->setupUi(this);
    this->setWindowTitle("修改用户名");
    this->setWindowIcon(QIcon(":/menu/images/password.png") );
    ui->pwline_2->setMaxLength(10);

    ui->eye_2->setAlignment(Qt::AlignCenter);
    ui->eye_2->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
    ui->eye_2->installEventFilter(this);//安装事件
}

changemname::~changemname()
{
    delete ui;
}

bool changemname::eventFilter(QObject *watched, QEvent *event)
{
    switch (event->type()) {
        case QEvent::Enter:
        if(watched==ui->eye_2)
        {
            ui->pwline_2->setEchoMode(QLineEdit::Normal);  //显示密码
            ui->eye_2->setPixmap(QPixmap(":/login/images/eye.png").scaled(20, 20));
        }
            break;
        case QEvent::Leave:
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


void changemname::on_RegisteButton_clicked()
{
    QString Password2 = ui->pwline_2->text();
    if(Password2=="")
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"输入检查","密码不能为空");
    }
    else
    {
        QSqlQuery query;
        QString sql1 = QString("UPDATE manager SET Mname = '%1' WHERE Mid = '%2'").arg(Password2,QString::number(accountID));
        query.prepare(sql1);
        if(query.exec(sql1))
        QMessageBox::information(this,"提示","修改成功！",QMessageBox::Ok);
        else
        QMessageBox::warning(this, tr("提示"), tr("修改失败，详情: %1").arg(query.lastError().text()));//输出报错原因
    }
}


void changemname::on_backButton_clicked()
{
    this->close();
}

