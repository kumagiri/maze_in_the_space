#include "astronauta.h"

astronauta::astronauta(QObject *parent)
    : QObject{parent}
{
    Timer = new QTimer();

    filas=0;
    columnas=0;
    ancho=67;
    alto=50;
    pixmap= new QPixmap(":/astronauta_sprite.png");
    Timer->start(200);
    connect(Timer,&QTimer::timeout,this,&astronauta::actualizacion);
}

QRectF astronauta::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

float astronauta::getY() const
{
    return y;
}

void astronauta::setY(float newY)
{
    y = newY;
}

float astronauta::getX() const
{
    return x;
}

void astronauta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,filas,ancho,alto);
}

void astronauta::posicion(int x, int y)
{
    this->x=x;
    this->y=y;
    setPos(x,y);
}

void astronauta::animacion(int a)
{
    this->a = a;
}

void astronauta::actualizacion()
{

    if(a==0){
        filas=0;
    }
    else if(a==1){
        filas=50;
    }
    else if(a==2){
        filas=100;
    }
    else if(a==3){
        filas=150;
    }


    columnas+=67;
    if(columnas>=400){
        columnas=67;
    }

    this->update(-ancho/2,-alto/2,ancho,alto);
}
