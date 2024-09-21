#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTableView>
#include <QSqlTableModel>

#include <QMessageBox>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

#include <QStackedLayout>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QSqlDatabase db_,QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_Course_View_clicked(const QModelIndex &index);

    void on_searcButton_clicked();

    void on_DeleteButton_clicked();

    void on_AddButton_clicked();

    void on_SubmitButton_clicked();

    void on_RollButton_clicked();

    void on_CId_editingFinished();

    void on_Cname_editingFinished();

private:
    Ui::MainWindow2 *ui;
     QSqlDatabase db;
     QSqlTableModel *CourseModel_;
};

#endif // MAINWINDOW2_H
