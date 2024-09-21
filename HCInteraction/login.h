#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <mainwindow.h>
#include <register.h>
#include <menu.h>
#include <QCheckBox>
#include<QSettings>
#include <QPainter>


namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QSqlDatabase db,QWidget *parent = nullptr);
    ~Login();

private slots:

    void on_LoginButton_clicked();
    void on_cancelButton_clicked();
    void on_RegisteButton_clicked();

    bool eventFilter(QObject *watched, QEvent *event);

    void on_checkBox_stateChanged(int arg1);



private:
    Ui::Login *ui;
    QSqlDatabase db;
};

#endif // LOGIN_H
