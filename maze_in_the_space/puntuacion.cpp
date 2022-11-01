#include "puntuacion.h"
#include "ui_puntuacion.h"

puntuacion::puntuacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::puntuacion)
{
    ui->setupUi(this);
}

puntuacion::~puntuacion()
{
    delete ui;
}
