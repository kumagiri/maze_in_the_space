#ifndef JUEGO_H
#define JUEGO_H

#include <QDialog>

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

private:
    Ui::juego *ui;
};

#endif // JUEGO_H
