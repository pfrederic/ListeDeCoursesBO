#ifndef RAYON_H
#define RAYON_H

#include <QDialog>

namespace Ui {
    class rayon;
}

class rayon : public QDialog {
    Q_OBJECT
public:
    rayon(QWidget *parent = 0);
    ~rayon();
    void setLineEditRayonLibelle(QString);
    QString getLineEditRayonLibelle();

protected:
    void changeEvent(QEvent *e);    

private:
    Ui::rayon *ui;
    bool saisiOk();

private slots:
    void on_lineEditRayonLibelle_textChanged(QString );
    void on_pushButtonRayonAnnuler_clicked();
    void on_pushButtonRayonEditer_clicked();
};

#endif // RAYON_H
