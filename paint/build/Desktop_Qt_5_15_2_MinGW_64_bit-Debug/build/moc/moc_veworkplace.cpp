/****************************************************************************
** Meta object code from reading C++ file 'veworkplace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/veworkplace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'veworkplace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VEWorkplace_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VEWorkplace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VEWorkplace_t qt_meta_stringdata_VEWorkplace = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VEWorkplace"
QT_MOC_LITERAL(1, 12, 23), // "previousPositionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "currentActionChanged"
QT_MOC_LITERAL(4, 58, 16), // "signalSelectItem"
QT_MOC_LITERAL(5, 75, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(6, 90, 4), // "item"
QT_MOC_LITERAL(7, 95, 19), // "signalNewSelectItem"
QT_MOC_LITERAL(8, 115, 13), // "deselectItems"
QT_MOC_LITERAL(9, 129, 8), // "slotMove"
QT_MOC_LITERAL(10, 138, 11), // "signalOwner"
QT_MOC_LITERAL(11, 150, 2), // "dx"
QT_MOC_LITERAL(12, 153, 2), // "dy"
QT_MOC_LITERAL(13, 156, 13), // "currentAction"
QT_MOC_LITERAL(14, 170, 16) // "previousPosition"

    },
    "VEWorkplace\0previousPositionChanged\0"
    "\0currentActionChanged\0signalSelectItem\0"
    "QGraphicsItem*\0item\0signalNewSelectItem\0"
    "deselectItems\0slotMove\0signalOwner\0"
    "dx\0dy\0currentAction\0previousPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VEWorkplace[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       4,    1,   48,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   54,    2, 0x08 /* Private */,
       9,    3,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QReal, QMetaType::QReal,   10,   11,   12,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::QPointF, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void VEWorkplace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VEWorkplace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previousPositionChanged(); break;
        case 1: _t->currentActionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalSelectItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 3: _t->signalNewSelectItem((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 4: _t->deselectItems(); break;
        case 5: _t->slotMove((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VEWorkplace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VEWorkplace::previousPositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VEWorkplace::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VEWorkplace::currentActionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VEWorkplace::*)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VEWorkplace::signalSelectItem)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VEWorkplace::*)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VEWorkplace::signalNewSelectItem)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VEWorkplace *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentAction(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->previousPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VEWorkplace *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentAction(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setPreviousPosition(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VEWorkplace::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_VEWorkplace.data,
    qt_meta_data_VEWorkplace,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VEWorkplace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VEWorkplace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VEWorkplace.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int VEWorkplace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VEWorkplace::previousPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VEWorkplace::currentActionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VEWorkplace::signalSelectItem(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VEWorkplace::signalNewSelectItem(QGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
