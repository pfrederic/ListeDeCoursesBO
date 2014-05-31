/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Thu May 29 22:12:54 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditIdentifiant;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditMdp;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonConnecter;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(510, 164);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 11, 391, 122));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("FreeSans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 4);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);

        lineEditIdentifiant = new QLineEdit(layoutWidget);
        lineEditIdentifiant->setObjectName(QString::fromUtf8("lineEditIdentifiant"));

        gridLayout->addWidget(lineEditIdentifiant, 1, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        lineEditMdp = new QLineEdit(layoutWidget);
        lineEditMdp->setObjectName(QString::fromUtf8("lineEditMdp"));
        lineEditMdp->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditMdp, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setAutoDefault(false);

        gridLayout->addWidget(pushButtonQuitter, 3, 1, 1, 2);

        pushButtonConnecter = new QPushButton(layoutWidget);
        pushButtonConnecter->setObjectName(QString::fromUtf8("pushButtonConnecter"));
        pushButtonConnecter->setEnabled(false);

        gridLayout->addWidget(pushButtonConnecter, 3, 3, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("login", "Saisissez votre identifiant et votre mot de passe", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login", "Identifiant :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        pushButtonQuitter->setText(QApplication::translate("login", "Quitter", 0, QApplication::UnicodeUTF8));
        pushButtonConnecter->setText(QApplication::translate("login", "Se connecter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
