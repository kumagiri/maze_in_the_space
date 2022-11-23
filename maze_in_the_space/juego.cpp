#include "juego.h"
#include "ui_juego.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <QPixmap>
#include "ui_juego.h"

using namespace std;


using namespace std;
juego::juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::juego)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    scene->setSceneRect(0,0,1100,600);

    ui->graphicsView->setScene(scene);
    QTextStream(stdout)<<"iniciar"<<endl;

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



        QFile inputFile("C:/nivel1.txt");
        if(inputFile.open(QFile::ReadOnly | QFile::Text)){
            miLaberinto.push_back(new laberinto());

            miLaberinto[bloque]->posicion(x,y);

            scene->addItem(miLaberinto[bloque]);
            bloque+=1;
            x+=48;

        }
        else{
            x=50;
            miLaberinto.push_back(new laberinto());

            miLaberinto[bloque]->posicion(x,y);

            scene->addItem(miLaberinto[bloque]);
            bloque+=1;
            x+=48;
        }

        /*if(inputFile.open(QIODevice::ReadOnly)){

            miLaberinto.push_back(new laberinto());

            miLaberinto[bloque]->posicion(x,y);

            scene->addItem(miLaberinto[bloque]);
            bloque+=1;
            x+=48;
            QTextStream in(&inputFile);
                while(!in.atEnd()){
                QString line=in.readLine();
                qDebug()<<line;

            }*/

                inputFile.close();
       // }



}

}
