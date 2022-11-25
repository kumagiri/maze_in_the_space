#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class astronauta : public QObject,public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    explicit astronauta(QObject *parent = nullptr);
    QTimer *Timer;
    QPixmap *pixmap;
    QRectF boundingRect()const;
    float filas,columnas,ancho,alto;
    float x,y;
    int a;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);
    void posicion(int x,int y);
    void animacion(int a);
    float getX() const;

    float getY() const;
    void setY(float newY);

signals:

public slots:
    void actualizacion();

};

#endif // ASTRONAUTA_H
