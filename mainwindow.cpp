#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlQuery>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "magasin.h"
#include "rayon.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug()<<"MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)";
    ui->setupUi(this);

    //Ajout d'un titre de fenêtre
    setWindowTitle("New World - Back Office");
    //Ajout favicon
    setWindowIcon(QIcon(":/logo"));

    //Connexion à la base
    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName("localhost");
    this->db.setDatabaseName("dbListeCoursesOrig");
    this->db.setUserName("technicien");
    this->db.setPassword("ini01");
    bool ok=this->db.open();
    if(!ok)
    {
        QMessageBox::critical(this,"Echec de connexion à la base de de données","La connexion à la base a échoué, contacter votre administrateur pour la résolution des problèmes.",QMessageBox::Ok,QMessageBox::Ok);
    }
    else
    {
        on_actionRayon_triggered();
        on_actionMagasin_triggered();        
        connectionObjet();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    qDebug()<<"MainWindow::on_actionQuitter_triggered()";
    this->close();
}

void MainWindow::connectionObjet()
{
    qDebug()<<"MainWindow::connectionObjet()";
    connect(ui->lineEditSearchMagasinLibelle, SIGNAL(textChanged(QString)), this, SLOT(rechercheMagasin()));
    connect(ui->lineEditSearchRayonLibelle, SIGNAL(textChanged(QString)), this, SLOT(rechercheRayon()));
}

void MainWindow::on_actionMagasin_triggered()
{
    qDebug()<<"MainWindow::on_actionMagasin_triggered()";
    //On affiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(0);

    ui->pushButtonMagasinModifier->setEnabled(false);
    ui->pushButtonMagasinSupprimer->setEnabled(false);

    tableModelMagasin=new QSqlTableModel(this);
    queryModelMagasin=new QSqlQueryModel();

    ui->tableViewMagasin->setModel(this->tableModelMagasin);
    tableModelMagasin->setTable("magasin");
    tableModelMagasin->setEditStrategy(QSqlTableModel::OnRowChange);
    tableModelMagasin->select();

    QString requeteMagasin="SELECT magasinId, magasinLib FROM magasin";
    qDebug()<<requeteMagasin;
    queryModelMagasin->setQuery(requeteMagasin);

    queryModelMagasin->setHeaderData(0,Qt::Horizontal,"Id");
    queryModelMagasin->setHeaderData(1,Qt::Horizontal,"Libelle");
    //On associe le modele à sa vue
    ui->tableViewMagasin->setModel(queryModelMagasin);
    //Vue...montre-toi...
    ui->tableViewMagasin->show();
    //Adapter les largeurs des colonnes
    ui->tableViewMagasin->resizeColumnsToContents();
}

void MainWindow::rechercheMagasin()
{
    qDebug()<<"MainWindow::rechercheMagasin()";
    QString where="";
    QString chaineDeFiltre="";
    QStringList listeRestriction;

    if(ui->lineEditSearchMagasinLibelle->text()!="")
    {
        listeRestriction.append(" magasinLib like '%"+ui->lineEditSearchMagasinLibelle->text()+"%'");
    }

    if(listeRestriction.count()>0)
    {
        where=" WHERE"+listeRestriction.join(" AND");
        chaineDeFiltre=listeRestriction.join(" AND");
    }

    QString textRequeteMagasin="SELECT magasinId, magasinLib FROM magasin"+where+";";
    qDebug()<<textRequeteMagasin;
    ui->tableViewMagasin->setModel(this->queryModelMagasin);
    queryModelMagasin->setQuery(textRequeteMagasin);
    tableModelMagasin->setFilter(chaineDeFiltre);
}


void MainWindow::on_pushButtonMagasinAjouter_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMagasinAjouter_clicked()";

    magasin * fenetreEditionMagasin=new magasin(this);
    if(fenetreEditionMagasin->exec()==QDialog::Accepted)
    {
       QSqlRecord nouveauMagasin=tableModelMagasin->record();
       nouveauMagasin.setValue("magasinId", getNewMagasinId());
       nouveauMagasin.setValue("magasinLib",fenetreEditionMagasin->getLineEditMagasinLibelle());
       if(tableModelMagasin->insertRecord(-1, nouveauMagasin))
       {
           ui->statusBar->showMessage("Magasin ajouté avec succés",3000);
           this->on_actionMagasin_triggered();
       }
       else
       {
           ui->statusBar->showMessage(db.lastError().databaseText(),3000);
       }
    }
    else
    {
        fenetreEditionMagasin->close();
    }
}

QString MainWindow::getNewMagasinId()
{
    qDebug()<<"MainWindow::getNewMagasinId()";

    QSqlQuery requeteNouvelIdentifiant;
    requeteNouvelIdentifiant.exec("SELECT ifnull(max(magasinId),0)+1 nouvelIdentifiant FROM magasin;");
    requeteNouvelIdentifiant.first();
    qDebug()<<requeteNouvelIdentifiant.value(0).toString();
    return requeteNouvelIdentifiant.value(0).toString();

}

void MainWindow::on_pushButtonMagasinModifier_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMagasinModifier_clicked()";
    magasin * fenetreEditionMagasin=new magasin(this);
    fenetreEditionMagasin->setLineEditMagasinLibelle(tableModelMagasin->data(tableModelMagasin->sibling(ui->tableViewMagasin->currentIndex().row(),tableModelMagasin->fieldIndex("magasinLib"),ui->tableViewMagasin->selectionModel()->currentIndex())).toString());
    if(fenetreEditionMagasin->exec()==QDialog::Accepted)
    {
        QSqlRecord modificationMagasin=tableModelMagasin->record();
        modificationMagasin.setValue("magasinLib", fenetreEditionMagasin->getLineEditMagasinLibelle());
        if(tableModelMagasin->setRecord(ui->tableViewMagasin->currentIndex().row(), modificationMagasin))
        {
            tableModelMagasin->submitAll();
            ui->statusBar->showMessage("Magasin modifié avec succés",3000);
            this->on_actionMagasin_triggered();
        }
        else
        {
            //qDebug()<<this->db.lastError();
        }
    }
    else
    {
        fenetreEditionMagasin->close();
    }
}

void MainWindow::on_tableViewMagasin_clicked(QModelIndex index)
{
    qDebug()<<"MainWindow::on_tableViewMagasin_clicked(QModelIndex index)";
    ui->pushButtonMagasinModifier->setEnabled(true);
    ui->pushButtonMagasinSupprimer->setEnabled(true);
}

void MainWindow::on_pushButtonMagasinSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMagasinSupprimer_clicked()";
    this->tableModelMagasin->removeRow(ui->tableViewMagasin->selectionModel()->currentIndex().row());
    this->on_actionMagasin_triggered();
}

void MainWindow::on_actionRayon_triggered()
{
    qDebug()<<"MainWindow::on_actionRayon_triggered()";

    //On affiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(1);

    ui->pushButtonRayonModifier->setEnabled(false);
    ui->pushButtonRayonSupprimer->setEnabled(false);

    tableModelRayon=new QSqlTableModel(this);
    queryModelRayon=new QSqlQueryModel();

    ui->tableViewRayon->setModel(this->tableModelRayon);
    tableModelRayon->setTable("rayon");
    tableModelRayon->setEditStrategy(QSqlTableModel::OnRowChange);
    tableModelRayon->select();

    QString requeteRayon="SELECT rayonId, rayonLib FROM rayon";
    qDebug()<<requeteRayon;
    queryModelRayon->setQuery(requeteRayon);

    queryModelRayon->setHeaderData(0,Qt::Horizontal,"Id");
    queryModelRayon->setHeaderData(1,Qt::Horizontal,"Libelle");
    //On associe le modele à sa vue
    ui->tableViewRayon->setModel(queryModelRayon);
    //Vue...montre-toi...
    ui->tableViewRayon->show();
    //Adapter les largeurs des colonnes
    ui->tableViewRayon->resizeColumnsToContents();

}

void MainWindow::rechercheRayon()
{
    qDebug()<<"MainWindow::rechercheRayon()";
    QString where="";
    QString chaineDeFiltre="";
    QStringList listeRestriction;

    if(ui->lineEditSearchRayonLibelle->text()!="")
    {
        listeRestriction.append(" rayonLib like '%"+ui->lineEditSearchRayonLibelle->text()+"%'");
    }

    if(listeRestriction.count()>0)
    {
        where=" WHERE"+listeRestriction.join(" AND");
        chaineDeFiltre=listeRestriction.join(" AND");
    }

    QString textRequeteRayon="SELECT rayonId, rayonLib FROM rayon"+where+";";
    qDebug()<<textRequeteRayon;
    ui->tableViewRayon->setModel(this->queryModelRayon);
    queryModelRayon->setQuery(textRequeteRayon);
    tableModelRayon->setFilter(chaineDeFiltre);
}

void MainWindow::on_pushButtonRayonAjouter_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonRayonAjouter_clicked()";

    rayon * fenetreEditionRayon=new rayon(this);
    if(fenetreEditionRayon->exec()==QDialog::Accepted)
    {
       QSqlRecord nouveauRayon=tableModelRayon->record();
       nouveauRayon.setValue("rayonId", getNewRayonId());
       nouveauRayon.setValue("rayonLib",fenetreEditionRayon->getLineEditRayonLibelle());
       if(tableModelRayon->insertRecord(-1, nouveauRayon))
       {
           ui->statusBar->showMessage("Rayon ajouté avec succés",3000);
           this->on_actionRayon_triggered();
       }
       else
       {
           ui->statusBar->showMessage(db.lastError().databaseText(),3000);
       }
    }
    else
    {
        fenetreEditionRayon->close();
    }
}

QString MainWindow::getNewRayonId()
{
    qDebug()<<"MainWindow::getNewRayonId()";

    QSqlQuery requeteNouvelIdentifiant;
    requeteNouvelIdentifiant.exec("SELECT ifnull(max(rayonId),0)+1 nouvelIdentifiant FROM rayon;");
    requeteNouvelIdentifiant.first();
    qDebug()<<requeteNouvelIdentifiant.value(0).toString();
    return requeteNouvelIdentifiant.value(0).toString();
}

void MainWindow::on_tableViewRayon_clicked(QModelIndex index)
{
    qDebug()<<"MainWindow::on_tableViewRayon_clicked(QModelIndex index)";
    ui->pushButtonRayonModifier->setEnabled(true);
    ui->pushButtonRayonSupprimer->setEnabled(true);
}

void MainWindow::on_pushButtonRayonModifier_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonRayonModifier_clicked()";
    rayon * fenetreEditionRayon=new rayon(this);
    fenetreEditionRayon->setLineEditRayonLibelle(tableModelRayon->data(tableModelRayon->sibling(ui->tableViewRayon->currentIndex().row(),tableModelRayon->fieldIndex("rayonLib"),ui->tableViewRayon->selectionModel()->currentIndex())).toString());
    if(fenetreEditionRayon->exec()==QDialog::Accepted)
    {
        QSqlRecord modificationRayon=tableModelRayon->record();
        modificationRayon.setValue("rayonLib", fenetreEditionRayon->getLineEditRayonLibelle());
        if(tableModelRayon->setRecord(ui->tableViewRayon->currentIndex().row(), modificationRayon))
        {
            tableModelRayon->submitAll();
            ui->statusBar->showMessage("Rayon modifié avec succés",3000);
            this->on_actionRayon_triggered();
        }
        else
        {
            //qDebug()<<this->db.lastError();
        }
    }
    else
    {
        fenetreEditionRayon->close();
    }
}

void MainWindow::on_pushButtonRayonSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonRayonSupprimer_clicked()";
    this->tableModelRayon->removeRow(ui->tableViewRayon->selectionModel()->currentIndex().row());
    this->on_actionRayon_triggered();
}
