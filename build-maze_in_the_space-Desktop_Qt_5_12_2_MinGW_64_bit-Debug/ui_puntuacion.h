/********************************************************************************
** Form generated from reading UI file 'puntuacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUNTUACION_H
#define UI_PUNTUACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_puntuacion
{
public:

    void setupUi(QWidget *puntuacion)
    {
        if (puntuacion->objectName().isEmpty())
            puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->resize(400, 300);

        retranslateUi(puntuacion);

        QMetaObject::connectSlotsByName(puntuacion);
    } // setupUi

    void retranslateUi(QWidget *puntuacion)
    {
        puntuacion->setWindowTitle(QApplication::translate("puntuacion", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class puntuacion: public Ui_puntuacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUNTUACION_H
