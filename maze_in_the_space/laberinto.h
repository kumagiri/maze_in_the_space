#ifndef LABERINTO_H
#define LABERINTO_H

#include <string>
#include <iostream>
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



    float getX() const;
    void setX(float newX);
    float getY() const;
    void setY(float newY);
};

#endif // LABERINTO_H
