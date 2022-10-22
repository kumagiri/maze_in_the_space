/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_juego
{
public:

    void setupUi(QDialog *juego)
    {
        if (juego->objectName().isEmpty())
            juego->setObjectName(QString::fromUtf8("juego"));
        juego->resize(400, 300);

        retranslateUi(juego);

        QMetaObject::connectSlotsByName(juego);
    } // setupUi

    void retranslateUi(QDialog *juego)
    {
        juego->setWindowTitle(QApplication::translate("juego", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class juego: public Ui_juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
