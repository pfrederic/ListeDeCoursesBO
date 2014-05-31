/********************************************************************************
** Form generated from reading UI file 'rayon.ui'
**
** Created: Fri May 30 16:36:11 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAYON_H
#define UI_RAYON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rayon
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditRayonLibelle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRayonAnnuler;
    QPushButton *pushButtonRayonEditer;

    void setupUi(QDialog *rayon)
    {
        if (rayon->objectName().isEmpty())
            rayon->setObjectName(QString::fromUtf8("rayon"));
        rayon->resize(317, 121);
        widget = new QWidget(rayon);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 286, 62));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEditRayonLibelle = new QLineEdit(widget);
        lineEditRayonLibelle->setObjectName(QString::fromUtf8("lineEditRayonLibelle"));

        gridLayout->addWidget(lineEditRayonLibelle, 0, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonRayonAnnuler = new QPushButton(widget);
        pushButtonRayonAnnuler->setObjectName(QString::fromUtf8("pushButtonRayonAnnuler"));

        gridLayout->addWidget(pushButtonRayonAnnuler, 1, 1, 1, 2);

        pushButtonRayonEditer = new QPushButton(widget);
        pushButtonRayonEditer->setObjectName(QString::fromUtf8("pushButtonRayonEditer"));

        gridLayout->addWidget(pushButtonRayonEditer, 1, 3, 1, 1);


        retranslateUi(rayon);

        QMetaObject::connectSlotsByName(rayon);
    } // setupUi

    void retranslateUi(QDialog *rayon)
    {
        rayon->setWindowTitle(QApplication::translate("rayon", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("rayon", "Libelle du rayon :", 0, QApplication::UnicodeUTF8));
        pushButtonRayonAnnuler->setText(QApplication::translate("rayon", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButtonRayonEditer->setText(QApplication::translate("rayon", "Editer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rayon: public Ui_rayon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAYON_H
