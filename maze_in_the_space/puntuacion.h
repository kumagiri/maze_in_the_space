#ifndef PUNTUACION_H
#define PUNTUACION_H

#include <QDialog>

namespace Ui {
class puntuacion;
}

class puntuacion : public QDialog
{
    Q_OBJECT

public:
    explicit puntuacion(QWidget *parent = nullptr);
    ~puntuacion();

private:
    Ui::puntuacion *ui;
};

#endif // PUNTUACION_H
