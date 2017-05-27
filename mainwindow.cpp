#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "impresoraventana.h"
#include "solicitarventana.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    //seleccionar fondo del layout

    ui->setupUi(this);
    QPixmap background("C:\\Users\\Chronos-Laptop\\Documents\\ED1\\Impresora\\fondo.png");
    background = background.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palete;
    palete.setBrush(QPalette::Background,background);
    this->setPalette(palete);

    imp = new impresora();

//    ui->button1->setFlat(true); //Hace invisible el background del boton hasta que es clickeado
//    ui->button2->setFlat(true);
//    ui->button3->setFlat(true);
//    ui->button4->setFlat(true);
//    ui->button5->setFlat(true);
//    ui->button6->setFlat(true);
//    ui->button7->setFlat(true);
//    ui->button8->setFlat(true);
//    ui->button9->setFlat(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    SolicitarVentana sv(this,imp);
    sv.setModal(true);
    sv.exec();
}

void MainWindow::on_buttonImp_clicked()
{
    ImpresoraVentana iv(this,imp);
    iv.setModal(true);
    iv.exec();
}
