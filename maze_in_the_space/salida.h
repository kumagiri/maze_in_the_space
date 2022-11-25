#ifndef SALIDA_H
#define SALIDA_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class salida : public QObject
{
    Q_OBJECT
public:
    explicit salida(QObject *parent = nullptr);
    QTimer *Timer1;
    QPixmap *pixmap1;
    QRectF boundingRect()const;
    float filas,columnas,ancho,alto;
    float x,y;
    int a;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
    void posicion(int newX, int newY);
    void posicion();
    void setPos(int x,int y);


    float getX() const;
    void setX(float newX);

    float getY() const;
    void setY(float newY);



    void setA(int newA);

signals:

public slots:
    void actualizacion();

};

#endif // SALIDA_H
