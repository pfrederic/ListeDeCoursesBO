/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Jun 2 11:49:19 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      58,   52,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     176,   11,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,
     234,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,
     311,   11,   11,   11, 0x08,
     351,   52,   11,   11, 0x08,
     392,   11,   11,   11, 0x08,
     411,   11,   11,   11, 0x08,
     438,   11,   11,   11, 0x08,
     474,   11,   11,   11, 0x08,
     511,   11,   11,   11, 0x08,
     549,   52,   11,   11, 0x08,
     588,   11,   11,   11, 0x08,
     605,   11,   11,   11, 0x08,
     634,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonProduitSupprimer_clicked()\0"
    "index\0on_tableViewProduit_clicked(QModelIndex)\0"
    "on_pushButtonProduitModifier_clicked()\0"
    "on_pushButtonProduitAjouter_clicked()\0"
    "on_actionQuitter_triggered()\0"
    "on_actionMagasin_triggered()\0"
    "on_pushButtonMagasinAjouter_clicked()\0"
    "on_pushButtonMagasinModifier_clicked()\0"
    "on_pushButtonMagasinSupprimer_clicked()\0"
    "on_tableViewMagasin_clicked(QModelIndex)\0"
    "rechercheMagasin()\0on_actionRayon_triggered()\0"
    "on_pushButtonRayonAjouter_clicked()\0"
    "on_pushButtonRayonModifier_clicked()\0"
    "on_pushButtonRayonSupprimer_clicked()\0"
    "on_tableViewRayon_clicked(QModelIndex)\0"
    "rechercheRayon()\0on_actionProduit_triggered()\0"
    "rechercheProduit()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonProduitSupprimer_clicked(); break;
        case 1: on_tableViewProduit_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: on_pushButtonProduitModifier_clicked(); break;
        case 3: on_pushButtonProduitAjouter_clicked(); break;
        case 4: on_actionQuitter_triggered(); break;
        case 5: on_actionMagasin_triggered(); break;
        case 6: on_pushButtonMagasinAjouter_clicked(); break;
        case 7: on_pushButtonMagasinModifier_clicked(); break;
        case 8: on_pushButtonMagasinSupprimer_clicked(); break;
        case 9: on_tableViewMagasin_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: rechercheMagasin(); break;
        case 11: on_actionRayon_triggered(); break;
        case 12: on_pushButtonRayonAjouter_clicked(); break;
        case 13: on_pushButtonRayonModifier_clicked(); break;
        case 14: on_pushButtonRayonSupprimer_clicked(); break;
        case 15: on_tableViewRayon_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 16: rechercheRayon(); break;
        case 17: on_actionProduit_triggered(); break;
        case 18: rechercheProduit(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
