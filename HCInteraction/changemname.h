#ifndef CHANGEMNAME_H
#define CHANGEMNAME_H

#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <login.h>


namespace Ui {
class changemname;
}

class changemname : public QWidget
{
    Q_OBJECT

public:
    explicit changemname(int accountID_,QWidget *parent = nullptr);
    ~changemname();

private slots:
    void on_RegisteButton_clicked();

    void on_backButton_clicked();

private:
    Ui::changemname *ui;
    QSqlDatabase db;
    int accountID;
    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // CHANGEMNAME_H
