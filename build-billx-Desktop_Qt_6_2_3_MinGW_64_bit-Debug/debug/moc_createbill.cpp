/****************************************************************************
** Meta object code from reading C++ file 'createbill.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/binay/OneDrive/Desktop/New folder (3)/BillX-main/createbill.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createbill.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateBill_t {
    const uint offsetsAndSize[26];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CreateBill_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CreateBill_t qt_meta_stringdata_CreateBill = {
    {
QT_MOC_LITERAL(0, 10), // "CreateBill"
QT_MOC_LITERAL(11, 8), // "showTime"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(43, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(70, 27), // "on_pushButton_print_clicked"
QT_MOC_LITERAL(98, 22), // "on_tableView_activated"
QT_MOC_LITERAL(121, 11), // "QModelIndex"
QT_MOC_LITERAL(133, 5), // "index"
QT_MOC_LITERAL(139, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(163, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(187, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(214, 26) // "on_pushButton_undo_clicked"

    },
    "CreateBill\0showTime\0\0on_pushButton_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_pushButton_print_clicked\0"
    "on_tableView_activated\0QModelIndex\0"
    "index\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_pushButton_exit_clicked\0"
    "on_pushButton_undo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateBill[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    1,   72,    2, 0x08,    5 /* Private */,
       9,    0,   75,    2, 0x08,    7 /* Private */,
      10,    0,   76,    2, 0x08,    8 /* Private */,
      11,    0,   77,    2, 0x08,    9 /* Private */,
      12,    0,   78,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CreateBill::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateBill *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showTime(); break;

        case 2: _t->on_pushButton_save_clicked(); break;
        case 3: _t->on_pushButton_print_clicked(); break;
        case 4: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;


        case 7: _t->on_pushButton_exit_clicked(); break;

        default: ;
        }
    }
}

const QMetaObject CreateBill::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CreateBill.offsetsAndSize,
    qt_meta_data_CreateBill,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CreateBill_t
, QtPrivate::TypeAndForceComplete<CreateBill, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CreateBill::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateBill::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateBill.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CreateBill::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
