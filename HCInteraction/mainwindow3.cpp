#include "mainwindow3.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QSqlDatabase db_,QWidget *parent) :
    db(db_),
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
    SCModel_ = new QSqlTableModel(this, db);
    SCModel_->setEditStrategy(QSqlTableModel::OnManualSubmit);//编辑策略
    SCModel_->setTable("SC");
    SCModel_->setHeaderData(SCModel_->fieldIndex("StuId"),Qt::Horizontal,"学号");
    SCModel_->setHeaderData(SCModel_->fieldIndex("CId"),Qt::Horizontal,"课程号");
    SCModel_->setHeaderData(SCModel_->fieldIndex("Grade"),Qt::Horizontal,"成绩");
    ui->SC_View->setModel(SCModel_);
    SCModel_->select();
    ui->SC_View->setCurrentIndex(QModelIndex());//初始化选中位置方便判断删除
}

MainWindow3::~MainWindow3()
{
    delete ui;
}


void MainWindow3::on_SC_View_clicked(const QModelIndex &index)
{
    QSqlRecord record=SCModel_->record(index.row()); //关键步骤
    QString StuId = record.value("StuId").toString();
        //02.下同
    QString CId = record.value("CId").toString();
    QString Grade = record.value("Grade").toString();
        //显示相应文本到lineEdit控件
        ui->StuId->setText(StuId);
        ui->CId->setText(CId);
        ui->Grade->setText(Grade);

}


void MainWindow3::on_searcButton_clicked()
{
    QString word=ui->searchLine->text();
    if(word=="")
    {
        qDebug()<<" error";
        QMessageBox::information(this,"字符检测","检索为空");
        SCModel_->setFilter("");
        SCModel_->select();

    }
    else
    {
        QString queryStr;

       if(ui->SearchComboBox->currentText()=="学号")
            queryStr = QObject::tr("StuId = '%1'").arg(word);
       if(ui->SearchComboBox->currentText()=="课程号")
            queryStr = QObject::tr("CId =  '%1'").arg(word);
       if(ui->SearchComboBox->currentText()=="成绩")
            queryStr = QObject::tr("Grade = '%1'").arg(word);


            SCModel_->setFilter(queryStr);
            SCModel_->select();
    }

}


void MainWindow3::on_DeleteButton_clicked()
{
    int row = ui->SC_View->currentIndex().row();
    qDebug()<<row;
    if(row>=0)
    {
    SCModel_->removeRow(row);
    QMessageBox::information(this,"提示","在表单中已标记删除");
    }

}


void MainWindow3::on_AddButton_clicked()
{
    db.transaction();
    //获取当前的行数
    int row = SCModel_->rowCount();
    //在末尾插入一行
    SCModel_->insertRow(row);
    int id = row+1;
    SCModel_->setData(SCModel_->index(row,0),id);

}


void MainWindow3::on_SubmitButton_clicked()
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
            if(SCModel_->submitAll())
            {
             SCModel_->submitAll();
             msgBox.about(this,"提示","已提交表单");
            }
            else
            {
             QMessageBox::warning(this, tr("提示"), tr("提交表单有误，详情: %1").arg(SCModel_->lastError().text()));
            }
            break;
        case QMessageBox::No:
            msgBox.about(this,"提示","已取消提交");
            break;
        default:
            break;
        }
}





void MainWindow3::on_RollButton_clicked()
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
            SCModel_->revertAll();
            SCModel_->setFilter("");
            SCModel_->select();
            msgBox.about(NULL,"提示","已回滚表单");
            break;
        case QMessageBox::No:
            msgBox.about(NULL,"提示","已取消回滚");
            break;
        default:
            break;
        }
}

