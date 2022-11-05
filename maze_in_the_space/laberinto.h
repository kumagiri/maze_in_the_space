#ifndef LABERINTO_H
#define LABERINTO_H
#define ANCHO 40;
#define ALTO 40;
#include <string>
#include <iostream>
#include <QPainter>
#include <QGraphicsItem>
using namespace std;


class laberinto
{
private:

    float x;
    float y;
    string queTipo;


public:
    laberinto(int x,int y,string queTipo);
    ~laberinto();
    void abiertoOcerrado();
    void esLadrillo();
    void esSalida();
    void mostrarLaberinto();
    QRectF boundingRect()const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    float getX();
    void setX(float newX);
    float getY() ;
    void setY(float newY);
};

#endif // LABERINTO_H
