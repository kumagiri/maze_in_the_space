#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "juego.h"
#include "puntuacion.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comenzar_clicked();

    void on_puntuacion_clicked();

    void on_salir_clicked();

private:
    Ui::MainWindow *ui;
    juego *objeto1=new juego;
    puntuacion *objeto2=new puntuacion;
};
#endif // MAINWINDOW_H
