#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    qDebug()<<"login::login(QWidget *parent)";
    ui->setupUi(this);
    //Nom de la fenêtre
    setWindowTitle("Authentification");
    //Ajout favicon
    setWindowIcon(QIcon(":/logo"));
    ui->lineEditIdentifiant->setText("technicien");
    ui->lineEditMdp->setText("ini01");
}

login::~login()
{
    delete ui;
}

void login::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void login::on_pushButtonQuitter_clicked()
{
    qDebug()<<"login::on_pushButtonQuitter_clicked()";
    reject();
}

void login::on_pushButtonConnecter_clicked()
{
    qDebug()<<"login::on_pushButtonConnecter_clicked()";
    QString requeteAuthentification="SELECT COUNT(*) FROM utilisateur where userLogin='"+ui->lineEditIdentifiant->text()+"' AND userMdp=PASSWORD('"+ui->lineEditMdp->text()+"');";
    qDebug()<<requeteAuthentification;
    QSqlQuery resultatAuthentification;
    resultatAuthentification.exec(requeteAuthentification);
    resultatAuthentification.first();
    if(resultatAuthentification.value(0).toInt()==1)
    {
        accept();
    }
    else
    {
        QMessageBox::critical(this,"Erreur de connexion","Identifiant ou mot de passe incorrect",QMessageBox::Ok,QMessageBox::Cancel);
    }
}

bool login::saisieOkLogin()
{
    qDebug()<<"login::saisieOkLogin()";
    return(ui->lineEditIdentifiant->text().length()*ui->lineEditMdp->text().length()>0);
}


void login::on_lineEditIdentifiant_textChanged(QString )
{
    qDebug()<<"login::on_lineEditIdentifiant_textChanged(QString )";
    ui->pushButtonConnecter->setEnabled(this->saisieOkLogin());
}

void login::on_lineEditMdp_textChanged(QString )
{
    qDebug()<<"login::on_lineEditMdp_textChanged(QString )";
    ui->pushButtonConnecter->setEnabled(this->saisieOkLogin());
}
