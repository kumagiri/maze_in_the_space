#ifndef JUEGO_H
#define JUEGO_H

#include <QDialog>
#include <QVector>
#include "astronauta.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>
#include "laberinto.h"
#include <QRectF>
#include <QDebug>
#include <QTimer>
#include <QTime>
#include <random>
#include "salida.h"

namespace Ui {
class juego;
}

class juego : public QDialog
{
    Q_OBJECT

public:
    explicit juego(QWidget *parent = nullptr);
    ~juego();
    void actualizarSalidas();
    void coliciones();

protected:

    void keyPressEvent(QKeyEvent *f);

private slots:
    void on_regresar_clicked();
    void crearLaberinto();
    void actualizarCronometro();
    void actualizaEstado();

private:
    Ui::juego *ui;
    QGraphicsScene *scene;
    QVector<laberinto*> miLaberinto;
    QVector<int>puertas;



    int bloque=0;
    float x=-5,y=-730;
    float x1=600,y1=70,ancho,alto;



    astronauta *principal;
    QTimer *timer1=new QTimer;
    QTimer *timer2=new QTimer;
    QTime time1;
    QTime time2;


};

#endif // JUEGO_H
