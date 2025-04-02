/****************************************************************************
** Meta object code from reading C++ file 'shutdownhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../shutdownhandler.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shutdownhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSShutdownHandlerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSShutdownHandlerENDCLASS = QtMocHelpers::stringData(
    "ShutdownHandler",
    "QML.Element",
    "auto",
    "powerOFF",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSShutdownHandlerENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[9];
    char stringdata4[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSShutdownHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSShutdownHandlerENDCLASS_t qt_meta_stringdata_CLASSShutdownHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ShutdownHandler"
        QT_MOC_LITERAL(16, 11),  // "QML.Element"
        QT_MOC_LITERAL(28, 4),  // "auto"
        QT_MOC_LITERAL(33, 8),  // "powerOFF"
        QT_MOC_LITERAL(42, 0)   // ""
    },
    "ShutdownHandler",
    "QML.Element",
    "auto",
    "powerOFF",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSShutdownHandlerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   22,    4, 0x02,    1 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShutdownHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSShutdownHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSShutdownHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        ShutdownHandler,
        // method 'powerOFF'
        void
    >,
    nullptr
} };

void ShutdownHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShutdownHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->powerOFF(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ShutdownHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShutdownHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSShutdownHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShutdownHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
