/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[19];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 18), // "Signal_CurrentTime"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "Signal_SerialProcess"
QT_MOC_LITERAL(4, 48, 13), // "mqttConnected"
QT_MOC_LITERAL(5, 62, 21), // "Slot_SerialReadBuffer"
QT_MOC_LITERAL(6, 84, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 106, 11), // "Slot_Return"
QT_MOC_LITERAL(8, 118, 15), // "Slot_ChartTimer"
QT_MOC_LITERAL(9, 134, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 158, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(11, 182, 18), // "Slot_SerialProcess"
QT_MOC_LITERAL(12, 201, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(13, 225, 17), // "Slot_Return_Line1"
QT_MOC_LITERAL(14, 243, 15), // "Slot_Show_Line1"
QT_MOC_LITERAL(15, 259, 17), // "Slot_Return_Line2"
QT_MOC_LITERAL(16, 277, 15), // "Slot_Show_Line2"
QT_MOC_LITERAL(17, 293, 17), // "Slot_Return_Line3"
QT_MOC_LITERAL(18, 311, 15) // "Slot_Show_Line3"

    },
    "Widget\0Signal_CurrentTime\0\0"
    "Signal_SerialProcess\0mqttConnected\0"
    "Slot_SerialReadBuffer\0on_pushButton_clicked\0"
    "Slot_Return\0Slot_ChartTimer\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "Slot_SerialProcess\0on_pushButton_4_clicked\0"
    "Slot_Return_Line1\0Slot_Show_Line1\0"
    "Slot_Return_Line2\0Slot_Show_Line2\0"
    "Slot_Return_Line3\0Slot_Show_Line3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Signal_CurrentTime(); break;
        case 1: _t->Signal_SerialProcess(); break;
        case 2: _t->mqttConnected(); break;
        case 3: _t->Slot_SerialReadBuffer(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->Slot_Return(); break;
        case 6: _t->Slot_ChartTimer(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->Slot_SerialProcess(); break;
        case 10: _t->on_pushButton_4_clicked(); break;
        case 11: _t->Slot_Return_Line1(); break;
        case 12: _t->Slot_Show_Line1(); break;
        case 13: _t->Slot_Return_Line2(); break;
        case 14: _t->Slot_Show_Line2(); break;
        case 15: _t->Slot_Return_Line3(); break;
        case 16: _t->Slot_Show_Line3(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::Signal_CurrentTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::Signal_SerialProcess)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Widget::Signal_CurrentTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Widget::Signal_SerialProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
