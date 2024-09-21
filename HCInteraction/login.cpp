#include "login.h"
#include "ui_login.h"


Login::Login(QSqlDatabase db_,QWidget *parent) :
    db(db_),
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


    this->setWindowTitle("登录界面");
    this->setWindowIcon(QIcon(":/login/images/account.png") );
    ui->pwline->setMaxLength(10);
    ui->pwline->setEchoMode(QLineEdit::Password);
    ui->eye->setAlignment(Qt::AlignCenter);//居中
    ui->eye->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
    ui->eye->installEventFilter(this);//安装事件

    QSettings setting ("./config.ini",QSettings::IniFormat);  //设置一个用于存储的ini文件
    QString id_name = setting.value("id_name").toString();//读取账号
    QString pw = setting.value("pw").toString();//读取密码
    QString checkBox=setting.value("checkBox").toString();
    if(checkBox=="Checked")
    {
    ui->checkBox->setCheckState(Qt::Checked);
    ui->idline->setText(id_name); //设置账号
    ui->pwline->setText(pw);  //设置密码
    }
    else
    {
        ui->checkBox->setCheckState(Qt::Unchecked);
    }

}

Login::~Login()
{
    delete ui;
    on_checkBox_stateChanged(3);
}

bool Login::eventFilter(QObject *watched, QEvent *event)
{
    switch (event->type()) {
        case QEvent::Enter:
            ui->pwline->setEchoMode(QLineEdit::Normal);  //显示密码
            ui->eye->setPixmap(QPixmap(":/login/images/eye.png").scaled(20, 20));
            break;
        case QEvent::Leave:
            ui->pwline->setEchoMode(QLineEdit::Password);//隐藏密码
            ui->eye->setPixmap(QPixmap(":/login/images/close_eye.png").scaled(20, 20));
            break;
        default:
            break;
    }
    return QWidget::eventFilter(watched, event);
}

void Login::on_LoginButton_clicked()
{
    QString Id = ui->idline->text();
    QString Password = ui->pwline->text();
    if(Id==""||Password=="")
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"输入检查","用户名、账号或密码不能为空");
    }
    else
    {
        QString sql1 = QString("select * from manager where MId='%1' or Mname='%1'  ").arg(Id);
        QString sql2 = QString("select * from manager where MId='%1' and Mpassword='%2'").arg(Id,Password);
        QString sql3 = QString("select * from manager where Mname='%1' and Mpassword='%2'").arg(Id,Password);
        QSqlQuery query1(sql1);
        if(!query1.next())
            {
                qDebug()<<"Login error";
                QMessageBox::information(this,"登录认证","登录失败,账号有误");
            }
            else
            {
                QSqlQuery query2(sql2);
                QSqlQuery query3(sql3);
                if(!query2.next()&&!query3.next())
                {
                    qDebug()<<"Login error";
                    QMessageBox::information(this,"登录认证","登录失败,密码错误");
                }
                else
                {
                    qDebug()<<"Login success";
                    this->close();
                    menu *mn;
                    query2.first();
                    query3.first();
                    if(query2.first())
                    mn=new menu(db,query2.value("MId").toInt(),query2.value("Mname").toString());
                    if(query3.first())
                    mn=new menu(db,query3.value("MId").toInt(),query3.value("Mname").toString());
                    QMessageBox::information(this,"欢迎","欢迎进入学生管理系统界面");
                    mn->show();
                }
        }
    }

}


void Login::on_cancelButton_clicked()
{
    this->close();
}


void Login::on_RegisteButton_clicked()
{

    Register *re=new Register (db);
    re->show();
    this->close();
}





void Login::on_checkBox_stateChanged(int arg1)
{

       bool status =ui->checkBox->isChecked();
       qDebug()<<"status"<<status;
       if(status == true)
       {
           //"表示被选中";
           QSettings setting ("./config.ini",QSettings::IniFormat);  //设置一个用于存储的ini文件
           setting.setValue("id_name",ui->idline->text());
           setting.setValue("pw",ui->pwline->text());
           setting.setValue("checkBox","Checked");
           setting.sync(); //同步设置，将信息存储到INI里面

       }
       else if(status == false)
       {
           QSettings setting ("./config.ini",QSettings::IniFormat);  //设置一个用于存储的ini文件
           setting.setValue("id_name","");//置空
           setting.setValue("pw","");//置空
           setting.setValue("checkBox","UnChecked");
           setting.sync(); //同步设置，将信息存储到INI里面
           //"表示未被选中";
       }

}



