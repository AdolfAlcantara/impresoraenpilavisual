#include "mainwindow.h"
#include "impresora.h"
#include <QApplication>
impresora *imp = new impresora();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
