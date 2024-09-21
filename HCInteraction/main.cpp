
#include <login.h>
#include <menu.h>
#include<QSqlDatabase>
#include <QApplication>
#include<iostream>
#include <QSqlQuery>
#include <QDebug>
#include <QSql>
#include <QSqlError>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
        db.setHostName("127.0.0.1");
        db.setPort(3306);
        db.setDatabaseName("stumanager");
        db.setUserName("root");
        db.setPassword("123456");
        bool ok = db.open();
        if (ok){
            std::cout<<"sucess\n";
        }
        else {
           std::cout<<"error\n";
            qDebug()<<"error open database because"<<db.lastError().text();
        }

    QApplication a(argc, argv);
    Login lo(db);
    lo.show();
//    menu *mn=new menu(db);
//    mn->show();
    return a.exec();
}
