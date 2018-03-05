/****************************************************************************
** Meta object code from reading C++ file 'mtsPIDQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawControllers/components/include/sawControllers/mtsPIDQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsPIDQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsPIDQtWidget_t {
    QByteArrayData data[22];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsPIDQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsPIDQtWidget_t qt_meta_stringdata_mtsPIDQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "mtsPIDQtWidget"
QT_MOC_LITERAL(1, 15, 12), // "SignalEnable"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "enable"
QT_MOC_LITERAL(4, 36, 10), // "SlotEnable"
QT_MOC_LITERAL(5, 47, 6), // "toggle"
QT_MOC_LITERAL(6, 54, 24), // "SlotEnabledJointsChanged"
QT_MOC_LITERAL(7, 79, 23), // "SlotEnableTrackingError"
QT_MOC_LITERAL(8, 103, 19), // "SlotPositionChanged"
QT_MOC_LITERAL(9, 123, 16), // "SlotPGainChanged"
QT_MOC_LITERAL(10, 140, 16), // "SlotDGainChanged"
QT_MOC_LITERAL(11, 157, 16), // "SlotIGainChanged"
QT_MOC_LITERAL(12, 174, 20), // "SlotMaintainPosition"
QT_MOC_LITERAL(13, 195, 16), // "SlotZeroPosition"
QT_MOC_LITERAL(14, 212, 16), // "SlotResetPIDGain"
QT_MOC_LITERAL(15, 229, 13), // "SlotPlotIndex"
QT_MOC_LITERAL(16, 243, 7), // "newAxis"
QT_MOC_LITERAL(17, 251, 22), // "SlotEnableEventHandler"
QT_MOC_LITERAL(18, 274, 23), // "SlotEnableDirectControl"
QT_MOC_LITERAL(19, 298, 10), // "timerEvent"
QT_MOC_LITERAL(20, 309, 12), // "QTimerEvent*"
QT_MOC_LITERAL(21, 322, 5) // "event"

    },
    "mtsPIDQtWidget\0SignalEnable\0\0enable\0"
    "SlotEnable\0toggle\0SlotEnabledJointsChanged\0"
    "SlotEnableTrackingError\0SlotPositionChanged\0"
    "SlotPGainChanged\0SlotDGainChanged\0"
    "SlotIGainChanged\0SlotMaintainPosition\0"
    "SlotZeroPosition\0SlotResetPIDGain\0"
    "SlotPlotIndex\0newAxis\0SlotEnableEventHandler\0"
    "SlotEnableDirectControl\0timerEvent\0"
    "QTimerEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsPIDQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x08 /* Private */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    1,  106,    2, 0x08 /* Private */,
      17,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void mtsPIDQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsPIDQtWidget *_t = static_cast<mtsPIDQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SlotEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SlotEnabledJointsChanged(); break;
        case 3: _t->SlotEnableTrackingError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SlotPositionChanged(); break;
        case 5: _t->SlotPGainChanged(); break;
        case 6: _t->SlotDGainChanged(); break;
        case 7: _t->SlotIGainChanged(); break;
        case 8: _t->SlotMaintainPosition(); break;
        case 9: _t->SlotZeroPosition(); break;
        case 10: _t->SlotResetPIDGain(); break;
        case 11: _t->SlotPlotIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->SlotEnableEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsPIDQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsPIDQtWidget::SignalEnable)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject mtsPIDQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsPIDQtWidget.data,
      qt_meta_data_mtsPIDQtWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mtsPIDQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsPIDQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mtsPIDQtWidget.stringdata0))
        return static_cast<void*>(const_cast< mtsPIDQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsPIDQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsPIDQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void mtsPIDQtWidget::SignalEnable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
