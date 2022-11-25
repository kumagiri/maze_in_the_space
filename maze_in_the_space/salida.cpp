#include "salida.h"

salida::salida(QObject *parent)
    : QObject{parent}
{
    Timer1 = new QTimer();

    filas=0;
    columnas=0;
    ancho=67;
    alto=50;
    pixmap1= new QPixmap(":/salidas.png");
    Timer1->start(200);
    connect(Timer1,&QTimer::timeout,this,&salida::actualizacion);
}

QRectF salida::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void salida::setA(int newA)
{
    a = newA;
}

void salida::actualizacion()
{
    if(a==2){
        columnas=0;
    }
    else if(a==3){
        columnas=40;
    }
}

float salida::getY() const
{
    return y;
}

void salida::setY(float newY)
{
    y = newY;
}

float salida::getX() const
{
    return x;
}

void salida::setX(float newX)
{
    x = newX;
}

void salida::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap1,columnas,filas,ancho,alto);
}

void salida::posicion(int x, int y)
{
    this->x=x;
    this->y=y;
    setPos(x,y);
}

void salida::setPos(int x, int y)
{
    getX();
    getY();
}


