#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QSqlDatabase db_,QWidget *parent) :
    db(db_),
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    CourseModel_ = new QSqlTableModel(this, db);
    CourseModel_->setEditStrategy(QSqlTableModel::OnManualSubmit);//编辑策略
    CourseModel_->setTable("course");
    CourseModel_->setHeaderData(CourseModel_->fieldIndex("CId"),Qt::Horizontal,"课程号");
    CourseModel_->setHeaderData(CourseModel_->fieldIndex("Cname"),Qt::Horizontal,"课程名");
    CourseModel_->setHeaderData(CourseModel_->fieldIndex("Credit"),Qt::Horizontal,"学分");
    ui->Course_View->setModel(CourseModel_);
    CourseModel_->select();
    ui->Course_View->setCurrentIndex(QModelIndex());//初始化选中位置方便判断删除
}

MainWindow2::~MainWindow2()
{
    delete ui;   
}

void MainWindow2::on_Course_View_clicked(const QModelIndex &index)
{

    QSqlRecord record=CourseModel_->record(index.row()); //关键步骤
    QString Cname = record.value("Cname").toString();  
        //02.下同
    QString CID = record.value("CID").toString();
    QString Credit = record.value("Credit").toString();
        //显示相应文本到lineEdit控件
        ui->CId->setText(CID);
        ui->Cname->setText(Cname);
        ui->Credit->setText(Credit);
}


void MainWindow2::on_searcButton_clicked()
{
    QString word=ui->searchLine->text();
    if(word=="")
    {
        qDebug()<<" error";
        QMessageBox::information(this,"字符检测","检索为空");
        CourseModel_->setFilter("");
        CourseModel_->select();

    }
    else
    {
        QString queryStr;

       if(ui->SearchComboBox->currentText()=="课程号")
            queryStr = QObject::tr("CId = '%1'").arg(word);
       if(ui->SearchComboBox->currentText()=="课程名")
            queryStr = QObject::tr("Cname = '%1'").arg(word);
       if(ui->SearchComboBox->currentText()=="学分")
            queryStr = QObject::tr("Credit = '%1'").arg(word);

            CourseModel_->setFilter(queryStr);
            CourseModel_->select();
    }
}


void MainWindow2::on_DeleteButton_clicked()
{
    //从表格中获取要删除的行
    int row = ui->Course_View->currentIndex().row();
    qDebug()<<row;
    if(row>=0)
    {
    CourseModel_->removeRow(row);
    QMessageBox::information(this,"提示","在表单中已标记删除");
    }
}


void MainWindow2::on_AddButton_clicked()
{
    db.transaction();
    //获取当前的行数
    int row = CourseModel_->rowCount();
    //在末尾插入一行
    CourseModel_->insertRow(row);
    int id = row+1;
    CourseModel_->setData(CourseModel_->index(row,0),id);
}


void MainWindow2::on_SubmitButton_clicked()
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
            if(CourseModel_->submitAll())
            {
             CourseModel_->submitAll();
             msgBox.about(this,"提示","已提交表单");
            }
            else
            {
             QMessageBox::warning(this, tr("提示"), tr("提交表单有误，详情: %1").arg(CourseModel_->lastError().text()));
            }
            break;
        case QMessageBox::No:
            msgBox.about(this,"提示","已取消提交");
            break;
        default:
            break;
        }
}


void MainWindow2::on_RollButton_clicked()
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
            CourseModel_->revertAll();
            CourseModel_->setFilter("");
            CourseModel_->select();
            msgBox.about(NULL,"提示","已回滚表单");
            break;
        case QMessageBox::No:
            msgBox.about(NULL,"提示","已取消回滚");
            break;
        default:
            break;
        }
}


void MainWindow2::on_CId_editingFinished()
{
    int row = ui->Course_View->currentIndex().row();
    CourseModel_->setData(CourseModel_->index(row,0),ui->CId->text());
}


void MainWindow2::on_Cname_editingFinished()
{
    int row = ui->Course_View->currentIndex().row();
    CourseModel_->setData(CourseModel_->index(row,1),ui->Cname->text());
}

