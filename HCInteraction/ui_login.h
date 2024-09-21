/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame;
    QPushButton *RegisteButton;
    QCheckBox *checkBox;
    QLabel *LoginIdlabel;
    QLabel *eye;
    QPushButton *LoginButton;
    QLineEdit *idline;
    QLabel *LoginCodelabel;
    QPushButton *cancelButton;
    QLineEdit *pwline;
    QLabel *label;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(487, 399);
        Login->setStyleSheet(QString::fromUtf8("#login{\n"
"\n"
"	background-image: url(:/menu/images/School.jpeg);\n"
"}"));
        frame = new QFrame(Login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-50, -20, 541, 421));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background-image: url(:/menu/images/School.jpeg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        RegisteButton = new QPushButton(frame);
        RegisteButton->setObjectName(QString::fromUtf8("RegisteButton"));
        RegisteButton->setGeometry(QRect(410, 30, 121, 31));
        RegisteButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}\n"
""));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(230, 250, 131, 24));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LoginIdlabel = new QLabel(frame);
        LoginIdlabel->setObjectName(QString::fromUtf8("LoginIdlabel"));
        LoginIdlabel->setGeometry(QRect(90, 150, 101, 31));
        LoginIdlabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        eye = new QLabel(frame);
        eye->setObjectName(QString::fromUtf8("eye"));
        eye->setGeometry(QRect(400, 210, 51, 31));
        eye->setStyleSheet(QString::fromUtf8(""));
        LoginButton = new QPushButton(frame);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(190, 290, 93, 51));
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
"}\n"
""));
        idline = new QLineEdit(frame);
        idline->setObjectName(QString::fromUtf8("idline"));
        idline->setGeometry(QRect(190, 150, 211, 31));
        idline->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        LoginCodelabel = new QLabel(frame);
        LoginCodelabel->setObjectName(QString::fromUtf8("LoginCodelabel"));
        LoginCodelabel->setGeometry(QRect(150, 210, 31, 21));
        LoginCodelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        cancelButton = new QPushButton(frame);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 290, 93, 51));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
"}\n"
""));
        pwline = new QLineEdit(frame);
        pwline->setObjectName(QString::fromUtf8("pwline"));
        pwline->setGeometry(QRect(190, 210, 211, 31));
        pwline->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        pwline->setDragEnabled(false);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 391, 61));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        RegisteButton->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214\347\256\241\347\220\206\345\221\230\350\264\246\346\210\267", nullptr));
        checkBox->setText(QCoreApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201\345\222\214\350\264\246\345\217\267", nullptr));
        LoginIdlabel->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267\346\210\226\347\224\250\346\210\267\345\220\215", nullptr));
        eye->setText(QString());
        LoginButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        LoginCodelabel->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        cancelButton->setText(QCoreApplication::translate("Login", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("Login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#ff5500;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237-\350\257\276\347\250\213\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
