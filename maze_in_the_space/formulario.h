#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QDialog>

namespace Ui {
class formulario;
}

class formulario : public QDialog
{
    Q_OBJECT

public:
    explicit formulario(QWidget *parent = nullptr);
    ~formulario();

private:
    Ui::formulario *ui;
};

#endif // FORMULARIO_H
