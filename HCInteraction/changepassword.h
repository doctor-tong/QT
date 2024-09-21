#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <login.h>

namespace Ui {
class changePassWord;
}

class changePassWord : public QWidget
{
    Q_OBJECT

public:
    explicit changePassWord(int accountID_,QWidget *parent = nullptr);
    ~changePassWord();

private slots:
    void on_RegisteButton_clicked();

    void on_backButton_clicked();

private:
    Ui::changePassWord *ui;
    QSqlDatabase db;
    int accountID;
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // CHANGEPASSWORD_H
