#include "juego.h"
#include "ui_juego.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <QPixmap>
#include "ui_juego.h"
#include <QKeyEvent>
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
    principal=new astronauta();
    scene->addItem(principal);
    principal->posicion(x1,y1);
    crearLaberinto();
    timer1->start(100);
    timer2->start(1000);
    time1.setHMS(0,0,0);
    time2.setHMS(0,1,0);
    connect(timer1,SIGNAL(timeout()),this,SLOT(actualizarEstado()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(actualizarCronometro()));

}

juego::~juego()
{
    delete ui;
    for(int i=0;i<miLaberinto.size();i++){
        miLaberinto[i]->~laberinto();
    }
    principal->~astronauta();
}

void juego::actualizarSalidas()

{
   if(time2.toString()=="00:00:00"){
    int a;
    a=rand()%(5-0);
   if(a==1){

    miLaberinto[3]->setVisible(false);
    miLaberinto[2]->setVisible(true);
    miLaberinto[1]->setVisible(true);
    miLaberinto[0]->setVisible(true);
   }
   else if(a==2){
       miLaberinto[3]->setVisible(true);
       miLaberinto[2]->setVisible(false);
       miLaberinto[1]->setVisible(true);
       miLaberinto[0]->setVisible(true);
   }
   else if(a=3){
       miLaberinto[3]->setVisible(true);
       miLaberinto[2]->setVisible(true);
       miLaberinto[1]->setVisible(false);
       miLaberinto[0]->setVisible(true);
   }
   else if(a=4){
       miLaberinto[3]->setVisible(true);
       miLaberinto[2]->setVisible(true);
       miLaberinto[1]->setVisible(true);
       miLaberinto[0]->setVisible(false);
   }
   }

}

void juego::coliciones()
{
    int a=0,b=0;
    for(int i=0;i<miLaberinto.size();i++){

        if((miLaberinto[i]->boundingRect().intersects(principal->boundingRect()))==true){
            float a1,a2,b1,b2,w1,h1,w2,h2,distancia;
            a1=miLaberinto[i]->getX();
            a2=miLaberinto[i]->getY();
            b1=principal->getX();
            b2=principal->getY();
            w1=48;
            h1=50;
            w2=67;
            if(a1>(b1+w2)){

            }
            else if(a1+w1<b2){

            }
            else if(a2>b2+h2){

            }
            else if(a2+h1<b2){

            }
            else{
                if(a1<b1){
                    x1+=3;
                    principal->posicion(x1,y1);
                }
                else if(a1>a2){
                    x1-=3;
                    principal->posicion(x1,y1);

                }
                else if(a2<b2){
                    y1+=3;
                    principal->posicion(x1,y1);

                }
                else if(a2>b2){
                    y1-=3;
                    principal->posicion(x1,y1);
                }
            }

    }
    }
}

void juego::keyPressEvent(QKeyEvent *f)
{
    if(f->key()==Qt::Key_A){
        x1-=3;
        principal->animacion(1);
        principal->posicion(x1,y1);
    }

    else if(f->key()==Qt::Key_D){

        x1+=3;
        principal->animacion(0);
        principal->posicion(x1,y1);
    }
    else if(f->key()==Qt::Key_W){
        y1-=3;
        principal->animacion(2);
        principal->posicion(x1,y1);
    }
    else if(f->key()==Qt::Key_S){
        y1+=3;
        principal->animacion(3);
        principal->posicion(x1,y1);
    }

    }

void juego::on_regresar_clicked()
{
    close();
    time1.setHMS(0,0,0);
    time2.setHMS(0,1,0);

}

void juego::crearLaberinto()
{

    int nivel1[29][23]={{1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1},
                        {1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1},
                        {1,0,1,0,1,1,0,0,1,1,0,1,1,1,1,1,1,1,0,0,1,0,1},
                        {1,1,1,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,1},
                        {1,0,0,0,1,0,0,0,1,0,0,1,0,1,0,1,1,1,1,1,1,0,1},
                        {1,0,1,1,1,1,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1},
                        {1,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,1,1,0,1,0,1},
                        {1,0,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,1,0,1,0,1},
                        {1,0,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,1,1,0,1,0,1},
                        {1,0,1,1,1,1,1,0,1,0,1,0,0,1,0,1,0,1,1,0,1,0,1},
                        {1,0,0,0,1,0,1,0,1,0,1,1,1,1,0,0,0,0,0,0,1,0,1},
                        {1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,0,1},
                        {1,1,1,0,1,0,0,0,1,1,1,1,1,1,0,0,1,0,0,0,1,0,1},
                        {2,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,1},
                        {1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,1,0,1,0,1,0,1},
                        {1,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,1,1,1,0,1,0,1},
                        {1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1},
                        {1,0,1,0,1,0,1,0,1,0,1,1,0,1,1,0,0,0,1,0,1,0,2},
                        {1,0,1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1},
                        {1,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1},
                        {1,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1},
                        {1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1},
                        {1,0,0,0,0,1,0,0,1,0,1,1,1,1,1,1,1,0,1,0,1,0,1},
                        {1,1,1,1,0,1,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,0,1},
                        {1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1},
                        {1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,0,1},
                        {1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
                        {1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1}};
                        int sa=0;
                        for(int i=0;i<29;i++){
                            for(int j=0;j<23;j++){
                                if(nivel1[i][j]==1){
                                    miLaberinto.push_back(new laberinto());

                                    miLaberinto[bloque]->posicion(x,y);

                                    scene->addItem(miLaberinto[bloque]);
                                    bloque+=1;
                                    x+=48;
                                }
                                else if(nivel1[i][j]==0){
                                    x+=48;
                                }
                                else if(nivel1[i][j]==2){
//                                    miLaberinto.push_back(new laberinto());

//                                    miLaberinto[bloque]->posicion(x,y);
//                                    puertas.push_back(bloque);
//                                    scene->addItem(miLaberinto[bloque]);
//                                    bloque+=1;

                                    x+=48;
                                }

                            }
                            x=-5;
                            y+=49;
                        }

}

void juego::actualizarCronometro()
{
    time1=time1.addSecs(1);
    time2=time2.addSecs(-1);
    ui->tiempo->setText(time1.toString("h:mm:ss"));
    ui->cronometro->setText(time2.toString("mm:ss"));
    if(time2.toString()=="00:00:00"){
        time2.setHMS(0,1,0);
    }
}

void juego::actualizaEstado()
{
    actualizarSalidas();
    coliciones();
}


