/****************************************************************************
** Meta object code from reading C++ file 'mainwindow2.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow2_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[23];
    char stringdata6[24];
    char stringdata7[21];
    char stringdata8[24];
    char stringdata9[22];
    char stringdata10[23];
    char stringdata11[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow2_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_MainWindow2_t qt_meta_stringdata_MainWindow2 = {
    {
        QT_MOC_LITERAL(0, 11),  // "MainWindow2"
        QT_MOC_LITERAL(12, 22),  // "on_Course_View_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 11),  // "QModelIndex"
        QT_MOC_LITERAL(48, 5),  // "index"
        QT_MOC_LITERAL(54, 22),  // "on_searcButton_clicked"
        QT_MOC_LITERAL(77, 23),  // "on_DeleteButton_clicked"
        QT_MOC_LITERAL(101, 20),  // "on_AddButton_clicked"
        QT_MOC_LITERAL(122, 23),  // "on_SubmitButton_clicked"
        QT_MOC_LITERAL(146, 21),  // "on_RollButton_clicked"
        QT_MOC_LITERAL(168, 22),  // "on_CId_editingFinished"
        QT_MOC_LITERAL(191, 24)   // "on_Cname_editingFinished"
    },
    "MainWindow2",
    "on_Course_View_clicked",
    "",
    "QModelIndex",
    "index",
    "on_searcButton_clicked",
    "on_DeleteButton_clicked",
    "on_AddButton_clicked",
    "on_SubmitButton_clicked",
    "on_RollButton_clicked",
    "on_CId_editingFinished",
    "on_Cname_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow2[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x08,    1 /* Private */,
       5,    0,   65,    2, 0x08,    3 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    0,   70,    2, 0x08,    8 /* Private */,
      11,    0,   71,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Course_View_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->on_searcButton_clicked(); break;
        case 2: _t->on_DeleteButton_clicked(); break;
        case 3: _t->on_AddButton_clicked(); break;
        case 4: _t->on_SubmitButton_clicked(); break;
        case 5: _t->on_RollButton_clicked(); break;
        case 6: _t->on_CId_editingFinished(); break;
        case 7: _t->on_Cname_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow2::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow2.offsetsAndSizes,
    qt_meta_data_MainWindow2,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow2_t
, QtPrivate::TypeAndForceComplete<MainWindow2, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow2.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
