/****************************************************************************
** Meta object code from reading C++ file 'canmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../canmanager.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
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
struct qt_meta_stringdata_CLASSCANmanagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCANmanagerENDCLASS = QtMocHelpers::stringData(
    "CANmanager",
    "QML.Element",
    "auto",
    "vehicleSpeedChanged",
    "",
    "ecuFaultChanged",
    "rearBrakePresChanged",
    "frontBrakePresChanged",
    "coolantTempChanged",
    "oilTempChanged",
    "fuelTempChanged",
    "exhaustTempChanged",
    "inletAirTempChanged",
    "inletManifoldPresChanged",
    "fuelPresChanged",
    "fuelMixAimChanged",
    "exhaustLambdaChanged",
    "faultMessageChanged",
    "CAN_Loop",
    "updatePayload",
    "vehicleSpeed",
    "rearBrakePres",
    "frontBrakePres",
    "coolantTemp",
    "oilTemp",
    "fuelTemp",
    "ecuFault",
    "faultMessage",
    "exhaustTemp",
    "inletAirTemp",
    "inletManifoldPres",
    "fuelPres",
    "fuelMixAim",
    "exhaustLambda"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCANmanagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      16,   16, // methods
      14,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  112,    4, 0x06,   15 /* Public */,
       5,    0,  113,    4, 0x06,   16 /* Public */,
       6,    0,  114,    4, 0x06,   17 /* Public */,
       7,    0,  115,    4, 0x06,   18 /* Public */,
       8,    0,  116,    4, 0x06,   19 /* Public */,
       9,    0,  117,    4, 0x06,   20 /* Public */,
      10,    0,  118,    4, 0x06,   21 /* Public */,
      11,    0,  119,    4, 0x06,   22 /* Public */,
      12,    0,  120,    4, 0x06,   23 /* Public */,
      13,    0,  121,    4, 0x06,   24 /* Public */,
      14,    0,  122,    4, 0x06,   25 /* Public */,
      15,    0,  123,    4, 0x06,   26 /* Public */,
      16,    0,  124,    4, 0x06,   27 /* Public */,
      17,    0,  125,    4, 0x06,   28 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    0,  126,    4, 0x08,   29 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      19,    2,  127,    4, 0x02,   30 /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    4,

 // properties: name, type, flags
      20, QMetaType::Int, 0x00015903, uint(0), 0,
      21, QMetaType::Int, 0x00015903, uint(2), 0,
      22, QMetaType::Int, 0x00015903, uint(3), 0,
      23, QMetaType::QString, 0x00015903, uint(4), 0,
      24, QMetaType::QString, 0x00015903, uint(5), 0,
      25, QMetaType::QString, 0x00015903, uint(6), 0,
      26, QMetaType::Bool, 0x00015903, uint(1), 0,
      27, QMetaType::QString, 0x00015903, uint(13), 0,
      28, QMetaType::QString, 0x00015903, uint(7), 0,
      29, QMetaType::QString, 0x00015903, uint(8), 0,
      30, QMetaType::Int, 0x00015903, uint(9), 0,
      31, QMetaType::Int, 0x00015903, uint(10), 0,
      32, QMetaType::Int, 0x00015903, uint(11), 0,
      33, QMetaType::Double, 0x00015903, uint(12), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CANmanager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCANmanagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCANmanagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'vehicleSpeed'
        int,
        // property 'rearBrakePres'
        int,
        // property 'frontBrakePres'
        int,
        // property 'coolantTemp'
        QString,
        // property 'oilTemp'
        QString,
        // property 'fuelTemp'
        QString,
        // property 'ecuFault'
        bool,
        // property 'faultMessage'
        QString,
        // property 'exhaustTemp'
        QString,
        // property 'inletAirTemp'
        QString,
        // property 'inletManifoldPres'
        int,
        // property 'fuelPres'
        int,
        // property 'fuelMixAim'
        int,
        // property 'exhaustLambda'
        double,
        // Q_OBJECT / Q_GADGET
        CANmanager,
        // method 'vehicleSpeedChanged'
        void,
        // method 'ecuFaultChanged'
        void,
        // method 'rearBrakePresChanged'
        void,
        // method 'frontBrakePresChanged'
        void,
        // method 'coolantTempChanged'
        void,
        // method 'oilTempChanged'
        void,
        // method 'fuelTempChanged'
        void,
        // method 'exhaustTempChanged'
        void,
        // method 'inletAirTempChanged'
        void,
        // method 'inletManifoldPresChanged'
        void,
        // method 'fuelPresChanged'
        void,
        // method 'fuelMixAimChanged'
        void,
        // method 'exhaustLambdaChanged'
        void,
        // method 'faultMessageChanged'
        void,
        // method 'CAN_Loop'
        void,
        // method 'updatePayload'
        void,
        int,
        int
    >,
    nullptr
} };

void CANmanager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CANmanager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->vehicleSpeedChanged(); break;
        case 1: _t->ecuFaultChanged(); break;
        case 2: _t->rearBrakePresChanged(); break;
        case 3: _t->frontBrakePresChanged(); break;
        case 4: _t->coolantTempChanged(); break;
        case 5: _t->oilTempChanged(); break;
        case 6: _t->fuelTempChanged(); break;
        case 7: _t->exhaustTempChanged(); break;
        case 8: _t->inletAirTempChanged(); break;
        case 9: _t->inletManifoldPresChanged(); break;
        case 10: _t->fuelPresChanged(); break;
        case 11: _t->fuelMixAimChanged(); break;
        case 12: _t->exhaustLambdaChanged(); break;
        case 13: _t->faultMessageChanged(); break;
        case 14: _t->CAN_Loop(); break;
        case 15: _t->updatePayload((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::vehicleSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::ecuFaultChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::rearBrakePresChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::frontBrakePresChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::coolantTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::oilTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::fuelTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::exhaustTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::inletAirTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::inletManifoldPresChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::fuelPresChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::fuelMixAimChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::exhaustLambdaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CANmanager::*)();
            if (_t _q_method = &CANmanager::faultMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CANmanager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->vehicleSpeed(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rearBrakePres(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->frontBrakePres(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->coolantTemp(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->oilTemp(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->fuelTemp(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->ecuFault(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->faultMessage(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->exhaustTemp(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->inletAirTemp(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->inletManifoldPres(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->fuelPres(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->fuelMixAim(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->exhaustLambda(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CANmanager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVehicleSpeed(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRearBrakePres(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFrontBrakePres(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCoolantTemp(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setOilTemp(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFuelTemp(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setEcuFault(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFaultMessage(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setExhaustTemp(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setInletAirTemp(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setInletManifoldPres(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setFuelPres(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setFuelMixAim(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setExhaustLambda(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CANmanager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CANmanager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCANmanagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CANmanager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void CANmanager::vehicleSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CANmanager::ecuFaultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CANmanager::rearBrakePresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CANmanager::frontBrakePresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CANmanager::coolantTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CANmanager::oilTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CANmanager::fuelTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CANmanager::exhaustTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CANmanager::inletAirTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void CANmanager::inletManifoldPresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CANmanager::fuelPresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void CANmanager::fuelMixAimChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void CANmanager::exhaustLambdaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void CANmanager::faultMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
