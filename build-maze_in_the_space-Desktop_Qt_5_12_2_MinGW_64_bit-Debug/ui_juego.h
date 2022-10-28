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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_juego
{
public:
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *cambio;
    QProgressBar *oxigeno;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QLabel *tiempo;
    QProgressBar *combustible;

    void setupUi(QDialog *juego)
    {
        if (juego->objectName().isEmpty())
            juego->setObjectName(QString::fromUtf8("juego"));
        juego->setWindowModality(Qt::ApplicationModal);
        juego->resize(506, 228);
        juego->setStyleSheet(QString::fromUtf8(""));
        juego->setSizeGripEnabled(true);
        juego->setModal(true);
        formLayout = new QFormLayout(juego);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cambio = new QLabel(juego);
        cambio->setObjectName(QString::fromUtf8("cambio"));
        cambio->setMinimumSize(QSize(60, 50));

        verticalLayout->addWidget(cambio);

        oxigeno = new QProgressBar(juego);
        oxigeno->setObjectName(QString::fromUtf8("oxigeno"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(oxigeno->sizePolicy().hasHeightForWidth());
        oxigeno->setSizePolicy(sizePolicy);
        oxigeno->setMinimumSize(QSize(50, 150));
        oxigeno->setMaximumSize(QSize(50, 16777215));
        oxigeno->setValue(24);

        verticalLayout->addWidget(oxigeno);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(juego);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(350, 0));

        gridLayout->addWidget(graphicsView, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tiempo = new QLabel(juego);
        tiempo->setObjectName(QString::fromUtf8("tiempo"));
        tiempo->setMinimumSize(QSize(60, 50));

        verticalLayout_2->addWidget(tiempo);

        combustible = new QProgressBar(juego);
        combustible->setObjectName(QString::fromUtf8("combustible"));
        combustible->setMinimumSize(QSize(50, 150));
        combustible->setMaximumSize(QSize(50, 16777215));
        combustible->setValue(24);

        verticalLayout_2->addWidget(combustible);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);


        retranslateUi(juego);

        QMetaObject::connectSlotsByName(juego);
    } // setupUi

    void retranslateUi(QDialog *juego)
    {
        juego->setWindowTitle(QApplication::translate("juego", "Dialog", nullptr));
        cambio->setText(QApplication::translate("juego", "TextLabel", nullptr));
        tiempo->setText(QApplication::translate("juego", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class juego: public Ui_juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
