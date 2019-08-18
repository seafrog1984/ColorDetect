/****************************************************************************
** Meta object code from reading C++ file 'ColorDetect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ColorDetect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorDetect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorDetect_t {
    QByteArrayData data[22];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorDetect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorDetect_t qt_meta_stringdata_ColorDetect = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorDetect"
QT_MOC_LITERAL(1, 12, 6), // "detect"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "ReadFrame"
QT_MOC_LITERAL(4, 30, 17), // "OpenCameraClicked"
QT_MOC_LITERAL(5, 48, 18), // "CloseCameraClicked"
QT_MOC_LITERAL(6, 67, 5), // "start"
QT_MOC_LITERAL(7, 73, 4), // "stop"
QT_MOC_LITERAL(8, 78, 11), // "updateShape"
QT_MOC_LITERAL(9, 90, 4), // "sel1"
QT_MOC_LITERAL(10, 95, 4), // "sel2"
QT_MOC_LITERAL(11, 100, 10), // "setSelNum1"
QT_MOC_LITERAL(12, 111, 10), // "setSelNum2"
QT_MOC_LITERAL(13, 122, 8), // "setArea1"
QT_MOC_LITERAL(14, 131, 8), // "setArea2"
QT_MOC_LITERAL(15, 140, 13), // "setDetectNum1"
QT_MOC_LITERAL(16, 154, 13), // "setDetectNum2"
QT_MOC_LITERAL(17, 168, 8), // "selColor"
QT_MOC_LITERAL(18, 177, 8), // "setColor"
QT_MOC_LITERAL(19, 186, 7), // "setTime"
QT_MOC_LITERAL(20, 194, 4), // "test"
QT_MOC_LITERAL(21, 199, 11) // "time_update"

    },
    "ColorDetect\0detect\0\0ReadFrame\0"
    "OpenCameraClicked\0CloseCameraClicked\0"
    "start\0stop\0updateShape\0sel1\0sel2\0"
    "setSelNum1\0setSelNum2\0setArea1\0setArea2\0"
    "setDetectNum1\0setDetectNum2\0selColor\0"
    "setColor\0setTime\0test\0time_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorDetect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08 /* Private */,
       3,    0,  115,    2, 0x08 /* Private */,
       4,    0,  116,    2, 0x08 /* Private */,
       5,    0,  117,    2, 0x08 /* Private */,
       6,    0,  118,    2, 0x08 /* Private */,
       7,    0,  119,    2, 0x08 /* Private */,
       8,    0,  120,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    0,  127,    2, 0x08 /* Private */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    0,  129,    2, 0x08 /* Private */,
      18,    0,  130,    2, 0x08 /* Private */,
      19,    0,  131,    2, 0x08 /* Private */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorDetect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorDetect *_t = static_cast<ColorDetect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->detect(); break;
        case 1: _t->ReadFrame(); break;
        case 2: _t->OpenCameraClicked(); break;
        case 3: _t->CloseCameraClicked(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        case 6: _t->updateShape(); break;
        case 7: _t->sel1(); break;
        case 8: _t->sel2(); break;
        case 9: _t->setSelNum1(); break;
        case 10: _t->setSelNum2(); break;
        case 11: _t->setArea1(); break;
        case 12: _t->setArea2(); break;
        case 13: _t->setDetectNum1(); break;
        case 14: _t->setDetectNum2(); break;
        case 15: _t->selColor(); break;
        case 16: _t->setColor(); break;
        case 17: _t->setTime(); break;
        case 18: _t->test(); break;
        case 19: _t->time_update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ColorDetect::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ColorDetect.data,
      qt_meta_data_ColorDetect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorDetect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorDetect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorDetect.stringdata0))
        return static_cast<void*>(const_cast< ColorDetect*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ColorDetect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
