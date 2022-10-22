#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_menu.h"
#include "ui_puntuacion.h"
#include "juego.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::menu mimenu;
    Ui::puntuacion mipuntaje;
    QWidget *menuWidget;
    QWidget *puntajeWidget;
};
#endif // MAINWINDOW_H
