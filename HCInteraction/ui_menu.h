/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QAction *studentManage;
    QAction *classManage;
    QAction *gradeManage;
    QAction *passWordEdit;
    QAction *nameReEdit;
    QAction *switchAccount;
    QAction *help;
    QAction *exit;
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *exitButton;
    QStackedWidget *stackedWidget;
    QPushButton *helpButton;
    QPushButton *StuButton;
    QPushButton *clasButton;
    QPushButton *gradeButton;
    QLabel *hellolabel;
    QMenuBar *menubar;
    QMenu *menu_information;
    QMenu *menu_account;
    QMenu *menu_sys;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(872, 661);
        menu->setStyleSheet(QString::fromUtf8(""));
        studentManage = new QAction(menu);
        studentManage->setObjectName(QString::fromUtf8("studentManage"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menu/images/student.png"), QSize(), QIcon::Normal, QIcon::Off);
        studentManage->setIcon(icon);
        classManage = new QAction(menu);
        classManage->setObjectName(QString::fromUtf8("classManage"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/menu/images/class.png"), QSize(), QIcon::Normal, QIcon::Off);
        classManage->setIcon(icon1);
        gradeManage = new QAction(menu);
        gradeManage->setObjectName(QString::fromUtf8("gradeManage"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/menu/images/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        gradeManage->setIcon(icon2);
        passWordEdit = new QAction(menu);
        passWordEdit->setObjectName(QString::fromUtf8("passWordEdit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menu/images/password.png"), QSize(), QIcon::Normal, QIcon::Off);
        passWordEdit->setIcon(icon3);
        nameReEdit = new QAction(menu);
        nameReEdit->setObjectName(QString::fromUtf8("nameReEdit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/menu/images/account_inf.png"), QSize(), QIcon::Normal, QIcon::Off);
        nameReEdit->setIcon(icon4);
        switchAccount = new QAction(menu);
        switchAccount->setObjectName(QString::fromUtf8("switchAccount"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/menu/images/accountswitch.png"), QSize(), QIcon::Normal, QIcon::Off);
        switchAccount->setIcon(icon5);
        help = new QAction(menu);
        help->setObjectName(QString::fromUtf8("help"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/menu/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        help->setIcon(icon6);
        exit = new QAction(menu);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/menu/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon7);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 871, 631));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background-image: url(:/menu/images/School.jpeg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        exitButton = new QPushButton(frame);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(520, 0, 131, 29));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"background-color: rgb(169, 223, 251);\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
""
                        "    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 50, 831, 561));
        helpButton = new QPushButton(frame);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(390, 0, 131, 29));
        helpButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"background-color: rgb(169, 223, 251);\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
""
                        "    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));
        StuButton = new QPushButton(frame);
        StuButton->setObjectName(QString::fromUtf8("StuButton"));
        StuButton->setGeometry(QRect(0, 0, 131, 29));
        StuButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"background-color: rgb(169, 223, 251);\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
""
                        "    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));
        clasButton = new QPushButton(frame);
        clasButton->setObjectName(QString::fromUtf8("clasButton"));
        clasButton->setGeometry(QRect(130, 0, 131, 29));
        clasButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"background-color: rgb(169, 223, 251);\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
""
                        "    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));
        gradeButton = new QPushButton(frame);
        gradeButton->setObjectName(QString::fromUtf8("gradeButton"));
        gradeButton->setGeometry(QRect(260, 0, 131, 29));
        gradeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"background-color: rgb(169, 223, 251);\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
""
                        "    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));
        hellolabel = new QLabel(frame);
        hellolabel->setObjectName(QString::fromUtf8("hellolabel"));
        hellolabel->setGeometry(QRect(680, 0, 131, 61));
        hellolabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image: url(:/menu/images/bulue.jpeg);\n"
"	font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 20px;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"\n"
""));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 872, 26));
        menu_information = new QMenu(menubar);
        menu_information->setObjectName(QString::fromUtf8("menu_information"));
        menu_account = new QMenu(menubar);
        menu_account->setObjectName(QString::fromUtf8("menu_account"));
        menu_sys = new QMenu(menubar);
        menu_sys->setObjectName(QString::fromUtf8("menu_sys"));
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu->setStatusBar(statusbar);

        menubar->addAction(menu_information->menuAction());
        menubar->addAction(menu_account->menuAction());
        menubar->addAction(menu_sys->menuAction());
        menu_information->addAction(studentManage);
        menu_information->addAction(classManage);
        menu_information->addAction(gradeManage);
        menu_account->addAction(passWordEdit);
        menu_account->addAction(nameReEdit);
        menu_account->addAction(switchAccount);
        menu_sys->addAction(help);
        menu_sys->addAction(exit);

        retranslateUi(menu);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "MainWindow", nullptr));
        studentManage->setText(QCoreApplication::translate("menu", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        classManage->setText(QCoreApplication::translate("menu", "\350\257\276\347\250\213\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        gradeManage->setText(QCoreApplication::translate("menu", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        passWordEdit->setText(QCoreApplication::translate("menu", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        nameReEdit->setText(QCoreApplication::translate("menu", "\347\224\250\346\210\267\345\220\215\344\277\256\346\224\271", nullptr));
        switchAccount->setText(QCoreApplication::translate("menu", "\350\264\246\345\217\267\345\210\207\346\215\242", nullptr));
        help->setText(QCoreApplication::translate("menu", "\345\270\256\345\212\251", nullptr));
        exit->setText(QCoreApplication::translate("menu", "\351\200\200\345\207\272", nullptr));
        exitButton->setText(QCoreApplication::translate("menu", "\351\200\200\345\207\272", nullptr));
        helpButton->setText(QCoreApplication::translate("menu", "\345\270\256\345\212\251", nullptr));
        StuButton->setText(QCoreApplication::translate("menu", "\345\255\246\347\224\237\345\237\272\346\234\254\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        clasButton->setText(QCoreApplication::translate("menu", "\350\257\276\347\250\213\345\237\272\346\234\254\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        gradeButton->setText(QCoreApplication::translate("menu", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        hellolabel->setText(QCoreApplication::translate("menu", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        menu_information->setTitle(QCoreApplication::translate("menu", "\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        menu_account->setTitle(QCoreApplication::translate("menu", "\350\264\246\345\217\267\347\256\241\347\220\206", nullptr));
        menu_sys->setTitle(QCoreApplication::translate("menu", "\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
