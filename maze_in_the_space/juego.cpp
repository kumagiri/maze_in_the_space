#include "juego.h"
#include "ui_juego.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
juego::juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::juego)
{
    ui->setupUi(this);
    crearLaberinto();

}

juego::~juego()
{
    delete ui;
}

void juego::on_regresar_clicked()
{
    close();
}

void juego::crearLaberinto()
{
    nivel="1";
    if(nivel=="1"){
    ifstream archivoDeLectura ("nivel1.txt");
    if(archivoDeLectura.is_open()){
        string fila;
        while(getline(archivoDeLectura,fila)){

         istringstream numeroLinea(fila);
         string dato;
         while(getline(numeroLinea,dato,',')){

             if(dato=="1"){
                 miLaberinto.push_back(new laberinto(x,y,"ladrillo"));
             }

         }
        }

    }
    }

}

