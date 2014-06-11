/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Jun 11 11:05:59 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "comboboxrayon.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionMagasin;
    QAction *actionRayon;
    QAction *actionProduit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidgetAction;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *lineEditSearchMagasinLibelle;
    QTableView *tableViewMagasin;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonMagasinAjouter;
    QPushButton *pushButtonMagasinModifier;
    QPushButton *pushButtonMagasinOrganiser;
    QPushButton *pushButtonMagasinSupprimer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditSearchRayonLibelle;
    QTableView *tableViewRayon;
    QPushButton *pushButtonRayonAjouter;
    QPushButton *pushButtonRayonModifier;
    QPushButton *pushButtonRayonSupprimer;
    QWidget *tab_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEditSearchProduitLibelle;
    QLabel *label_4;
    ComboBoxRayon *comboBoxSearchProduitRayon;
    QTableView *tableViewProduit;
    QPushButton *pushButtonProduitAjouter;
    QPushButton *pushButtonProduitModifier;
    QPushButton *pushButtonProduitSupprimer;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(353, 434);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionMagasin = new QAction(MainWindow);
        actionMagasin->setObjectName(QString::fromUtf8("actionMagasin"));
        actionRayon = new QAction(MainWindow);
        actionRayon->setObjectName(QString::fromUtf8("actionRayon"));
        actionProduit = new QAction(MainWindow);
        actionProduit->setObjectName(QString::fromUtf8("actionProduit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tabWidgetAction = new QTabWidget(centralWidget);
        tabWidgetAction->setObjectName(QString::fromUtf8("tabWidgetAction"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        lineEditSearchMagasinLibelle = new QLineEdit(tab);
        lineEditSearchMagasinLibelle->setObjectName(QString::fromUtf8("lineEditSearchMagasinLibelle"));

        gridLayout_4->addWidget(lineEditSearchMagasinLibelle, 0, 1, 1, 1);

        tableViewMagasin = new QTableView(tab);
        tableViewMagasin->setObjectName(QString::fromUtf8("tableViewMagasin"));
        tableViewMagasin->setAlternatingRowColors(true);
        tableViewMagasin->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewMagasin->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableViewMagasin, 1, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonMagasinAjouter = new QPushButton(tab);
        pushButtonMagasinAjouter->setObjectName(QString::fromUtf8("pushButtonMagasinAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMagasinAjouter->setIcon(icon);

        gridLayout_2->addWidget(pushButtonMagasinAjouter, 0, 0, 1, 1);

        pushButtonMagasinModifier = new QPushButton(tab);
        pushButtonMagasinModifier->setObjectName(QString::fromUtf8("pushButtonMagasinModifier"));
        pushButtonMagasinModifier->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMagasinModifier->setIcon(icon1);

        gridLayout_2->addWidget(pushButtonMagasinModifier, 0, 1, 1, 1);

        pushButtonMagasinOrganiser = new QPushButton(tab);
        pushButtonMagasinOrganiser->setObjectName(QString::fromUtf8("pushButtonMagasinOrganiser"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/organize"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMagasinOrganiser->setIcon(icon2);

        gridLayout_2->addWidget(pushButtonMagasinOrganiser, 1, 0, 1, 1);

        pushButtonMagasinSupprimer = new QPushButton(tab);
        pushButtonMagasinSupprimer->setObjectName(QString::fromUtf8("pushButtonMagasinSupprimer"));
        pushButtonMagasinSupprimer->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/del"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMagasinSupprimer->setIcon(icon3);

        gridLayout_2->addWidget(pushButtonMagasinSupprimer, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 2);

        tabWidgetAction->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        lineEditSearchRayonLibelle = new QLineEdit(tab_2);
        lineEditSearchRayonLibelle->setObjectName(QString::fromUtf8("lineEditSearchRayonLibelle"));

        gridLayout_3->addWidget(lineEditSearchRayonLibelle, 0, 1, 1, 3);

        tableViewRayon = new QTableView(tab_2);
        tableViewRayon->setObjectName(QString::fromUtf8("tableViewRayon"));
        tableViewRayon->setAlternatingRowColors(true);
        tableViewRayon->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewRayon->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(tableViewRayon, 1, 0, 1, 4);

        pushButtonRayonAjouter = new QPushButton(tab_2);
        pushButtonRayonAjouter->setObjectName(QString::fromUtf8("pushButtonRayonAjouter"));
        pushButtonRayonAjouter->setIcon(icon);

        gridLayout_3->addWidget(pushButtonRayonAjouter, 2, 0, 1, 2);

        pushButtonRayonModifier = new QPushButton(tab_2);
        pushButtonRayonModifier->setObjectName(QString::fromUtf8("pushButtonRayonModifier"));
        pushButtonRayonModifier->setIcon(icon1);

        gridLayout_3->addWidget(pushButtonRayonModifier, 2, 2, 1, 1);

        pushButtonRayonSupprimer = new QPushButton(tab_2);
        pushButtonRayonSupprimer->setObjectName(QString::fromUtf8("pushButtonRayonSupprimer"));
        pushButtonRayonSupprimer->setIcon(icon3);

        gridLayout_3->addWidget(pushButtonRayonSupprimer, 2, 3, 1, 1);

        tabWidgetAction->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout = new QGridLayout(tab_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEditSearchProduitLibelle = new QLineEdit(tab_3);
        lineEditSearchProduitLibelle->setObjectName(QString::fromUtf8("lineEditSearchProduitLibelle"));

        gridLayout->addWidget(lineEditSearchProduitLibelle, 0, 1, 1, 3);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        comboBoxSearchProduitRayon = new ComboBoxRayon(tab_3);
        comboBoxSearchProduitRayon->setObjectName(QString::fromUtf8("comboBoxSearchProduitRayon"));

        gridLayout->addWidget(comboBoxSearchProduitRayon, 1, 1, 1, 3);

        tableViewProduit = new QTableView(tab_3);
        tableViewProduit->setObjectName(QString::fromUtf8("tableViewProduit"));
        tableViewProduit->setAlternatingRowColors(true);
        tableViewProduit->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewProduit->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableViewProduit, 2, 0, 1, 4);

        pushButtonProduitAjouter = new QPushButton(tab_3);
        pushButtonProduitAjouter->setObjectName(QString::fromUtf8("pushButtonProduitAjouter"));
        pushButtonProduitAjouter->setIcon(icon);

        gridLayout->addWidget(pushButtonProduitAjouter, 3, 0, 1, 2);

        pushButtonProduitModifier = new QPushButton(tab_3);
        pushButtonProduitModifier->setObjectName(QString::fromUtf8("pushButtonProduitModifier"));
        pushButtonProduitModifier->setIcon(icon1);

        gridLayout->addWidget(pushButtonProduitModifier, 3, 2, 1, 1);

        pushButtonProduitSupprimer = new QPushButton(tab_3);
        pushButtonProduitSupprimer->setObjectName(QString::fromUtf8("pushButtonProduitSupprimer"));
        pushButtonProduitSupprimer->setIcon(icon3);

        gridLayout->addWidget(pushButtonProduitSupprimer, 3, 3, 1, 1);

        tabWidgetAction->addTab(tab_3, QString());

        gridLayout_5->addWidget(tabWidgetAction, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 353, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuFichier->addAction(actionQuitter);
        menuEdition->addAction(actionMagasin);
        menuEdition->addAction(actionRayon);
        menuEdition->addAction(actionProduit);

        retranslateUi(MainWindow);

        tabWidgetAction->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionMagasin->setText(QApplication::translate("MainWindow", "Magasin", 0, QApplication::UnicodeUTF8));
        actionRayon->setText(QApplication::translate("MainWindow", "Rayon", 0, QApplication::UnicodeUTF8));
        actionProduit->setText(QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Libelle :", 0, QApplication::UnicodeUTF8));
        pushButtonMagasinAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonMagasinModifier->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonMagasinOrganiser->setText(QApplication::translate("MainWindow", "Organiser", 0, QApplication::UnicodeUTF8));
        pushButtonMagasinSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab), QApplication::translate("MainWindow", "Magasin", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Libelle :", 0, QApplication::UnicodeUTF8));
        pushButtonRayonAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonRayonModifier->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonRayonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_2), QApplication::translate("MainWindow", "Rayon", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Libelle :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Rayon :", 0, QApplication::UnicodeUTF8));
        pushButtonProduitAjouter->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonProduitModifier->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonProduitSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetAction->setTabText(tabWidgetAction->indexOf(tab_3), QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
