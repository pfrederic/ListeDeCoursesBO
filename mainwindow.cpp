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
#include "produit.h"
#include "organiser.h"

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
    db = QSqlDatabase::addDatabase("QMYSQL");;
    //db.setHostName("172.16.63.142");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("dbListeCoursesOrig");
    db.setUserName("technicien");
    db.setPassword("ini01");
    bool ok=db.open();
    if(!ok)
    {
        QMessageBox::critical(this,"Erreur de connexion","Problème avec la connexion à la base de données",QMessageBox::Ok);
    }
    else
    {
        connectionObjet();
        on_actionRayon_triggered();
        on_actionProduit_triggered();
        on_actionMagasin_triggered();
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
    connect(ui->lineEditSearchProduitLibelle, SIGNAL(textChanged(QString)), this, SLOT(rechercheProduit()));
    connect(ui->comboBoxSearchProduitRayon, SIGNAL(currentIndexChanged(QString)), this, SLOT(rechercheProduit()));
}

void MainWindow::on_actionMagasin_triggered()
{
    qDebug()<<"MainWindow::on_actionMagasin_triggered()";
    //On affiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(0);

    ui->pushButtonMagasinModifier->setEnabled(false);
    ui->pushButtonMagasinSupprimer->setEnabled(false);
    ui->pushButtonMagasinOrganiser->setEnabled(false);

    tableModelMagasin=new QSqlTableModel(this);
    queryModelMagasin=new QSqlQueryModel();

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
    ui->tableViewMagasin->setModel(queryModelMagasin);
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
            on_actionMagasin_triggered();
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
             on_actionMagasin_triggered();
        }
        else
        {
            //qDebug()<< db.lastError();
        }
    }
    else
    {
        fenetreEditionMagasin->close();
    }
}

void MainWindow::on_tableViewMagasin_clicked()
{
    qDebug()<<"MainWindow::on_tableViewMagasin_clicked()";
    ui->pushButtonMagasinModifier->setEnabled(true);
    ui->pushButtonMagasinSupprimer->setEnabled(true);
    ui->pushButtonMagasinOrganiser->setEnabled(true);
}

void MainWindow::on_pushButtonMagasinSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonMagasinSupprimer_clicked()";
    QString requeteSuppressionMagasinOrganisation="DELETE FROM organisation WHERE magasinId="+tableModelMagasin->data(tableModelMagasin->sibling(ui->tableViewMagasin->currentIndex().row(),tableModelMagasin->fieldIndex("magasinId"),ui->tableViewMagasin->selectionModel()->currentIndex())).toString();
    QSqlQuery resultatSuppressionMagasinOrganisation(requeteSuppressionMagasinOrganisation);
    resultatSuppressionMagasinOrganisation.exec();
     tableModelMagasin->removeRow(ui->tableViewMagasin->selectionModel()->currentIndex().row());
     on_actionMagasin_triggered();
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
    ui->tableViewRayon->setModel( queryModelRayon);
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
            on_actionRayon_triggered();
           ui->comboBoxSearchProduitRayon->disconnect();
           ui->comboBoxSearchProduitRayon->chargeCombobox();
           connect(ui->comboBoxSearchProduitRayon, SIGNAL(currentIndexChanged(QString)), this, SLOT(rechercheProduit()));
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

void MainWindow::on_tableViewRayon_clicked()
{
    qDebug()<<"MainWindow::on_tableViewRayon_clicked()";
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
             on_actionRayon_triggered();
            ui->comboBoxSearchProduitRayon->disconnect();
            ui->comboBoxSearchProduitRayon->chargeCombobox();
            connect(ui->comboBoxSearchProduitRayon, SIGNAL(currentIndexChanged(QString)), this, SLOT(rechercheProduit()));
        }
        else
        {
            //qDebug()<<db.lastError();
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
    if(tableModelRayon->removeRow(ui->tableViewRayon->selectionModel()->currentIndex().row()))
    {
        on_actionRayon_triggered();
        ui->comboBoxSearchProduitRayon->disconnect();
        ui->comboBoxSearchProduitRayon->chargeCombobox();
        connect(ui->comboBoxSearchProduitRayon, SIGNAL(currentIndexChanged(QString)), this, SLOT(rechercheProduit()));
    }
    else
    {
        QMessageBox::critical(this,"Erreur","Ce rayon contient des produits. Il ne peut être supprimé.",QMessageBox::Ok);
    }
}

void MainWindow::on_actionProduit_triggered()
{
    qDebug()<<"MainWindow::on_actionProduit_triggered()";

    //On affiche l'onglet correspondant
    ui->tabWidgetAction->setCurrentIndex(2);

    ui->pushButtonProduitModifier->setEnabled(false);
    ui->pushButtonProduitSupprimer->setEnabled(false);

    tableModelProduit=new QSqlTableModel(this);
    queryModelProduit=new QSqlQueryModel();

    tableModelProduit->setTable("produit");
    tableModelProduit->setEditStrategy(QSqlTableModel::OnRowChange);
    tableModelProduit->select();

    QString requeteProduit="SELECT produitId, produitLib, rayonId FROM produit";
    qDebug()<<requeteProduit;
    queryModelProduit->setQuery(requeteProduit);

    queryModelProduit->setHeaderData(0,Qt::Horizontal,"Id");
    queryModelProduit->setHeaderData(1,Qt::Horizontal,"Libelle");
    queryModelProduit->setHeaderData(2, Qt::Horizontal, "Rayon");

    //On associe le modele à sa vue
    ui->tableViewProduit->setModel(queryModelProduit);
    ui->tableViewProduit->hideColumn(2);
    //Vue...montre-toi...
    ui->tableViewProduit->show();
    //Adapter les largeurs des colonnes
    ui->tableViewProduit->resizeColumnsToContents();
}

void MainWindow::rechercheProduit()
{
    qDebug()<<"MainWindow::rechercheProduit()";

    QString where="";
    QString chaineDeFiltre="";
    QStringList listeRestriction;

    if(ui->lineEditSearchProduitLibelle->text()!="")
    {
        listeRestriction.append(" produitLib like '%"+ui->lineEditSearchProduitLibelle->text()+"%'");
    }
    if(ui->comboBoxSearchProduitRayon->currentIndex()!=0)
    {
        listeRestriction.append(" rayonId = "+QString::number(ui->comboBoxSearchProduitRayon->getIndexIdRayon()));
    }

    if(listeRestriction.count()>0)
    {
        where=" WHERE"+listeRestriction.join(" AND");
        chaineDeFiltre=listeRestriction.join(" AND");
    }

    QString textRequeteProduit="SELECT produitId, produitLib FROM produit"+where+";";
    qDebug()<<textRequeteProduit;
    ui->tableViewProduit->setModel( queryModelProduit);
    queryModelProduit->setQuery(textRequeteProduit);
    tableModelProduit->setFilter(chaineDeFiltre);
}

void MainWindow::on_pushButtonProduitAjouter_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonProduitAjouter_clicked()";

    produit * fenetreEditionProduit=new produit(this);
    if(fenetreEditionProduit->exec()==QDialog::Accepted)
    {
       QSqlRecord nouveauProduit=tableModelProduit->record();
       nouveauProduit.setValue("produitId", getNewProduitId());
       nouveauProduit.setValue("produitLib",fenetreEditionProduit->getLineEditProduitLibelle());
       nouveauProduit.setValue("rayonId", QString::number(fenetreEditionProduit->getComboBoxProduitRayon()));
       if(tableModelProduit->insertRecord(-1, nouveauProduit))
       {
           ui->statusBar->showMessage("Produit ajouté avec succés",3000);
           on_actionProduit_triggered();
       }
       else
       {
           ui->statusBar->showMessage(db.lastError().databaseText(),3000);
       }
    }
    else
    {
        fenetreEditionProduit->close();
    }
}

QString MainWindow::getNewProduitId()
{
    qDebug()<<"MainWindow::getNewProduitId()";

    QSqlQuery requeteNouvelIdentifiant;
    requeteNouvelIdentifiant.exec("SELECT ifnull(max(produitId),0)+1 nouvelIdentifiant FROM produit;");
    requeteNouvelIdentifiant.first();
    qDebug()<<requeteNouvelIdentifiant.value(0).toString();
    return requeteNouvelIdentifiant.value(0).toString();
}

void MainWindow::on_tableViewProduit_clicked()
{
    qDebug()<<"MainWindow::on_tableViewProduit_activated()";
    ui->pushButtonProduitModifier->setEnabled(true);
    ui->pushButtonProduitSupprimer->setEnabled(true);
}

void MainWindow::on_pushButtonProduitModifier_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonProduitModifier_clicked()";
    produit * fenetreEditionProduit=new produit(this);
    fenetreEditionProduit->setLineEditProduitLibelle(tableModelProduit->data(tableModelProduit->sibling(ui->tableViewProduit->currentIndex().row(),tableModelProduit->fieldIndex("produitLib"),ui->tableViewProduit->selectionModel()->currentIndex())).toString());
    fenetreEditionProduit->setComboBoxProduitRayon(tableModelProduit->data(tableModelProduit->sibling(ui->tableViewProduit->currentIndex().row(),tableModelProduit->fieldIndex("rayonId"),ui->tableViewProduit->selectionModel()->currentIndex())).toInt());
    if(fenetreEditionProduit->exec()==QDialog::Accepted)
    {
        QSqlRecord modificationProduit=tableModelProduit->record();
        modificationProduit.setValue("produitLib", fenetreEditionProduit->getLineEditProduitLibelle());
        modificationProduit.setValue("rayonId", fenetreEditionProduit->getComboBoxProduitRayon());
        if(tableModelProduit->setRecord(ui->tableViewProduit->currentIndex().row(), modificationProduit))
        {
            tableModelProduit->submitAll();
            ui->statusBar->showMessage("Produit modifié avec succés",3000);
            on_actionProduit_triggered();
        }
        else
        {
            //qDebug()<< db.lastError();
        }
    }
    else
    {
        fenetreEditionProduit->close();
    }
}

void MainWindow::on_pushButtonProduitSupprimer_clicked()
{
    qDebug()<<"MainWindow::on_pushButtonProduitSupprimer_clicked()";
     tableModelProduit->removeRow(ui->tableViewProduit->selectionModel()->currentIndex().row());
     on_actionProduit_triggered();
}

void MainWindow::on_tableViewRayon_doubleClicked()
{
    ui->comboBoxSearchProduitRayon->setIndexRayon(tableModelRayon->data(tableModelRayon->sibling(ui->tableViewRayon->currentIndex().row(),tableModelRayon->fieldIndex("rayonId"),ui->tableViewRayon->selectionModel()->currentIndex())).toInt());
    ui->tabWidgetAction->setCurrentIndex(2);
}

void MainWindow::on_pushButtonMagasinOrganiser_clicked()
{
    qDebug()<<tableModelMagasin->data(tableModelMagasin->sibling(ui->tableViewMagasin->currentIndex().row(),tableModelMagasin->fieldIndex("magasinId"),ui->tableViewMagasin->selectionModel()->currentIndex())).toInt();
    organiser * fenetreEdition = new organiser(tableModelMagasin->data(tableModelMagasin->sibling(ui->tableViewMagasin->currentIndex().row(),tableModelMagasin->fieldIndex("magasinId"),ui->tableViewMagasin->selectionModel()->currentIndex())).toInt(), this);
    fenetreEdition->exec();
}
