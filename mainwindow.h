#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "impresora.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_buttonImp_clicked();

private:
    Ui::MainWindow *ui;
    impresora *imp;
};

#endif // MAINWINDOW_H
