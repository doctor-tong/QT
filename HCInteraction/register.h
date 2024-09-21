#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <login.h>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QSqlDatabase db_,QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_backButton_clicked();

    void on_RegisteButton_clicked();

private:
    Ui::Register *ui;
    QSqlDatabase db;
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // REGISTER_H
