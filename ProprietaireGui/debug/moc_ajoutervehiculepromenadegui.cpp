/****************************************************************************
** Meta object code from reading C++ file 'ajoutervehiculepromenadegui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ajoutervehiculepromenadegui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajoutervehiculepromenadegui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ajouterVehiculePromenadeGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ajouterVehiculePromenadeGui[] = {
    "ajouterVehiculePromenadeGui\0\0"
    "validerVehiculePromenade()\0"
};

void ajouterVehiculePromenadeGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ajouterVehiculePromenadeGui *_t = static_cast<ajouterVehiculePromenadeGui *>(_o);
        switch (_id) {
        case 0: _t->validerVehiculePromenade(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ajouterVehiculePromenadeGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ajouterVehiculePromenadeGui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ajouterVehiculePromenadeGui,
      qt_meta_data_ajouterVehiculePromenadeGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ajouterVehiculePromenadeGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ajouterVehiculePromenadeGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ajouterVehiculePromenadeGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ajouterVehiculePromenadeGui))
        return static_cast<void*>(const_cast< ajouterVehiculePromenadeGui*>(this));
    return QDialog::qt_metacast(_clname);
}

int ajouterVehiculePromenadeGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
