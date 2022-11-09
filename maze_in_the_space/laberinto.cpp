#include "laberinto.h"




int laberinto::getY() const
{
    return y;
}

void laberinto::setY(int newY)
{
    y = newY;
}

laberinto::laberinto(QGraphicsItem *lab):QGraphicsPixmapItem(lab)
{
    setPixmap(QPixmap(":/ladrillo_L.png"));
}

laberinto::~laberinto()
{
    setPos(x,y);
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
