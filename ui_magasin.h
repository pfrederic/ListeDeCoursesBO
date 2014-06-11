/********************************************************************************
** Form generated from reading UI file 'magasin.ui'
**
** Created: Tue Jun 10 16:22:53 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGASIN_H
#define UI_MAGASIN_H

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

class Ui_magasin
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditMagasinLibelle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonMagasinAnnuler;
    QPushButton *pushButtonMagasinEditer;

    void setupUi(QDialog *magasin)
    {
        if (magasin->objectName().isEmpty())
            magasin->setObjectName(QString::fromUtf8("magasin"));
        magasin->resize(344, 120);
        layoutWidget = new QWidget(magasin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 321, 69));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        lineEditMagasinLibelle = new QLineEdit(layoutWidget);
        lineEditMagasinLibelle->setObjectName(QString::fromUtf8("lineEditMagasinLibelle"));

        gridLayout->addWidget(lineEditMagasinLibelle, 0, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButtonMagasinAnnuler = new QPushButton(layoutWidget);
        pushButtonMagasinAnnuler->setObjectName(QString::fromUtf8("pushButtonMagasinAnnuler"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/exit"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMagasinAnnuler->setIcon(icon);

        gridLayout->addWidget(pushButtonMagasinAnnuler, 1, 1, 1, 2);

        pushButtonMagasinEditer = new QPushButton(layoutWidget);
        pushButtonMagasinEditer->setObjectName(QString::fromUtf8("pushButtonMagasinEditer"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/save"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMagasinEditer->setIcon(icon1);

        gridLayout->addWidget(pushButtonMagasinEditer, 1, 3, 1, 1);


        retranslateUi(magasin);

        QMetaObject::connectSlotsByName(magasin);
    } // setupUi

    void retranslateUi(QDialog *magasin)
    {
        magasin->setWindowTitle(QApplication::translate("magasin", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("magasin", "Libelle du magasin :", 0, QApplication::UnicodeUTF8));
        pushButtonMagasinAnnuler->setText(QApplication::translate("magasin", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButtonMagasinEditer->setText(QApplication::translate("magasin", "Editer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class magasin: public Ui_magasin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGASIN_H
