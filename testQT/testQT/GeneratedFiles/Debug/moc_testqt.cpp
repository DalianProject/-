/****************************************************************************
** Meta object code from reading C++ file 'testqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_testQT_t {
    QByteArrayData data[11];
    char stringdata[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_testQT_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_testQT_t qt_meta_stringdata_testQT = {
    {
QT_MOC_LITERAL(0, 0, 6), // "testQT"
QT_MOC_LITERAL(1, 7, 5), // "slot1"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 5), // "slot2"
QT_MOC_LITERAL(4, 20, 5), // "slot3"
QT_MOC_LITERAL(5, 26, 11), // "changeEvent"
QT_MOC_LITERAL(6, 38, 7), // "QEvent*"
QT_MOC_LITERAL(7, 46, 5), // "event"
QT_MOC_LITERAL(8, 52, 13), // "iconIsActived"
QT_MOC_LITERAL(9, 66, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(10, 100, 6) // "reason"

    },
    "testQT\0slot1\0\0slot2\0slot3\0changeEvent\0"
    "QEvent*\0event\0iconIsActived\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_testQT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       8,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void testQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        testQT *_t = static_cast<testQT *>(_o);
        switch (_id) {
        case 0: _t->slot1(); break;
        case 1: _t->slot2(); break;
        case 2: _t->slot3(); break;
        case 3: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 4: _t->iconIsActived((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject testQT::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_testQT.data,
      qt_meta_data_testQT,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *testQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *testQT::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_testQT.stringdata))
        return static_cast<void*>(const_cast< testQT*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int testQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
