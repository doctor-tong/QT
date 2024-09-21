/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QFrame *frame;
    QLineEdit *pwline;
    QLineEdit *pwline_2;
    QLabel *LoginIdlabel;
    QPushButton *backButton;
    QPushButton *RegisteButton;
    QLabel *LoginCodelabel;
    QLineEdit *nameline;
    QLabel *eye;
    QLabel *LoginCodelabel_2;
    QLabel *eye_2;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(400, 300);
        frame = new QFrame(Register);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 401, 301));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"background-image: url(:/menu/images/School.jpeg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pwline = new QLineEdit(frame);
        pwline->setObjectName(QString::fromUtf8("pwline"));
        pwline->setGeometry(QRect(100, 130, 211, 31));
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
        pwline_2 = new QLineEdit(frame);
        pwline_2->setObjectName(QString::fromUtf8("pwline_2"));
        pwline_2->setGeometry(QRect(100, 180, 211, 31));
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
        LoginIdlabel = new QLabel(frame);
        LoginIdlabel->setObjectName(QString::fromUtf8("LoginIdlabel"));
        LoginIdlabel->setGeometry(QRect(30, 80, 51, 31));
        LoginIdlabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        backButton = new QPushButton(frame);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(270, 10, 121, 41));
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
        RegisteButton = new QPushButton(frame);
        RegisteButton->setObjectName(QString::fromUtf8("RegisteButton"));
        RegisteButton->setGeometry(QRect(150, 230, 93, 51));
        RegisteButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
" \n"
"    border-color: #2f3640;\n"
"	background-color: rgb(169, 223, 251);\n"
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
"QPushButton::dis"
                        "abled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));
        LoginCodelabel = new QLabel(frame);
        LoginCodelabel->setObjectName(QString::fromUtf8("LoginCodelabel"));
        LoginCodelabel->setGeometry(QRect(40, 130, 31, 31));
        LoginCodelabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        nameline = new QLineEdit(frame);
        nameline->setObjectName(QString::fromUtf8("nameline"));
        nameline->setGeometry(QRect(100, 80, 211, 31));
        nameline->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}"));
        nameline->setReadOnly(false);
        eye = new QLabel(frame);
        eye->setObjectName(QString::fromUtf8("eye"));
        eye->setGeometry(QRect(310, 130, 41, 31));
        LoginCodelabel_2 = new QLabel(frame);
        LoginCodelabel_2->setObjectName(QString::fromUtf8("LoginCodelabel_2"));
        LoginCodelabel_2->setGeometry(QRect(20, 180, 61, 31));
        LoginCodelabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        eye_2 = new QLabel(frame);
        eye_2->setObjectName(QString::fromUtf8("eye_2"));
        eye_2->setGeometry(QRect(310, 180, 41, 31));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        pwline_2->setText(QString());
        LoginIdlabel->setText(QCoreApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", nullptr));
#if QT_CONFIG(whatsthis)
        backButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        backButton->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        RegisteButton->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        LoginCodelabel->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        eye->setText(QString());
        LoginCodelabel_2->setText(QCoreApplication::translate("Register", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        eye_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
