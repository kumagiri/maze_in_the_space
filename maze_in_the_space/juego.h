#ifndef JUEGO_H
#define JUEGO_H

#include <QDialog>
#include <QVector>
#include "laberinto.h"
#include <QString>
#include <QGraphicsScene>

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
    QGraphicsScene *escena;

    QString nivel;

    QVector <laberinto*>miLaberinto;
    QString archivo;
    int x=0,y=0;


};

#endif // JUEGO_H
