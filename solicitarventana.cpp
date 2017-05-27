#include "solicitarventana.h"
#include "ui_solicitarventana.h"

SolicitarVentana::SolicitarVentana(QWidget *parent, impresora *imp) :
    QDialog(parent),
    ui(new Ui::SolicitarVentana)
{
    ui->setupUi(this);
    impre = imp;
}

SolicitarVentana::~SolicitarVentana()
{
    delete ui;
}


void SolicitarVentana::on_pushButton_clicked()
{
    string oracion = ui->plainTextEdit->toPlainText().toStdString();
    impre->solicitar(oracion);
    ui->plainTextEdit->clear();

}
