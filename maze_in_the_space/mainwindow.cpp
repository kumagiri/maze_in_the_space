#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    menuWidget(0),
    puntajeWidget(0)

{
    menuWidget=new QWidget(this);
    mimenu.setupUi(menuWidget);

    puntajeWidget=new QWidget(this);
    mipuntaje.setupUi(puntajeWidget);
}

MainWindow::~MainWindow()
{
}

