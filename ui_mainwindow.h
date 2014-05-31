/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 30 16:43:30 2014
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

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionMagasin;
    QAction *actionRayon;
    QWidget *centralWidget;
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
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionMagasin = new QAction(MainWindow);
        actionMagasin->setObjectName(QString::fromUtf8("actionMagasin"));
        actionRayon = new QAction(MainWindow);
        actionRayon->setObjectName(QString::fromUtf8("actionRayon"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidgetAction = new QTabWidget(centralWidget);
        tabWidgetAction->setObjectName(QString::fromUtf8("tabWidgetAction"));
        tabWidgetAction->setGeometry(QRect(10, 0, 581, 331));
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
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
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

        retranslateUi(MainWindow);

        tabWidgetAction->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionMagasin->setText(QApplication::translate("MainWindow", "Magasin", 0, QApplication::UnicodeUTF8));
        actionRayon->setText(QApplication::translate("MainWindow", "Rayon", 0, QApplication::UnicodeUTF8));
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
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
