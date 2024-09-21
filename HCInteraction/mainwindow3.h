#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

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
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QSqlDatabase db_,QWidget *parent = nullptr);
    ~MainWindow3();

private slots:

    void on_SC_View_clicked(const QModelIndex &index);

    void on_searcButton_clicked();


    void on_DeleteButton_clicked();

    void on_AddButton_clicked();

    void on_SubmitButton_clicked();

    void on_RollButton_clicked();

private:
    Ui::MainWindow3 *ui;
    QSqlDatabase db;
    QSqlTableModel *SCModel_;
};

#endif // MAINWINDOW3_H
