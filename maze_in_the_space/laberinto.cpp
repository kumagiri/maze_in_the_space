#include "laberinto.h"




int laberinto::getY() const
{
    return y;
}

void laberinto::setY(int newY)
{
    y = newY;
}

void laberinto::seta(int a)
{
 this->a=a;
}








laberinto::laberinto(QGraphicsItem *lab):QGraphicsPixmapItem(lab)
{


    setPixmap(QPixmap(":/ladrillo_L.png"));
    if(a==2){
        setPixmap(QPixmap(":/salida_ro 40x40.png"));
    }
    if(a==3){
        setPixmap(QPixmap(":/salida_ve 40x40.png"));
    }


}

laberinto::~laberinto()
{

}

QRectF laberinto::boundingRect()const
{
    return QRectF(0,0,50,50);
}

void laberinto::posicion(int newX, int newY)
{
    x=newX;
    y=newY;
    setPos(x,y);
}

void laberinto::posicion()
{

}

int laberinto::getX() const
{
    return x;
}

void laberinto::setX(int newX)
{
    x = newX;
}
