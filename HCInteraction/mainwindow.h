#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QStandardItemModel>
#include <QTableView>
#include <QSqlTableModel>

#include <QMessageBox>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDate>

#include <QStackedLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QSqlDatabase db_,QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_searcButton_clicked();

    void on_SubmitButton_clicked();

    void on_RollButton_clicked();

    void on_Stu_View_clicked(const QModelIndex &index);

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

    void on_StuId_editingFinished();

    void on_Sname_editingFinished();

    void on_Ssex_editingFinished();

    void on_Sage_editingFinished();

    void on_SsexComboBox_currentIndexChanged(int index);

    void closeEvent(QCloseEvent *e);

    void on_Major_editingFinished();

    void on_dateEdit_dateChanged(const QDate &date);

private:
    Ui::MainWindow *ui;
     QSqlTableModel *StuModel;
     QSqlDatabase db;
     QSqlTableModel *StuModel_;
};
#endif // MAINWINDOW_H
