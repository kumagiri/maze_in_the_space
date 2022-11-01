#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    juego *objeto1=new juego;
    objeto1->showMaximized();
    objeto1->exec();
}


void MainWindow::on_puntuacion_clicked()
{

}


void MainWindow::on_salir_clicked()
{

}

