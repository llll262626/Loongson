/****************************************************************************
** Meta object code from reading C++ file 'nodetwo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../nodetwo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nodetwo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nodeTwo_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nodeTwo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nodeTwo_t qt_meta_stringdata_nodeTwo = {
    {
QT_MOC_LITERAL(0, 0, 7), // "nodeTwo"
QT_MOC_LITERAL(1, 8, 13), // "Signal_Return"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "Signal_ShowLine2"
QT_MOC_LITERAL(4, 40, 16), // "Slot_CurrentTime"
QT_MOC_LITERAL(5, 57, 18), // "Slot_SerialProcess"
QT_MOC_LITERAL(6, 76, 5), // "index"
QT_MOC_LITERAL(7, 82, 28), // "on_pushButton_Return_clicked"
QT_MOC_LITERAL(8, 111, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 133, 23) // "on_pushButton_2_clicked"

    },
    "nodeTwo\0Signal_Return\0\0Signal_ShowLine2\0"
    "Slot_CurrentTime\0Slot_SerialProcess\0"
    "index\0on_pushButton_Return_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nodeTwo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void nodeTwo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nodeTwo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Signal_Return(); break;
        case 1: _t->Signal_ShowLine2(); break;
        case 2: _t->Slot_CurrentTime(); break;
        case 3: _t->Slot_SerialProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_Return_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (nodeTwo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nodeTwo::Signal_Return)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (nodeTwo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nodeTwo::Signal_ShowLine2)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nodeTwo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_nodeTwo.data,
    qt_meta_data_nodeTwo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nodeTwo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nodeTwo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nodeTwo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int nodeTwo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void nodeTwo::Signal_Return()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void nodeTwo::Signal_ShowLine2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
