#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "juego.h"
#include "puntuacion.h"
#include "usuario.h"
#include <QWidget>
#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comenzar_clicked()
{


   juego *objeto2=new juego(this);
   objeto2->show();




}


void MainWindow::on_puntuacion_clicked()
{
    puntuacion *objeto1=new puntuacion(this);
    objeto1->show();
}





void MainWindow::on_salir_clicked()
{
    close();
    qApp->closeAllWindows();
}

void MainWindow::loadSubWindow(QWidget *widget)
{

}

