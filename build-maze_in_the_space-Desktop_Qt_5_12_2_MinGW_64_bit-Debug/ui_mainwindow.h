/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *comenzar;
    QPushButton *puntuacion;
    QPushButton *salir;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 500);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-image: url(:/menu1.png);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comenzar = new QPushButton(centralwidget);
        comenzar->setObjectName(QString::fromUtf8("comenzar"));
        comenzar->setGeometry(QRect(420, 280, 80, 24));
        puntuacion = new QPushButton(centralwidget);
        puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->setGeometry(QRect(420, 340, 80, 24));
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(420, 400, 80, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Maze in the space", nullptr));
        comenzar->setText(QApplication::translate("MainWindow", "comenzar", nullptr));
        puntuacion->setText(QApplication::translate("MainWindow", "puntuacion", nullptr));
        salir->setText(QApplication::translate("MainWindow", "salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
