#include "impresoraventana.h"
#include "ui_impresoraventana.h"

ImpresoraVentana::ImpresoraVentana(QWidget *parent, impresora *imp) :
    QDialog(parent),
    ui(new Ui::ImpresoraVentana)
{
    ui->setupUi(this);
    impre = imp;
}

ImpresoraVentana::~ImpresoraVentana()
{
    delete ui;
}

void ImpresoraVentana::on_buttonImp1_clicked()
{
    if(impre->head!=0){
        QString qst = QString::fromStdString(impre->imprimir()->oracion);
        ui->plainTextEdit->appendPlainText(qst);
        ui->plainTextEdit->appendPlainText("\n");
    }else{
        QMessageBox *qmb;
        qmb->information(this,"Error","La lista esta vacia.");
    }
}

void ImpresoraVentana::on_buttonImpt_clicked()
{
    if(impre->head!=0){
        while(impre->head!=0){
            QString qst = QString::fromStdString(impre->getPrimera()->oracion);
            ui->plainTextEdit->appendPlainText(qst);
        }
    }else{
        QMessageBox *qmb;
        qmb->information(this,"Error","La lista esta vacia.");
    }
}
