#include "formulario.h"
#include "ui_formulario.h"

formulario::formulario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formulario)
{
    ui->setupUi(this);
}

formulario::~formulario()
{
    delete ui;
}
