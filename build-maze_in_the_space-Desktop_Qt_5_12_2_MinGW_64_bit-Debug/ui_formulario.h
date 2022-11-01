/********************************************************************************
** Form generated from reading UI file 'formulario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIO_H
#define UI_FORMULARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_formulario
{
public:

    void setupUi(QDialog *formulario)
    {
        if (formulario->objectName().isEmpty())
            formulario->setObjectName(QString::fromUtf8("formulario"));
        formulario->resize(400, 300);

        retranslateUi(formulario);

        QMetaObject::connectSlotsByName(formulario);
    } // setupUi

    void retranslateUi(QDialog *formulario)
    {
        formulario->setWindowTitle(QApplication::translate("formulario", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formulario: public Ui_formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO_H
