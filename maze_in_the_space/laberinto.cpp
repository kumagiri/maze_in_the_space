#include "laberinto.h"
#include <fstream>

float laberinto::getX()
{
    return x;
}

void laberinto::setX(float x)
{
 this->x = x;
}

float laberinto::getY()
{
    return y;
}

void laberinto::setY(float y)
{
    this->y = y;
}

laberinto::laberinto(int x,int y,string queTipo)
{
    this->x=x;
    this->y=y;
    this->queTipo=queTipo;
}

void laberinto::abiertoOcerrado()
{

}

void laberinto::esLadrillo()
{

}


void laberinto::esSalida()
{

}

QRectF laberinto::boundingRect() const
{
     return QRectF(x,y,40,40);
}

void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr){

    painter->drawPixmap(0,0,40,40,QPixmap(":lladrillo1.png"));
}
