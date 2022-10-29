#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ui_juego.h>


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
    Ui::juego *ai;


    void loadSubWindow(QWidget *widget);

};
#endif // MAINWINDOW_H
