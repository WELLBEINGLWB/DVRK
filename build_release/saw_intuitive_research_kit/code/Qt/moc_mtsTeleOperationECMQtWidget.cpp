/****************************************************************************
** Meta object code from reading C++ file 'mtsTeleOperationECMQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/sawIntuitiveResearchKit/components/include/sawIntuitiveResearchKit/mtsTeleOperationECMQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsTeleOperationECMQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsTeleOperationECMQtWidget_t {
    QByteArrayData data[15];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsTeleOperationECMQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsTeleOperationECMQtWidget_t qt_meta_stringdata_mtsTeleOperationECMQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mtsTeleOperationECMQtWidget"
QT_MOC_LITERAL(1, 28, 18), // "SignalDesiredState"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "state"
QT_MOC_LITERAL(4, 54, 18), // "SignalCurrentState"
QT_MOC_LITERAL(5, 73, 11), // "SignalScale"
QT_MOC_LITERAL(6, 85, 5), // "scale"
QT_MOC_LITERAL(7, 91, 10), // "timerEvent"
QT_MOC_LITERAL(8, 102, 12), // "QTimerEvent*"
QT_MOC_LITERAL(9, 115, 5), // "event"
QT_MOC_LITERAL(10, 121, 14), // "SlotLogEnabled"
QT_MOC_LITERAL(11, 136, 28), // "SlotDesiredStateEventHandler"
QT_MOC_LITERAL(12, 165, 28), // "SlotCurrentStateEventHandler"
QT_MOC_LITERAL(13, 194, 12), // "SlotSetScale"
QT_MOC_LITERAL(14, 207, 21) // "SlotScaleEventHandler"

    },
    "mtsTeleOperationECMQtWidget\0"
    "SignalDesiredState\0\0state\0SignalCurrentState\0"
    "SignalScale\0scale\0timerEvent\0QTimerEvent*\0"
    "event\0SlotLogEnabled\0SlotDesiredStateEventHandler\0"
    "SlotCurrentStateEventHandler\0SlotSetScale\0"
    "SlotScaleEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsTeleOperationECMQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   68,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      13,    1,   78,    2, 0x08 /* Private */,
      14,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void mtsTeleOperationECMQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsTeleOperationECMQtWidget *_t = static_cast<mtsTeleOperationECMQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalDesiredState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalCurrentState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SignalScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 4: _t->SlotLogEnabled(); break;
        case 5: _t->SlotDesiredStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->SlotCurrentStateEventHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->SlotSetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->SlotScaleEventHandler((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalDesiredState)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalCurrentState)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsTeleOperationECMQtWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsTeleOperationECMQtWidget::SignalScale)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject mtsTeleOperationECMQtWidget::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_mtsTeleOperationECMQtWidget.data,
      qt_meta_data_mtsTeleOperationECMQtWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mtsTeleOperationECMQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsTeleOperationECMQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mtsTeleOperationECMQtWidget.stringdata0))
        return static_cast<void*>(const_cast< mtsTeleOperationECMQtWidget*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsTeleOperationECMQtWidget*>(this));
    return QSplitter::qt_metacast(_clname);
}

int mtsTeleOperationECMQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void mtsTeleOperationECMQtWidget::SignalDesiredState(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsTeleOperationECMQtWidget::SignalCurrentState(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsTeleOperationECMQtWidget::SignalScale(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
