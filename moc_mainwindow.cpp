/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Jun 10 17:16:03 2014
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
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      52,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     195,   11,   11,   11, 0x08,
     233,   11,   11,   11, 0x08,
     262,   11,   11,   11, 0x08,
     291,   11,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,
     368,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,
     438,   11,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     484,   11,   11,   11, 0x08,
     520,   11,   11,   11, 0x08,
     557,   11,   11,   11, 0x08,
     595,   11,   11,   11, 0x08,
     623,   11,   11,   11, 0x08,
     640,   11,   11,   11, 0x08,
     669,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonMagasinOrganiser_clicked()\0"
    "on_tableViewRayon_doubleClicked()\0"
    "on_pushButtonProduitSupprimer_clicked()\0"
    "on_tableViewProduit_clicked()\0"
    "on_pushButtonProduitModifier_clicked()\0"
    "on_pushButtonProduitAjouter_clicked()\0"
    "on_actionQuitter_triggered()\0"
    "on_actionMagasin_triggered()\0"
    "on_pushButtonMagasinAjouter_clicked()\0"
    "on_pushButtonMagasinModifier_clicked()\0"
    "on_pushButtonMagasinSupprimer_clicked()\0"
    "on_tableViewMagasin_clicked()\0"
    "rechercheMagasin()\0on_actionRayon_triggered()\0"
    "on_pushButtonRayonAjouter_clicked()\0"
    "on_pushButtonRayonModifier_clicked()\0"
    "on_pushButtonRayonSupprimer_clicked()\0"
    "on_tableViewRayon_clicked()\0"
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
        case 0: on_pushButtonMagasinOrganiser_clicked(); break;
        case 1: on_tableViewRayon_doubleClicked(); break;
        case 2: on_pushButtonProduitSupprimer_clicked(); break;
        case 3: on_tableViewProduit_clicked(); break;
        case 4: on_pushButtonProduitModifier_clicked(); break;
        case 5: on_pushButtonProduitAjouter_clicked(); break;
        case 6: on_actionQuitter_triggered(); break;
        case 7: on_actionMagasin_triggered(); break;
        case 8: on_pushButtonMagasinAjouter_clicked(); break;
        case 9: on_pushButtonMagasinModifier_clicked(); break;
        case 10: on_pushButtonMagasinSupprimer_clicked(); break;
        case 11: on_tableViewMagasin_clicked(); break;
        case 12: rechercheMagasin(); break;
        case 13: on_actionRayon_triggered(); break;
        case 14: on_pushButtonRayonAjouter_clicked(); break;
        case 15: on_pushButtonRayonModifier_clicked(); break;
        case 16: on_pushButtonRayonSupprimer_clicked(); break;
        case 17: on_tableViewRayon_clicked(); break;
        case 18: rechercheRayon(); break;
        case 19: on_actionProduit_triggered(); break;
        case 20: rechercheProduit(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
