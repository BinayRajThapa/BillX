/****************************************************************************
** Meta object code from reading C++ file 'createbill.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../BillX-main/createbill.h"
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
    const uint offsetsAndSize[22];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CreateBill_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CreateBill_t qt_meta_stringdata_CreateBill = {
    {
QT_MOC_LITERAL(0, 10), // "CreateBill"
QT_MOC_LITERAL(11, 8), // "showTime"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(48, 27), // "on_pushButton_print_clicked"
QT_MOC_LITERAL(76, 22), // "on_tableView_activated"
QT_MOC_LITERAL(99, 11), // "QModelIndex"
QT_MOC_LITERAL(111, 5), // "index"
QT_MOC_LITERAL(117, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(144, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(172, 28) // "on_pushButton_delete_clicked"

    },
    "CreateBill\0showTime\0\0on_pushButton_save_clicked\0"
    "on_pushButton_print_clicked\0"
    "on_tableView_activated\0QModelIndex\0"
    "index\0on_pushButton_exit_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_pushButton_delete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateBill[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    1,   59,    2, 0x08,    4 /* Private */,
       8,    0,   62,    2, 0x08,    6 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
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
        case 1: _t->on_pushButton_save_clicked(); break;
        case 2: _t->on_pushButton_print_clicked(); break;
        case 3: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_exit_clicked(); break;
        case 5: _t->on_pushButton_clear_clicked(); break;
        case 6: _t->on_pushButton_delete_clicked(); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
