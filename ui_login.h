/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Tue Jun 10 15:52:36 2014
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
#include <QtGui/QHBoxLayout>
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
    QLabel *label_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditIdentifiant;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditMdp;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonConnecter;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(581, 147);
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 10, 141, 131));
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/logo")));
        label_4->setScaledContents(true);
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 411, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("FreeSans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 4);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);

        lineEditIdentifiant = new QLineEdit(widget);
        lineEditIdentifiant->setObjectName(QString::fromUtf8("lineEditIdentifiant"));
        lineEditIdentifiant->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(lineEditIdentifiant, 1, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 2);

        lineEditMdp = new QLineEdit(widget);
        lineEditMdp->setObjectName(QString::fromUtf8("lineEditMdp"));
        lineEditMdp->setMinimumSize(QSize(0, 0));
        lineEditMdp->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditMdp, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(128, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/exit"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonQuitter->setIcon(icon);
        pushButtonQuitter->setAutoDefault(false);

        horizontalLayout->addWidget(pushButtonQuitter);

        pushButtonConnecter = new QPushButton(widget);
        pushButtonConnecter->setObjectName(QString::fromUtf8("pushButtonConnecter"));
        pushButtonConnecter->setEnabled(false);
        pushButtonConnecter->setMinimumSize(QSize(0, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/valid"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonConnecter->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonConnecter);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 2);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
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
