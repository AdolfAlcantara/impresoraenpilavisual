#ifndef SOLICITARVENTANA_H
#define SOLICITARVENTANA_H
#include <iostream>
#include <QDialog>
#include "mainwindow.h"
#include "impresora.h"
using namespace std;

namespace Ui {
class SolicitarVentana;
}

class SolicitarVentana : public QDialog
{
    Q_OBJECT

public:
    explicit SolicitarVentana(QWidget *parent = 0, impresora *imp=0);
    ~SolicitarVentana();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SolicitarVentana *ui;
    impresora *impre;
};

#endif // SOLICITARVENTANA_H
