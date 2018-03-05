/****************************************************************************
** Meta object code from reading C++ file 'mtsIntuitiveResearchKitArmQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawIntuitiveResearchKit/components/include/sawIntuitiveResearchKit/mtsIntuitiveResearchKitArmQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsIntuitiveResearchKitArmQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t {
    QByteArrayData data[14];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget_t qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mtsIntuitiveResearchKitArmQtW..."
QT_MOC_LITERAL(1, 35, 18), // "SignalDesiredState"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "state"
QT_MOC_LITERAL(4, 61, 18), // "SignalCurrentState"
QT_MOC_LITERAL(5, 80, 10), // "timerEvent"
QT_MOC_LITERAL(6, 91, 12), // "QTimerEvent*"
QT_MOC_LITERAL(7, 104, 5), // "event"
QT_MOC_LITERAL(8, 110, 28), // "SlotDesiredStateEventHandler"
QT_MOC_LITERAL(9, 139, 28), // "SlotCurrentStateEventHandler"
QT_MOC_LITERAL(10, 168, 14), // "SlotLogEnabled"
QT_MOC_LITERAL(11, 183, 23), // "SlotEnableDirectControl"
QT_MOC_LITERAL(12, 207, 6), // "toggle"
QT_MOC_LITERAL(13, 214, 8) // "SlotHome"

    },
    "mtsIntuitiveResearchKitArmQtWidget\0"
    "SignalDesiredState\0\0state\0SignalCurrentState\0"
    "timerEvent\0QTimerEvent*\0event\0"
    "SlotDesiredStateEventHandler\0"
    "SlotCurrentStateEventHandler\0"
    "SlotLogEnabled\0SlotEnableDirectControl\0"
    "toggle\0SlotHome"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsIntuitiveResearchKitArmQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void mtsIntuitiveResearchKitArmQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsIntuitiveResearchKitArmQtWidget *_t = static_cast<mtsIntuitiveResearchKitArmQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalDesiredState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalCurrentState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 3: _t->SlotDesiredStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SlotCurrentStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SlotLogEnabled(); break;
        case 6: _t->SlotEnableDirectControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SlotHome(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsIntuitiveResearchKitArmQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitArmQtWidget::SignalDesiredState)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsIntuitiveResearchKitArmQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsIntuitiveResearchKitArmQtWidget::SignalCurrentState)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject mtsIntuitiveResearchKitArmQtWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget.data,
      qt_meta_data_mtsIntuitiveResearchKitArmQtWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mtsIntuitiveResearchKitArmQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsIntuitiveResearchKitArmQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mtsIntuitiveResearchKitArmQtWidget.stringdata0))
        return static_cast<void*>(const_cast< mtsIntuitiveResearchKitArmQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsIntuitiveResearchKitArmQtWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mtsIntuitiveResearchKitArmQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mtsIntuitiveResearchKitArmQtWidget::SignalDesiredState(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsIntuitiveResearchKitArmQtWidget::SignalCurrentState(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
