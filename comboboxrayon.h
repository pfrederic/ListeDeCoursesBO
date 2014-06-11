#ifndef COMBOBOXRAYON_H
#define COMBOBOXRAYON_H

#include <QComboBox>
#include <QVector>

class ComboBoxRayon : public QComboBox
{
Q_OBJECT
public:
    explicit ComboBoxRayon(QWidget *parent = 0);
    void setIndexRayon(int);
    int getIndexIdRayon();
    void clear();
    void chargeCombobox();

private:
      QVector <int> vIdRayon;

signals:

public slots:

};

#endif // COMBOBOXRAYON_H
