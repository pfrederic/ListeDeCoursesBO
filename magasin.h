#ifndef MAGASIN_H
#define MAGASIN_H

#include <QDialog>

namespace Ui {
    class magasin;
}

class magasin : public QDialog {
    Q_OBJECT
public:
    magasin(QWidget *parent = 0);
    ~magasin();
    void setLineEditMagasinLibelle(QString);
    QString getLineEditMagasinLibelle();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::magasin *ui;    
    bool saisiOk();
private slots:
    void on_lineEditMagasinLibelle_textChanged(QString );
    void on_pushButtonMagasinEditer_clicked();
    void on_pushButtonMagasinAnnuler_clicked();
};

#endif // MAGASIN_H
