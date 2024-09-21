#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QSqlDatabase db_,QWidget *parent)
    : db(db_)
    , QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    StuModel_ = new QSqlTableModel(this, db);
    StuModel_->setEditStrategy(QSqlTableModel::OnManualSubmit);//编辑策略
    StuModel_->setTable("stu");
    StuModel_->setHeaderData(StuModel_->fieldIndex("StuId"),Qt::Horizontal,"学号");
    StuModel_->setHeaderData(StuModel_->fieldIndex("Sname"),Qt::Horizontal,"姓名");
    StuModel_->setHeaderData(StuModel_->fieldIndex("Ssex"),Qt::Horizontal,"性别");
    StuModel_->setHeaderData(StuModel_->fieldIndex("Sage"),Qt::Horizontal,"年龄");
    StuModel_->setHeaderData(StuModel_->fieldIndex("Major"),Qt::Horizontal,"专业");
    StuModel_->setHeaderData(StuModel_->fieldIndex("Sdate"),Qt::Horizontal,"入学时间");
    ui->Stu_View->setModel(StuModel_);
    StuModel_->select();
    ui->Stu_View->setCurrentIndex(QModelIndex());//初始化选中位置
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_searcButton_clicked()//查询
{
    QString word=ui->searchLine->text();
    if(word=="")
    {
        qDebug()<<" error";
        QMessageBox::information(this,"字符检测","检索为空");
        StuModel_->setFilter("");
        StuModel_->select();

    }
    else
    {
         QString queryStr;
        if(ui->SearchComboBox->currentText()=="学号")
             queryStr = QObject::tr("StuId = '%1'").arg(word);
        if(ui->SearchComboBox->currentText()=="姓名")
             queryStr = QObject::tr("Sname = '%1'").arg(word);
        if(ui->SearchComboBox->currentText()=="年龄")
             queryStr = QObject::tr("Sage = '%1'").arg(word);
        if(ui->SearchComboBox->currentText()=="专业")
             queryStr = QObject::tr("Major = '%1'").arg(word);

            StuModel_->setFilter(queryStr);
            StuModel_->select();
    }
}


void MainWindow::on_SubmitButton_clicked()//提交
{

    QMessageBox msgBox(QMessageBox::NoIcon,"提示","是否要提交修改?", QMessageBox::Yes|QMessageBox::No);
    msgBox.setStyleSheet("QLabel{"
            "min-width: 100px;"
            "min-height: 50px; "
            "font-size: 16px;"
            "}");
        int iResult = msgBox.exec();
        switch (iResult)
        {
        case QMessageBox::Yes:
            if(StuModel_->submitAll())
            {
             StuModel_->submitAll();
             msgBox.about(this,"提示","已提交表单");
            }
            else
            {
             QMessageBox::warning(this, tr("提示"), tr("提交表单有误，详情: %1").arg(StuModel_->lastError().text()));
            }
            break;
        case QMessageBox::No:
            msgBox.about(this,"提示","已取消提交");
            break;
        default:
            break;
        }
}


void MainWindow::on_RollButton_clicked()//回滚
{

    QMessageBox msgBox(QMessageBox::NoIcon,"提示","是否要回滚表单?", QMessageBox::Yes|QMessageBox::No);
    msgBox.setStyleSheet("QLabel{"
            "min-width: 100px;"
            "min-height: 50px; "
            "font-size: 16px;"
            "}");
        int iResult = msgBox.exec();
        switch (iResult)
        {
        case QMessageBox::Yes:
            StuModel_->revertAll();
            StuModel_->setFilter("");
            StuModel_->select();
            msgBox.about(NULL,"提示","已回滚表单");
            break;
        case QMessageBox::No:
            msgBox.about(NULL,"提示","已取消回滚");
            break;
        default:
            break;
        }
}


void MainWindow::on_Stu_View_clicked(const QModelIndex &index)//点击表反馈
{
    QSqlRecord record=StuModel_->record(index.row()); //关键步骤
    QString Sname = record.value("Sname").toString();
        //02.下同
    QString StuID = record.value("StuID").toString();
    QString Ssex= record.value("Ssex").toString();
    QString Sage= record.value("Sage").toString();
    QString Major= record.value("Major").toString();
    QDate Sdate= record.value("Sdate").toDate();
        //显示相应文本到lineEdit控件
        ui->StuId->setText(StuID);
        ui->Sname->setText(Sname);
        ui->Ssex->setText(Ssex);
        ui->Sage->setText(Sage);
        ui->Major->setText(Major);
        ui->dateEdit->setDate(Sdate);
}


void MainWindow::on_AddButton_clicked()//添加
{

    db.transaction();
    //获取当前的行数
    int row = StuModel_->rowCount();
    //在末尾插入一行
    StuModel_->insertRow(row);
    int id = row+1;
    StuModel_->setData(StuModel_->index(row,0),id);

}


void MainWindow::on_DeleteButton_clicked()//删除
{
   //从表格中获取要删除的行
   int row = ui->Stu_View->currentIndex().row();
   qDebug()<<row;
   if(row>=0)
   {
   StuModel_->removeRow(row);
   QMessageBox::information(this,"提示","在表单中已标记删除");
   }
}


void MainWindow::on_StuId_editingFinished()//StuId文本框修改
{
    int row = ui->Stu_View->currentIndex().row();
    StuModel_->setData(StuModel_->index(row,0),ui->StuId->text().toInt());
}


void MainWindow::on_Sname_editingFinished()//Sname文本框修改
{
    int row = ui->Stu_View->currentIndex().row();
    StuModel_->setData(StuModel_->index(row,1),ui->Sname->text());
}


void MainWindow::on_Ssex_editingFinished()//Ssex文本框修改
{
    int row = ui->Stu_View->currentIndex().row();
    StuModel_->setData(StuModel_->index(row,2),ui->Ssex->text());
}


void MainWindow::on_Sage_editingFinished()//Sage文本框修改
{
    int row = ui->Stu_View->currentIndex().row();
    StuModel_->setData(StuModel_->index(row,3),ui->Sage->text());
}



void MainWindow::on_Major_editingFinished()
{
    int row = ui->Stu_View->currentIndex().row();
    StuModel_->setData(StuModel_->index(row,4),ui->Sage->text());
}

void MainWindow::on_dateEdit_dateChanged(const QDate &date)
{
    int row = ui->Stu_View->currentIndex().row();
     StuModel_->setData(StuModel_->index(row,5),ui->dateEdit->text());
}


void MainWindow::on_SsexComboBox_currentIndexChanged(int index)
{

    if(ui->SsexComboBox->currentText()!="全部")
    {
    QString queryStr = QObject::tr("Ssex= '%1' ").arg(ui->SsexComboBox->currentText());
        StuModel_->setFilter(queryStr);
        StuModel_->select();
    }
    else
    {
        StuModel_->setFilter("");
        StuModel_->select();
    }
}

void MainWindow::closeEvent(QCloseEvent *e){
    // 想要实现的操作
    this->parentWidget()->show();
    this->close();
}





