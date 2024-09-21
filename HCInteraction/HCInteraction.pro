QT       += core gui
QT       +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changemname.cpp \
    changepassword.cpp \
    helpwindow.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow2.cpp \
    mainwindow3.cpp \
    menu.cpp \
    register.cpp

HEADERS += \
    changemname.h \
    changepassword.h \
    helpwindow.h \
    login.h \
    mainwindow.h \
    mainwindow2.h \
    mainwindow3.h \
    menu.h \
    register.h

FORMS += \
    changemname.ui \
    changepassword.ui \
    helpwindow.ui \
    login.ui \
    mainwindow.ui \
    mainwindow2.ui \
    mainwindow3.ui \
    menu.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
