#ifndef JUEGO_H
#define JUEGO_H

#include <QDialog>
#include <QVector>

#include <QString>
#include <QGraphicsScene>
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>
#include "laberinto.h"


namespace Ui {
class juego;
}

class juego : public QDialog
{
    Q_OBJECT

public:
    explicit juego(QWidget *parent = nullptr);
    ~juego();

private slots:
    void on_regresar_clicked();
    void crearLaberinto();

private:
    Ui::juego *ui;
    QGraphicsScene *scene;
    QVector<laberinto*> miLaberinto;

    QString nivel;

    int bloque=0;
    int x=-5,y=-44;


};

#endif // JUEGO_H
