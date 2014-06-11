#include <QMessageBox>
#include <QDebug>
#include "magasin.h"
#include "ui_magasin.h"

magasin::magasin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::magasin)
{
    ui->setupUi(this);
    //Nom de la fenêtre
    setWindowTitle("Magasin");
    ui->pushButtonMagasinEditer->setEnabled(false);
}

magasin::~magasin()
{
    delete ui;
}

void magasin::changeEvent(QEvent *e)
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

void magasin::on_pushButtonMagasinEditer_clicked()
{
    accept();
}

void magasin::on_pushButtonMagasinAnnuler_clicked()
{
    reject();
}

void magasin::setLineEditMagasinLibelle(QString libelleMagasin)
{
    ui->lineEditMagasinLibelle->setText(libelleMagasin);
}

QString magasin::getLineEditMagasinLibelle()
{
    return ui->lineEditMagasinLibelle->text();
}

void magasin::on_lineEditMagasinLibelle_textChanged(QString )
{
    qDebug()<<"magasin::on_lineEditMagasinLibelle_textChanged(QString )";
    ui->pushButtonMagasinEditer->setEnabled(saisiOk());
}

bool magasin::saisiOk()
{
    qDebug()<<"magasin::saisiOk()";
    return(ui->lineEditMagasinLibelle->text().length()>0);
}
