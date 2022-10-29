#ifndef JUEGO_H
#define JUEGO_H

#include <QWidget>

namespace Ui {
class juego;
}

class juego : public QWidget
{
    Q_OBJECT

public:
    explicit juego(QWidget *parent = nullptr);
    ~juego();

private:
    Ui::juego *ui;
};

#endif // JUEGO_H
