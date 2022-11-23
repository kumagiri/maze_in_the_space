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
#include <QFile>
#include <QTextStream>
#include <QChar>
#include <QDebug>

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

    QString nivel,contenido;
    QChar dato2;

    int bloque=0;
    int x=-5,y=-44,car;

    QTextStream io;
    QFile file;


};

#endif // JUEGO_H
