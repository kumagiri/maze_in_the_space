/********************************************************************************
** Form generated from reading UI file 'usuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIO_H
#define UI_USUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_usuario
{
public:

    void setupUi(QDialog *usuario)
    {
        if (usuario->objectName().isEmpty())
            usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->resize(400, 300);

        retranslateUi(usuario);

        QMetaObject::connectSlotsByName(usuario);
    } // setupUi

    void retranslateUi(QDialog *usuario)
    {
        usuario->setWindowTitle(QApplication::translate("usuario", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usuario: public Ui_usuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIO_H
