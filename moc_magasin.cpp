/****************************************************************************
** Meta object code from reading C++ file 'magasin.h'
**
** Created: Wed Jun 4 14:39:58 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "magasin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magasin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_magasin[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      56,    8,    8,    8, 0x08,
      93,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_magasin[] = {
    "magasin\0\0on_lineEditMagasinLibelle_textChanged(QString)\0"
    "on_pushButtonMagasinEditer_clicked()\0"
    "on_pushButtonMagasinAnnuler_clicked()\0"
};

const QMetaObject magasin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_magasin,
      qt_meta_data_magasin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &magasin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *magasin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *magasin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_magasin))
        return static_cast<void*>(const_cast< magasin*>(this));
    return QDialog::qt_metacast(_clname);
}

int magasin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lineEditMagasinLibelle_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_pushButtonMagasinEditer_clicked(); break;
        case 2: on_pushButtonMagasinAnnuler_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
