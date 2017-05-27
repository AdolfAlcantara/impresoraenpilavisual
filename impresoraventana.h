#ifndef IMPRESORAVENTANA_H
#define IMPRESORAVENTANA_H
#include <QDialog>
#include <QMessageBox>
#include "impresora.h"

namespace Ui {
class ImpresoraVentana;
}

class ImpresoraVentana : public QDialog
{
    Q_OBJECT

public:
    explicit ImpresoraVentana(QWidget *parent = 0,impresora *imp=0);
    ~ImpresoraVentana();

private slots:
    void on_buttonImp1_clicked();
    void on_buttonImpt_clicked();

private:
    Ui::ImpresoraVentana *ui;
    impresora *impre;

};

#endif // IMPRESORAVENTANA_H
