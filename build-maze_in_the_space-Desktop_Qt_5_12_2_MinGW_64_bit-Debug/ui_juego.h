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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_juego
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *regresar;
    QLabel *label;
    QLabel *label_4;
    QProgressBar *combustible_barra;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *puntuacion;
    QLabel *label_2;
    QLabel *label_3;
    QProgressBar *oxigeno_barra;

    void setupUi(QDialog *juego)
    {
        if (juego->objectName().isEmpty())
            juego->setObjectName(QString::fromUtf8("juego"));
        juego->resize(900, 700);
        juego->setStyleSheet(QString::fromUtf8("#juego{\n"
"	\n"
"	background-color: rgb(104, 106, 109);\n"
"}\n"
"#graphicsView{\n"
"	\n"
"	background-color: rgb(158, 155, 141);\n"
"}"));
        gridLayout = new QGridLayout(juego);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        regresar = new QPushButton(juego);
        regresar->setObjectName(QString::fromUtf8("regresar"));
        regresar->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ladrillo1.png"), QSize(), QIcon::Normal, QIcon::On);
        regresar->setIcon(icon);
        regresar->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(regresar, 0, Qt::AlignHCenter);

        label = new QLabel(juego);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(juego);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/combustible_barraicono.png")));

        verticalLayout->addWidget(label_4);

        combustible_barra = new QProgressBar(juego);
        combustible_barra->setObjectName(QString::fromUtf8("combustible_barra"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combustible_barra->sizePolicy().hasHeightForWidth());
        combustible_barra->setSizePolicy(sizePolicy);
        combustible_barra->setMinimumSize(QSize(30, 400));
        combustible_barra->setMaximumSize(QSize(16777215, 16777215));
        combustible_barra->setSizeIncrement(QSize(0, 300));
        QFont font;
        font.setUnderline(true);
        combustible_barra->setFont(font);
        combustible_barra->setValue(24);

        verticalLayout->addWidget(combustible_barra, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(juego);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMaximumSize(QSize(2200, 700));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        puntuacion = new QPushButton(juego);
        puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ladrillo2.png"), QSize(), QIcon::Active, QIcon::On);
        puntuacion->setIcon(icon1);
        puntuacion->setIconSize(QSize(50, 50));

        verticalLayout_2->addWidget(puntuacion, 0, Qt::AlignHCenter);

        label_2 = new QLabel(juego);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(juego);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(80, 80));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/oxigeno_barra.png")));

        verticalLayout_2->addWidget(label_3);

        oxigeno_barra = new QProgressBar(juego);
        oxigeno_barra->setObjectName(QString::fromUtf8("oxigeno_barra"));
        sizePolicy.setHeightForWidth(oxigeno_barra->sizePolicy().hasHeightForWidth());
        oxigeno_barra->setSizePolicy(sizePolicy);
        oxigeno_barra->setMinimumSize(QSize(30, 400));
        oxigeno_barra->setValue(24);

        verticalLayout_2->addWidget(oxigeno_barra, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(juego);

        QMetaObject::connectSlotsByName(juego);
    } // setupUi

    void retranslateUi(QDialog *juego)
    {
        juego->setWindowTitle(QApplication::translate("juego", "Dialog", nullptr));
        regresar->setText(QString());
        label->setText(QApplication::translate("juego", "TextLabel", nullptr));
        label_4->setText(QString());
        puntuacion->setText(QString());
        label_2->setText(QApplication::translate("juego", "TextLabel", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class juego: public Ui_juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
