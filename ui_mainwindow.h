/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jun 2 17:39:05 2014
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
    QGridLayout *gridLayout;
    QTabWidget *tabWidgetAction;
    QWidget *tab;
    QLabel *label;
    QLineEdit *lineEditSearchMagasinLibelle;
    QTableView *tableViewMagasin;
    QPushButton *pushButtonMagasinAjouter;
    QPushButton *pushButtonMagasinModifier;
    QPushButton *pushButtonMagasinSupprimer;
    QWidget *tab_2;
    QLineEdit *lineEditSearchRayonLibelle;
    QLabel *label_2;
    QTableView *tableViewRayon;
    QPushButton *pushButtonRayonAjouter;
    QPushButton *pushButtonRayonModifier;
    QPushButton *pushButtonRayonSupprimer;
    QWidget *tab_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditSearchProduitLibelle;
    QPushButton *pushButtonProduitAjouter;
    QPushButton *pushButtonProduitModifier;
    QPushButton *pushButtonProduitSupprimer;
    QTableView *tableViewProduit;
    ComboBoxRayon *comboBoxSearchProduitRayon;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(637, 434);
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
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidgetAction = new QTabWidget(centralWidget);
        tabWidgetAction->setObjectName(QString::fromUtf8("tabWidgetAction"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 59, 17));
        lineEditSearchMagasinLibelle = new QLineEdit(tab);
        lineEditSearchMagasinLibelle->setObjectName(QString::fromUtf8("lineEditSearchMagasinLibelle"));
        lineEditSearchMagasinLibelle->setGeometry(QRect(70, 10, 113, 27));
        tableViewMagasin = new QTableView(tab);
        tableViewMagasin->setObjectName(QString::fromUtf8("tableViewMagasin"));
        tableViewMagasin->setGeometry(QRect(10, 40, 256, 192));
        tableViewMagasin->setAlternatingRowColors(true);
        tableViewMagasin->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonMagasinAjouter = new QPushButton(tab);
        pushButtonMagasinAjouter->setObjectName(QString::fromUtf8("pushButtonMagasinAjouter"));
        pushButtonMagasinAjouter->setGeometry(QRect(10, 240, 92, 27));
        pushButtonMagasinModifier = new QPushButton(tab);
        pushButtonMagasinModifier->setObjectName(QString::fromUtf8("pushButtonMagasinModifier"));
        pushButtonMagasinModifier->setEnabled(true);
        pushButtonMagasinModifier->setGeometry(QRect(110, 240, 92, 27));
        pushButtonMagasinSupprimer = new QPushButton(tab);
        pushButtonMagasinSupprimer->setObjectName(QString::fromUtf8("pushButtonMagasinSupprimer"));
        pushButtonMagasinSupprimer->setEnabled(true);
        pushButtonMagasinSupprimer->setGeometry(QRect(210, 240, 92, 27));
        tabWidgetAction->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lineEditSearchRayonLibelle = new QLineEdit(tab_2);
        lineEditSearchRayonLibelle->setObjectName(QString::fromUtf8("lineEditSearchRayonLibelle"));
        lineEditSearchRayonLibelle->setGeometry(QRect(110, 10, 113, 27));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 59, 17));
        tableViewRayon = new QTableView(tab_2);
        tableViewRayon->setObjectName(QString::fromUtf8("tableViewRayon"));
        tableViewRayon->setGeometry(QRect(20, 50, 256, 192));
        tableViewRayon->setAlternatingRowColors(true);
        tableViewRayon->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonRayonAjouter = new QPushButton(tab_2);
        pushButtonRayonAjouter->setObjectName(QString::fromUtf8("pushButtonRayonAjouter"));
        pushButtonRayonAjouter->setGeometry(QRect(10, 250, 92, 27));
        pushButtonRayonModifier = new QPushButton(tab_2);
        pushButtonRayonModifier->setObjectName(QString::fromUtf8("pushButtonRayonModifier"));
        pushButtonRayonModifier->setGeometry(QRect(110, 250, 92, 27));
        pushButtonRayonSupprimer = new QPushButton(tab_2);
        pushButtonRayonSupprimer->setObjectName(QString::fromUtf8("pushButtonRayonSupprimer"));
        pushButtonRayonSupprimer->setGeometry(QRect(210, 250, 92, 27));
        tabWidgetAction->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 59, 17));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 20, 59, 17));
        lineEditSearchProduitLibelle = new QLineEdit(tab_3);
        lineEditSearchProduitLibelle->setObjectName(QString::fromUtf8("lineEditSearchProduitLibelle"));
        lineEditSearchProduitLibelle->setGeometry(QRect(100, 10, 113, 27));
        pushButtonProduitAjouter = new QPushButton(tab_3);
        pushButtonProduitAjouter->setObjectName(QString::fromUtf8("pushButtonProduitAjouter"));
        pushButtonProduitAjouter->setGeometry(QRect(10, 260, 92, 27));
        pushButtonProduitModifier = new QPushButton(tab_3);
        pushButtonProduitModifier->setObjectName(QString::fromUtf8("pushButtonProduitModifier"));
        pushButtonProduitModifier->setGeometry(QRect(110, 260, 92, 27));
        pushButtonProduitSupprimer = new QPushButton(tab_3);
        pushButtonProduitSupprimer->setObjectName(QString::fromUtf8("pushButtonProduitSupprimer"));
        pushButtonProduitSupprimer->setGeometry(QRect(210, 260, 92, 27));
        tableViewProduit = new QTableView(tab_3);
        tableViewProduit->setObjectName(QString::fromUtf8("tableViewProduit"));
        tableViewProduit->setGeometry(QRect(20, 50, 256, 192));
        tableViewProduit->setAlternatingRowColors(true);
        tableViewProduit->setSelectionBehavior(QAbstractItemView::SelectRows);
        comboBoxSearchProduitRayon = new ComboBoxRayon(tab_3);
        comboBoxSearchProduitRayon->setObjectName(QString::fromUtf8("comboBoxSearchProduitRayon"));
        comboBoxSearchProduitRayon->setGeometry(QRect(310, 20, 181, 27));
        tabWidgetAction->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidgetAction, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 637, 25));
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
