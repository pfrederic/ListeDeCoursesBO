#include <QDebug>
#include <QMessageBox>
#include "rayon.h"
#include "ui_rayon.h"

rayon::rayon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rayon)
{
    ui->setupUi(this);
    //Nom de la fenêtre
    setWindowTitle("Rayon");
}

rayon::~rayon()
{
    delete ui;
}

void rayon::changeEvent(QEvent *e)
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

void rayon::on_pushButtonRayonEditer_clicked()
{
    if(!ui->lineEditRayonLibelle->text().isEmpty())
    {
        accept();
    }
    else
    {
        QMessageBox::critical(this,"Erreur","Veuillez saisir toutes les informations", QMessageBox::Ok, QMessageBox::Cancel);
    }
}

void rayon::on_pushButtonRayonAnnuler_clicked()
{
    reject();
}

void rayon::setLineEditRayonLibelle(QString libelleRayon)
{
    ui->lineEditRayonLibelle->setText(libelleRayon);
}

QString rayon::getLineEditRayonLibelle()
{
    return ui->lineEditRayonLibelle->text();
}
