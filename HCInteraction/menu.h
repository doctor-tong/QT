#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

#include <QMainWindow>
#include <mainwindow.h>
#include <mainwindow2.h>
#include <mainwindow3.h>
#include <helpwindow.h>
#include <login.h>
#include <changepassword.h>
#include <changemname.h>

#include <QStandardItemModel>
#include <QTableView>
#include <QSqlTableModel>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

#include <QStackedLayout>
#include <QStackedWidget>
#include <helpwindow.h>

namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QSqlDatabase db_, int accountID_=202201, QString Mname_="zhanglei", QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_StuButton_clicked();

    void on_clasButton_clicked();

    void on_gradeButton_clicked();

    void on_helpButton_clicked();

    void on_exitButton_clicked();

    void on_studentManage_triggered();

    void on_classManage_triggered();

    void on_gradeManage_triggered();

    void on_help_triggered();

    void on_exit_triggered();

    void on_switchAccount_triggered();

    void on_passWordEdit_triggered();

    void on_nameReEdit_triggered();

private:
    Ui::menu *ui;
    QSqlDatabase db;

   MainWindow *mw1;
   MainWindow2 *mw2;
   MainWindow3 *mw3;
   HelpWindow *help=new HelpWindow();
   int accountID;
   QString Mname;

};

#endif // MENU_H
