/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_menu_t {
    uint offsetsAndSizes[30];
    char stringdata0[5];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[23];
    char stringdata5[22];
    char stringdata6[22];
    char stringdata7[27];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[18];
    char stringdata11[18];
    char stringdata12[27];
    char stringdata13[26];
    char stringdata14[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_menu_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_menu_t qt_meta_stringdata_menu = {
    {
        QT_MOC_LITERAL(0, 4),  // "menu"
        QT_MOC_LITERAL(5, 20),  // "on_StuButton_clicked"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 21),  // "on_clasButton_clicked"
        QT_MOC_LITERAL(49, 22),  // "on_gradeButton_clicked"
        QT_MOC_LITERAL(72, 21),  // "on_helpButton_clicked"
        QT_MOC_LITERAL(94, 21),  // "on_exitButton_clicked"
        QT_MOC_LITERAL(116, 26),  // "on_studentManage_triggered"
        QT_MOC_LITERAL(143, 24),  // "on_classManage_triggered"
        QT_MOC_LITERAL(168, 24),  // "on_gradeManage_triggered"
        QT_MOC_LITERAL(193, 17),  // "on_help_triggered"
        QT_MOC_LITERAL(211, 17),  // "on_exit_triggered"
        QT_MOC_LITERAL(229, 26),  // "on_switchAccount_triggered"
        QT_MOC_LITERAL(256, 25),  // "on_passWordEdit_triggered"
        QT_MOC_LITERAL(282, 23)   // "on_nameReEdit_triggered"
    },
    "menu",
    "on_StuButton_clicked",
    "",
    "on_clasButton_clicked",
    "on_gradeButton_clicked",
    "on_helpButton_clicked",
    "on_exitButton_clicked",
    "on_studentManage_triggered",
    "on_classManage_triggered",
    "on_gradeManage_triggered",
    "on_help_triggered",
    "on_exit_triggered",
    "on_switchAccount_triggered",
    "on_passWordEdit_triggered",
    "on_nameReEdit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    0,  100,    2, 0x08,    9 /* Private */,
      11,    0,  101,    2, 0x08,   10 /* Private */,
      12,    0,  102,    2, 0x08,   11 /* Private */,
      13,    0,  103,    2, 0x08,   12 /* Private */,
      14,    0,  104,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_StuButton_clicked(); break;
        case 1: _t->on_clasButton_clicked(); break;
        case 2: _t->on_gradeButton_clicked(); break;
        case 3: _t->on_helpButton_clicked(); break;
        case 4: _t->on_exitButton_clicked(); break;
        case 5: _t->on_studentManage_triggered(); break;
        case 6: _t->on_classManage_triggered(); break;
        case 7: _t->on_gradeManage_triggered(); break;
        case 8: _t->on_help_triggered(); break;
        case 9: _t->on_exit_triggered(); break;
        case 10: _t->on_switchAccount_triggered(); break;
        case 11: _t->on_passWordEdit_triggered(); break;
        case 12: _t->on_nameReEdit_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_menu.offsetsAndSizes,
    qt_meta_data_menu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_menu_t
, QtPrivate::TypeAndForceComplete<menu, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_menu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
