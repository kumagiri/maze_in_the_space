#include "juego.h"
#include "ui_juego.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <QPixmap>
#include "ui_juego.h"


using namespace std;
juego::juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::juego)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    scene->setSceneRect(0,0,1100,600);

    ui->graphicsView->setScene(scene);

/*    for(int j=0;j<14;j++){

        for(int i=0;i<23;i++){

            miLaberinto.push_back(new laberinto());

            miLaberinto[bloque]->posicion(x,y);

            scene->addItem(miLaberinto[bloque]);
            bloque+=1;
            x+=48;

    }
    x=-5;
    y+=49;
    }*/
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
    /*ifstream archivoDeLectura ("nivel1.txt");
    if(archivoDeLectura.is_open()){
        string fila;
        while(getline(archivoDeLectura,fila)){

         istringstream numeroLinea(fila);
         string dato;
         while(getline(numeroLinea,dato,',')){

             if(dato=="0"){

                 miLaberinto.push_back(new laberinto());

                 miLaberinto[bloque]->posicion(x,y);

                 scene->addItem(miLaberinto[bloque]);
                 bloque+=1;
                 x+=48;


             }

             x=-5;
             y+=49;
         }

        }

    }*/
       /* arch.setFileName(":/nivel1.txt");
        arch.open(QIODevice::Text | QIODevice::ReadOnly);
        io.setDevice(&arch);
        contenido=io.readAll();
        arch.close();*/
       file.setFileName(":/nivel1");
        if(!file.isOpen()){
            return;
            /*QTextStream in(&arch);
            while(!in.atEnd()){
                contenido=in.readLine();
                QVector<QChar>dato;
                for (int i=0;i<contenido.size();i++ ) {
                    dato.push_back(contenido[i]);
                }
                for (int i=0;i<contenido.size();i++ ) {
                    if(dato[i]=="1"){
                        miLaberinto.push_back(new laberinto());

                        miLaberinto[bloque]->posicion(x,y);

                        scene->addItem(miLaberinto[bloque]);
                        bloque+=1;
                        x+=48;
                    }

                }

                x=-5;
                y+=49;

            }
        }*/
        }
        for(int j=0;j<14;j++){

               for(int i=0;i<23;i++){

                   miLaberinto.push_back(new laberinto());

                   miLaberinto[bloque]->posicion(x,y);

                   scene->addItem(miLaberinto[bloque]);
                   bloque+=1;
                   x+=48;

           }
           x=-5;
           y+=49;
           }
    }

}


