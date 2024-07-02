/****************************************************************************
** Meta object code from reading C++ file 'vepolylinesettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/vepolylinesettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vepolylinesettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VEPolyLineSettings_t {
    QByteArrayData data[17];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VEPolyLineSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VEPolyLineSettings_t qt_meta_stringdata_VEPolyLineSettings = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VEPolyLineSettings"
QT_MOC_LITERAL(1, 19, 16), // "lineColorChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "color"
QT_MOC_LITERAL(4, 43, 16), // "lineWidthChanged"
QT_MOC_LITERAL(5, 60, 5), // "width"
QT_MOC_LITERAL(6, 66, 12), // "setLineColor"
QT_MOC_LITERAL(7, 79, 12), // "setLineWidth"
QT_MOC_LITERAL(8, 92, 11), // "newPolyline"
QT_MOC_LITERAL(9, 104, 11), // "VEPolyline*"
QT_MOC_LITERAL(10, 116, 8), // "polyline"
QT_MOC_LITERAL(11, 125, 12), // "loadPolyline"
QT_MOC_LITERAL(12, 138, 8), // "deselect"
QT_MOC_LITERAL(13, 147, 10), // "setVisible"
QT_MOC_LITERAL(14, 158, 7), // "visible"
QT_MOC_LITERAL(15, 166, 9), // "lineColor"
QT_MOC_LITERAL(16, 176, 9) // "lineWidth"

    },
    "VEPolyLineSettings\0lineColorChanged\0"
    "\0color\0lineWidthChanged\0width\0"
    "setLineColor\0setLineWidth\0newPolyline\0"
    "VEPolyline*\0polyline\0loadPolyline\0"
    "deselect\0setVisible\0visible\0lineColor\0"
    "lineWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VEPolyLineSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
      15, QMetaType::QColor, 0x00495103,
      16, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void VEPolyLineSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VEPolyLineSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lineColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->lineWidthChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->setLineColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setLineWidth((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->newPolyline((*reinterpret_cast< VEPolyline*(*)>(_a[1]))); break;
        case 5: _t->loadPolyline((*reinterpret_cast< VEPolyline*(*)>(_a[1]))); break;
        case 6: _t->deselect(); break;
        case 7: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VEPolyLineSettings::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VEPolyLineSettings::lineColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VEPolyLineSettings::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VEPolyLineSettings::lineWidthChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VEPolyLineSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->lineColor(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VEPolyLineSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject VEPolyLineSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VEPolyLineSettings.data,
    qt_meta_data_VEPolyLineSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VEPolyLineSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VEPolyLineSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VEPolyLineSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VEPolyLineSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VEPolyLineSettings::lineColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VEPolyLineSettings::lineWidthChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
