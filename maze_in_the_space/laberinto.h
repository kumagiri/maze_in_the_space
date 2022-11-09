#ifndef LABERINTO_H
#define LABERINTO_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class laberinto:public QObject,
                public QGraphicsPixmapItem
{
private:
    int x;
    int y;
public:
    laberinto(QGraphicsItem *lab =0);
    ~laberinto();



    void posicion(int newX, int newY);
    void posicion();
    int getX() const;
    void setX(int newX);
    int getY() const;
    void setY(int newY);
};

#endif // LABERINTO1_H
