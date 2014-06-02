#include "comboboxrayon.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

ComboBoxRayon::ComboBoxRayon(QWidget *parent) :
    QComboBox(parent)
{
    qDebug()<<"ComboBoxRayon::ComboBoxRayon(QWidget *parent) : QComboBox(parent)";
    addItem("Sélectionner un rayon");
    vIdRayon.push_back(-1);
    QString requeteRayon="SELECT rayonId, rayonLib FROM rayon;";
    qDebug()<<requeteRayon;
    QSqlQuery Rayon(requeteRayon);
    while(Rayon.next())
    {
        addItem(Rayon.value(1).toString());
        vIdRayon.push_back(Rayon.value(0).toInt());
    }
}

void ComboBoxRayon::setIndexRayon(int idRayon)
{
    for(int i=0;i<vIdRayon.size();i++)
    {
        if(vIdRayon.at(i)==idRayon)
        {
            setCurrentIndex(i);
        }
    }
}

int ComboBoxRayon::getIndexIdRayon()
{
    return vIdRayon.at(currentIndex());
}
