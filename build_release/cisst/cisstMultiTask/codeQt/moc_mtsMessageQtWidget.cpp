/****************************************************************************
** Meta object code from reading C++ file 'mtsMessageQtWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cisst-saw/cisst/cisstMultiTask/mtsMessageQtWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtsMessageQtWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mtsMessageQtWidget_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsMessageQtWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsMessageQtWidget_t qt_meta_stringdata_mtsMessageQtWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "mtsMessageQtWidget"
QT_MOC_LITERAL(1, 19, 19), // "SignalAppendMessage"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "SignalSetColor"
QT_MOC_LITERAL(4, 55, 11), // "SignalClear"
QT_MOC_LITERAL(5, 67, 15) // "SlotTextChanged"

    },
    "mtsMessageQtWidget\0SignalAppendMessage\0"
    "\0SignalSetColor\0SignalClear\0SlotTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsMessageQtWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mtsMessageQtWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mtsMessageQtWidget *_t = static_cast<mtsMessageQtWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalAppendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SignalSetColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->SignalClear(); break;
        case 3: _t->SlotTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mtsMessageQtWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsMessageQtWidget::SignalAppendMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (mtsMessageQtWidget::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsMessageQtWidget::SignalSetColor)) {
                *result = 1;
            }
        }
        {
            typedef void (mtsMessageQtWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mtsMessageQtWidget::SignalClear)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject mtsMessageQtWidget::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_mtsMessageQtWidget.data,
      qt_meta_data_mtsMessageQtWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mtsMessageQtWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsMessageQtWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mtsMessageQtWidget.stringdata0))
        return static_cast<void*>(const_cast< mtsMessageQtWidget*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int mtsMessageQtWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void mtsMessageQtWidget::SignalAppendMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mtsMessageQtWidget::SignalSetColor(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mtsMessageQtWidget::SignalClear()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_mtsMessageQtWidgetComponent_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mtsMessageQtWidgetComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mtsMessageQtWidgetComponent_t qt_meta_stringdata_mtsMessageQtWidgetComponent = {
    {
QT_MOC_LITERAL(0, 0, 27) // "mtsMessageQtWidgetComponent"

    },
    "mtsMessageQtWidgetComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mtsMessageQtWidgetComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void mtsMessageQtWidgetComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject mtsMessageQtWidgetComponent::staticMetaObject = {
    { &mtsMessageQtWidget::staticMetaObject, qt_meta_stringdata_mtsMessageQtWidgetComponent.data,
      qt_meta_data_mtsMessageQtWidgetComponent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mtsMessageQtWidgetComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mtsMessageQtWidgetComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mtsMessageQtWidgetComponent.stringdata0))
        return static_cast<void*>(const_cast< mtsMessageQtWidgetComponent*>(this));
    if (!strcmp(_clname, "mtsComponent"))
        return static_cast< mtsComponent*>(const_cast< mtsMessageQtWidgetComponent*>(this));
    return mtsMessageQtWidget::qt_metacast(_clname);
}

int mtsMessageQtWidgetComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mtsMessageQtWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
