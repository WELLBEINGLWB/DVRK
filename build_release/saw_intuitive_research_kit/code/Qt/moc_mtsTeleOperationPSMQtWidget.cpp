/****************************************************************************
** Meta object code from reading C++ file 'mtsTeleOperationPSMQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawIntuitiveResearchKit/components/include/sawIntuitiveResearchKit/mtsTeleOperationPSMQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsTeleOperationPSMQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsTeleOperationPSMQtWidget_t {
    QByteArrayData data[25];
    char stringdata0[433];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsTeleOperationPSMQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsTeleOperationPSMQtWidget_t qt_meta_stringdata_mtsTeleOperationPSMQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mtsTeleOperationPSMQtWidget"
QT_MOC_LITERAL(1, 28, 18), // "SignalDesiredState"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "state"
QT_MOC_LITERAL(4, 54, 18), // "SignalCurrentState"
QT_MOC_LITERAL(5, 73, 15), // "SignalFollowing"
QT_MOC_LITERAL(6, 89, 9), // "following"
QT_MOC_LITERAL(7, 99, 11), // "SignalScale"
QT_MOC_LITERAL(8, 111, 5), // "scale"
QT_MOC_LITERAL(9, 117, 20), // "SignalRotationLocked"
QT_MOC_LITERAL(10, 138, 4), // "lock"
QT_MOC_LITERAL(11, 143, 23), // "SignalTranslationLocked"
QT_MOC_LITERAL(12, 167, 10), // "timerEvent"
QT_MOC_LITERAL(13, 178, 12), // "QTimerEvent*"
QT_MOC_LITERAL(14, 191, 5), // "event"
QT_MOC_LITERAL(15, 197, 14), // "SlotLogEnabled"
QT_MOC_LITERAL(16, 212, 12), // "SlotSetScale"
QT_MOC_LITERAL(17, 225, 16), // "SlotLockRotation"
QT_MOC_LITERAL(18, 242, 19), // "SlotLockTranslation"
QT_MOC_LITERAL(19, 262, 28), // "SlotDesiredStateEventHandler"
QT_MOC_LITERAL(20, 291, 28), // "SlotCurrentStateEventHandler"
QT_MOC_LITERAL(21, 320, 25), // "SlotFollowingEventHandler"
QT_MOC_LITERAL(22, 346, 21), // "SlotScaleEventHandler"
QT_MOC_LITERAL(23, 368, 30), // "SlotRotationLockedEventHandler"
QT_MOC_LITERAL(24, 399, 33) // "SlotTranslationLockedEventHan..."

    },
    "mtsTeleOperationPSMQtWidget\0"
    "SignalDesiredState\0\0state\0SignalCurrentState\0"
    "SignalFollowing\0following\0SignalScale\0"
    "scale\0SignalRotationLocked\0lock\0"
    "SignalTranslationLocked\0timerEvent\0"
    "QTimerEvent*\0event\0SlotLogEnabled\0"
    "SlotSetScale\0SlotLockRotation\0"
    "SlotLockTranslation\0SlotDesiredStateEventHandler\0"
    "SlotCurrentStateEventHandler\0"
    "SlotFollowingEventHandler\0"
    "SlotScaleEventHandler\0"
    "SlotRotationLockedEventHandler\0"
    "SlotTranslationLockedEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsTeleOperationPSMQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    1,  105,    2, 0x06 /* Public */,
       7,    1,  108,    2, 0x06 /* Public */,
       9,    1,  111,    2, 0x06 /* Public */,
      11,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  117,    2, 0x08 /* Private */,
      15,    0,  120,    2, 0x08 /* Private */,
      16,    1,  121,    2, 0x08 /* Private */,
      17,    1,  124,    2, 0x08 /* Private */,
      18,    1,  127,    2, 0x08 /* Private */,
      19,    1,  130,    2, 0x08 /* Private */,
      20,    1,  133,    2, 0x08 /* Private */,
      21,    1,  136,    2, 0x08 /* Private */,
      22,    1,  139,    2, 0x08 /* Private */,
      23,    1,  142,    2, 0x08 /* Private */,
      24,    1,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void mtsTeleOperationPSMQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsTeleOperationPSMQtWidget *_t = static_cast<mtsTeleOperationPSMQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalDesiredState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalCurrentState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SignalFollowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SignalScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SignalRotationLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SignalTranslationLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 7: _t->SlotLogEnabled(); break;
        case 8: _t->SlotSetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->SlotLockRotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->SlotLockTranslation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->SlotDesiredStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->SlotCurrentStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->SlotFollowingEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->SlotScaleEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->SlotRotationLockedEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->SlotTranslationLockedEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsTeleOperationPSMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationPSMQtWidget::SignalDesiredState)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsTeleOperationPSMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationPSMQtWidget::SignalCurrentState)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsTeleOperationPSMQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationPSMQtWidget::SignalFollowing)) {
                *result = 2;
            }
        }
        {
            typedef void (mtsTeleOperationPSMQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationPSMQtWidget::SignalScale)) {
                *result = 3;
            }
        }
        {
            typedef void (mtsTeleOperationPSMQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationPSMQtWidget::SignalRotationLocked)) {
                *result = 4;
            }
        }
        {
            typedef void (mtsTeleOperationPSMQtWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationPSMQtWidget::SignalTranslationLocked)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject mtsTeleOperationPSMQtWidget::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_mtsTeleOperationPSMQtWidget.data,
      qt_meta_data_mtsTeleOperationPSMQtWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mtsTeleOperationPSMQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsTeleOperationPSMQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mtsTeleOperationPSMQtWidget.stringdata0))
        return static_cast<void*>(const_cast< mtsTeleOperationPSMQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsTeleOperationPSMQtWidget*>(this));
    return QSplitter::qt_metacast(_clname);
}

int mtsTeleOperationPSMQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
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
void mtsTeleOperationPSMQtWidget::SignalDesiredState(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsTeleOperationPSMQtWidget::SignalCurrentState(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsTeleOperationPSMQtWidget::SignalFollowing(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mtsTeleOperationPSMQtWidget::SignalScale(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mtsTeleOperationPSMQtWidget::SignalRotationLocked(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mtsTeleOperationPSMQtWidget::SignalTranslationLocked(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
