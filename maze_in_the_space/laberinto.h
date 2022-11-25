#ifndef LABERINTO_H
#define LABERINTO_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QRectF>

class laberinto:public QObject,
                public QGraphicsPixmapItem
{
private:
    int x;
    int y;
    int a;
public:
    laberinto(QGraphicsItem *lab =0);
    ~laberinto();


    QRectF boundingRect()const;
    void posicion(int newX, int newY);
    void posicion();
    int getX() const;
    void setX(int newX);
    int getY() const;
    void setY(int newY);
    void seta(int a);

};

#endif // LABERINTO1_H
