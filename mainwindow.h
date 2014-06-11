#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QVector>

namespace Ui {
    class MainWindow;
}

/*!
 * \brief       La classe mainwindow est le coeur de l'application. Elle permet d'afficher les informations de la base. Elle permet de créer des fenêtres des autres classes pour une meilleure gestion des données de la base. C'est dans cette classe que se trouve l'ajout et la modification des données (contrairement aux autres classes, qui ne sont que des interfaces avec assesseur).
 * \file        mainwindow.h
 * \author      Pignoly Frédéric
 * \version     1.0b
 * \date        02/2014
 * \inherit     QMainWindow
 * \details     main.cpp
 * \copyright   GNU Public License
 */

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    /*!
     * \fn          MainWindow::MainWindow(QWidget *parent)
     * \brief       Constructeur de la classe MainWindow.
     * \param       parent
     * \property    builder
     */
    MainWindow(QWidget *parent = 0);
    /*!
     * \fn          ~MainWindow()
     * \brief       Destructeur de la classe MainWindow.
     */
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    /*!
     * \var         db
     * \brief       Objet permettant la connexion à la base. Créé lors de la construction de mainwindow.
     * \property    property
     */
    QSqlDatabase db;

    QSqlTableModel * tableModelMagasin;

    QSqlQueryModel * queryModelMagasin;

    QSqlTableModel * tableModelRayon;

    QSqlQueryModel * queryModelRayon;

    QSqlTableModel * tableModelProduit;

    QSqlQueryModel * queryModelProduit;

    void connectionObjet();

    QString getNewMagasinId();

    QString getNewRayonId();

    QString getNewProduitId();

private slots:
    void on_pushButtonMagasinOrganiser_clicked();
    void on_tableViewRayon_doubleClicked();
    void on_pushButtonProduitSupprimer_clicked();
    void on_tableViewProduit_clicked();
    void on_pushButtonProduitModifier_clicked();
    void on_pushButtonProduitAjouter_clicked();
    void on_actionQuitter_triggered();
    /*!
     * \fn          void MainWindow::on_actionQuitter_triggered()
     * \brief       Cette fonction est assoicée avec un bouton se trouvant dans le menu fichier dans la barre d'outil. Elle permet de quitter l'application.
     * \property    function
     */
    void on_actionMagasin_triggered();
    void on_pushButtonMagasinAjouter_clicked();
    void on_pushButtonMagasinModifier_clicked();
    void on_pushButtonMagasinSupprimer_clicked();
    void on_tableViewMagasin_clicked();
    void rechercheMagasin();

    void on_actionRayon_triggered();
    void on_pushButtonRayonAjouter_clicked();
    void on_pushButtonRayonModifier_clicked();
    void on_pushButtonRayonSupprimer_clicked();
    void on_tableViewRayon_clicked();
    void rechercheRayon();

    void on_actionProduit_triggered();
    void rechercheProduit();

};

#endif // MAINWINDOW_H
