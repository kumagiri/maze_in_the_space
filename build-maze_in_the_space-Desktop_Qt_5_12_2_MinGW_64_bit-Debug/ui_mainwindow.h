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
    QPushButton *puntuacion;
    QPushButton *salir;
    QPushButton *comenzar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 540);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-image:url(://menu1.png);\n"
"}\n"
"#comenzar{\n"
"color:black;\n"
"qproperty-alignement:aligncenter;\n"
"background:teal;\n"
"border:3px solid silver;\n"
"border-radius:7px\n"
"}\n"
"#puntuacion{\n"
"color:black;\n"
"qproperty-alignement:aligncenter;\n"
"background:teal;\n"
"border:3px solid silver;\n"
"border-radius:7px\n"
"}\n"
"#salir{\n"
"color:black;\n"
"qproperty-alignement:aligncenter;\n"
"background:teal;\n"
"border:3px solid silver;\n"
"border-radius:7px\n"
"}"));
        puntuacion = new QPushButton(centralwidget);
        puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->setGeometry(QRect(380, 340, 180, 50));
        QFont font;
        font.setPointSize(20);
        puntuacion->setFont(font);
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(380, 410, 180, 50));
        salir->setFont(font);
        comenzar = new QPushButton(centralwidget);
        comenzar->setObjectName(QString::fromUtf8("comenzar"));
        comenzar->setGeometry(QRect(380, 270, 180, 50));
        comenzar->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        puntuacion->setText(QApplication::translate("MainWindow", "PUNTUACION", nullptr));
        salir->setText(QApplication::translate("MainWindow", "SALIR", nullptr));
        comenzar->setText(QApplication::translate("MainWindow", "COMENZAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
