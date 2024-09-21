/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changePassWord
{
public:
    QFrame *frame;
    QLineEdit *pwline;
    QPushButton *RegisteButton;
    QLabel *LoginCodelabel;
    QLabel *LoginCodelabel_2;
    QLabel *eye_2;
    QLineEdit *pwline_2;
    QPushButton *backButton;
    QLabel *eye;

    void setupUi(QWidget *changePassWord)
    {
        if (changePassWord->objectName().isEmpty())
            changePassWord->setObjectName(QString::fromUtf8("changePassWord"));
        changePassWord->resize(400, 300);
        frame = new QFrame(changePassWord);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-1, -1, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background-image: url(:/menu/images/School.jpeg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pwline = new QLineEdit(frame);
        pwline->setObjectName(QString::fromUtf8("pwline"));
        pwline->setGeometry(QRect(100, 90, 211, 31));
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
        RegisteButton = new QPushButton(frame);
        RegisteButton->setObjectName(QString::fromUtf8("RegisteButton"));
        RegisteButton->setGeometry(QRect(150, 190, 93, 51));
        RegisteButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        LoginCodelabel = new QLabel(frame);
        LoginCodelabel->setObjectName(QString::fromUtf8("LoginCodelabel"));
        LoginCodelabel->setGeometry(QRect(20, 90, 61, 31));
        LoginCodelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        LoginCodelabel_2 = new QLabel(frame);
        LoginCodelabel_2->setObjectName(QString::fromUtf8("LoginCodelabel_2"));
        LoginCodelabel_2->setGeometry(QRect(20, 140, 61, 31));
        LoginCodelabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        eye_2 = new QLabel(frame);
        eye_2->setObjectName(QString::fromUtf8("eye_2"));
        eye_2->setGeometry(QRect(310, 140, 41, 31));
        pwline_2 = new QLineEdit(frame);
        pwline_2->setObjectName(QString::fromUtf8("pwline_2"));
        pwline_2->setGeometry(QRect(100, 140, 211, 31));
        pwline_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        pwline_2->setDragEnabled(false);
        backButton = new QPushButton(frame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(260, 20, 121, 41));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        eye = new QLabel(frame);
        eye->setObjectName(QString::fromUtf8("eye"));
        eye->setGeometry(QRect(310, 90, 41, 31));

        retranslateUi(changePassWord);

        QMetaObject::connectSlotsByName(changePassWord);
    } // setupUi

    void retranslateUi(QWidget *changePassWord)
    {
        changePassWord->setWindowTitle(QCoreApplication::translate("changePassWord", "Form", nullptr));
        RegisteButton->setText(QCoreApplication::translate("changePassWord", "\344\277\256\346\224\271", nullptr));
        LoginCodelabel->setText(QCoreApplication::translate("changePassWord", "\346\227\247\347\232\204\345\257\206\347\240\201", nullptr));
        LoginCodelabel_2->setText(QCoreApplication::translate("changePassWord", "<html><head/><body><p align=\"center\">\346\226\260\345\257\206\347\240\201</p></body></html>", nullptr));
        eye_2->setText(QString());
        pwline_2->setText(QString());
        backButton->setText(QCoreApplication::translate("changePassWord", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        eye->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class changePassWord: public Ui_changePassWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
