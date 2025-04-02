/****************************************************************************
** Meta object code from reading C++ file 'jsonmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../jsonmanager.h"
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
#error "The header file 'jsonmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJSONmanagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJSONmanagerENDCLASS = QtMocHelpers::stringData(
    "JSONmanager",
    "QML.Element",
    "auto",
    "BiasValChanged",
    "",
    "DriverChanged",
    "tractionSwitchChanged",
    "antiLagChanged",
    "fuelAimChanged",
    "launchAimChanged",
    "ignitionTimingChanged",
    "throttleMapChanged",
    "loadProfile",
    "updateBrakeBias",
    "updateTractionCtl",
    "updateAntiLag",
    "updateLaunchAim",
    "updateIgnition",
    "updateFuelAim",
    "updateThrottleMap",
    "driver",
    "biasVal",
    "tractionSwitch",
    "launchAim",
    "antiLag",
    "ignitionTiming",
    "throttleMap",
    "fuelAim"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJSONmanagerENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[15];
    char stringdata4[1];
    char stringdata5[14];
    char stringdata6[22];
    char stringdata7[15];
    char stringdata8[15];
    char stringdata9[17];
    char stringdata10[22];
    char stringdata11[19];
    char stringdata12[12];
    char stringdata13[16];
    char stringdata14[18];
    char stringdata15[14];
    char stringdata16[16];
    char stringdata17[15];
    char stringdata18[14];
    char stringdata19[18];
    char stringdata20[7];
    char stringdata21[8];
    char stringdata22[15];
    char stringdata23[10];
    char stringdata24[8];
    char stringdata25[15];
    char stringdata26[12];
    char stringdata27[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJSONmanagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJSONmanagerENDCLASS_t qt_meta_stringdata_CLASSJSONmanagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "JSONmanager"
        QT_MOC_LITERAL(12, 11),  // "QML.Element"
        QT_MOC_LITERAL(24, 4),  // "auto"
        QT_MOC_LITERAL(29, 14),  // "BiasValChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 13),  // "DriverChanged"
        QT_MOC_LITERAL(59, 21),  // "tractionSwitchChanged"
        QT_MOC_LITERAL(81, 14),  // "antiLagChanged"
        QT_MOC_LITERAL(96, 14),  // "fuelAimChanged"
        QT_MOC_LITERAL(111, 16),  // "launchAimChanged"
        QT_MOC_LITERAL(128, 21),  // "ignitionTimingChanged"
        QT_MOC_LITERAL(150, 18),  // "throttleMapChanged"
        QT_MOC_LITERAL(169, 11),  // "loadProfile"
        QT_MOC_LITERAL(181, 15),  // "updateBrakeBias"
        QT_MOC_LITERAL(197, 17),  // "updateTractionCtl"
        QT_MOC_LITERAL(215, 13),  // "updateAntiLag"
        QT_MOC_LITERAL(229, 15),  // "updateLaunchAim"
        QT_MOC_LITERAL(245, 14),  // "updateIgnition"
        QT_MOC_LITERAL(260, 13),  // "updateFuelAim"
        QT_MOC_LITERAL(274, 17),  // "updateThrottleMap"
        QT_MOC_LITERAL(292, 6),  // "driver"
        QT_MOC_LITERAL(299, 7),  // "biasVal"
        QT_MOC_LITERAL(307, 14),  // "tractionSwitch"
        QT_MOC_LITERAL(322, 9),  // "launchAim"
        QT_MOC_LITERAL(332, 7),  // "antiLag"
        QT_MOC_LITERAL(340, 14),  // "ignitionTiming"
        QT_MOC_LITERAL(355, 11),  // "throttleMap"
        QT_MOC_LITERAL(367, 7)   // "fuelAim"
    },
    "JSONmanager",
    "QML.Element",
    "auto",
    "BiasValChanged",
    "",
    "DriverChanged",
    "tractionSwitchChanged",
    "antiLagChanged",
    "fuelAimChanged",
    "launchAimChanged",
    "ignitionTimingChanged",
    "throttleMapChanged",
    "loadProfile",
    "updateBrakeBias",
    "updateTractionCtl",
    "updateAntiLag",
    "updateLaunchAim",
    "updateIgnition",
    "updateFuelAim",
    "updateThrottleMap",
    "driver",
    "biasVal",
    "tractionSwitch",
    "launchAim",
    "antiLag",
    "ignitionTiming",
    "throttleMap",
    "fuelAim"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJSONmanagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       1,   14, // classinfo
      16,   16, // methods
       8,  158, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  112,    4, 0x06,    9 /* Public */,
       5,    0,  113,    4, 0x06,   10 /* Public */,
       6,    0,  114,    4, 0x06,   11 /* Public */,
       7,    0,  115,    4, 0x06,   12 /* Public */,
       8,    0,  116,    4, 0x06,   13 /* Public */,
       9,    0,  117,    4, 0x06,   14 /* Public */,
      10,    0,  118,    4, 0x06,   15 /* Public */,
      11,    0,  119,    4, 0x06,   16 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  120,    4, 0x02,   17 /* Public */,
      13,    2,  123,    4, 0x02,   19 /* Public */,
      14,    2,  128,    4, 0x02,   22 /* Public */,
      15,    2,  133,    4, 0x02,   25 /* Public */,
      16,    2,  138,    4, 0x02,   28 /* Public */,
      17,    2,  143,    4, 0x02,   31 /* Public */,
      18,    2,  148,    4, 0x02,   34 /* Public */,
      19,    2,  153,    4, 0x02,   37 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    4,    4,

 // properties: name, type, flags
      20, QMetaType::Int, 0x00015903, uint(1), 0,
      21, QMetaType::Int, 0x00015903, uint(0), 0,
      22, QMetaType::Int, 0x00015903, uint(2), 0,
      23, QMetaType::Int, 0x00015903, uint(5), 0,
      24, QMetaType::Int, 0x00015903, uint(3), 0,
      25, QMetaType::Bool, 0x00015903, uint(6), 0,
      26, QMetaType::Bool, 0x00015903, uint(7), 0,
      27, QMetaType::Bool, 0x00015903, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject JSONmanager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSJSONmanagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJSONmanagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'driver'
        int,
        // property 'biasVal'
        int,
        // property 'tractionSwitch'
        int,
        // property 'launchAim'
        int,
        // property 'antiLag'
        int,
        // property 'ignitionTiming'
        bool,
        // property 'throttleMap'
        bool,
        // property 'fuelAim'
        bool,
        // Q_OBJECT / Q_GADGET
        JSONmanager,
        // method 'BiasValChanged'
        void,
        // method 'DriverChanged'
        void,
        // method 'tractionSwitchChanged'
        void,
        // method 'antiLagChanged'
        void,
        // method 'fuelAimChanged'
        void,
        // method 'launchAimChanged'
        void,
        // method 'ignitionTimingChanged'
        void,
        // method 'throttleMapChanged'
        void,
        // method 'loadProfile'
        void,
        int,
        // method 'updateBrakeBias'
        bool,
        int,
        int,
        // method 'updateTractionCtl'
        bool,
        int,
        int,
        // method 'updateAntiLag'
        bool,
        int,
        int,
        // method 'updateLaunchAim'
        bool,
        int,
        int,
        // method 'updateIgnition'
        bool,
        int,
        int,
        // method 'updateFuelAim'
        bool,
        int,
        int,
        // method 'updateThrottleMap'
        bool,
        int,
        int
    >,
    nullptr
} };

void JSONmanager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JSONmanager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->BiasValChanged(); break;
        case 1: _t->DriverChanged(); break;
        case 2: _t->tractionSwitchChanged(); break;
        case 3: _t->antiLagChanged(); break;
        case 4: _t->fuelAimChanged(); break;
        case 5: _t->launchAimChanged(); break;
        case 6: _t->ignitionTimingChanged(); break;
        case 7: _t->throttleMapChanged(); break;
        case 8: _t->loadProfile((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: { bool _r = _t->updateBrakeBias((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->updateTractionCtl((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->updateAntiLag((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->updateLaunchAim((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->updateIgnition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->updateFuelAim((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->updateThrottleMap((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::BiasValChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::DriverChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::tractionSwitchChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::antiLagChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::fuelAimChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::launchAimChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::ignitionTimingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (JSONmanager::*)();
            if (_t _q_method = &JSONmanager::throttleMapChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JSONmanager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getDriver(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getBiasVal(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getTractionSwitch(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->launchAim(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->antiLag(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->ignitionTiming(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->throttleMap(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->fuelAim(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JSONmanager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDriver(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setBiasVal(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setTractionSwitch(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLaunchAim(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAntiLag(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setIgnitionTiming(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setThrottleMap(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFuelAim(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *JSONmanager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JSONmanager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJSONmanagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JSONmanager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JSONmanager::BiasValChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JSONmanager::DriverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JSONmanager::tractionSwitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JSONmanager::antiLagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void JSONmanager::fuelAimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void JSONmanager::launchAimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void JSONmanager::ignitionTimingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void JSONmanager::throttleMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
