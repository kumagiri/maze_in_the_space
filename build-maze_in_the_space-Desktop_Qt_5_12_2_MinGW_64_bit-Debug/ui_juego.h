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
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_4;
    QProgressBar *progressBar;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QProgressBar *progressBar_2;

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
        pushButton = new QPushButton(juego);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(juego);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(juego);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/combustible_barraicono.png")));

        verticalLayout->addWidget(label_4);

        progressBar = new QProgressBar(juego);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(30, 400));
        progressBar->setMaximumSize(QSize(16777215, 16777215));
        progressBar->setSizeIncrement(QSize(0, 300));
        QFont font;
        font.setUnderline(true);
        progressBar->setFont(font);
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        horizontalLayout->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(juego);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_2 = new QPushButton(juego);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        label_2 = new QLabel(juego);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(juego);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(80, 80));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/oxigeno_barra.png")));

        verticalLayout_2->addWidget(label_3);

        progressBar_2 = new QProgressBar(juego);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        sizePolicy.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy);
        progressBar_2->setMinimumSize(QSize(30, 400));
        progressBar_2->setValue(24);

        verticalLayout_2->addWidget(progressBar_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(juego);

        QMetaObject::connectSlotsByName(juego);
    } // setupUi

    void retranslateUi(QDialog *juego)
    {
        juego->setWindowTitle(QApplication::translate("juego", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("juego", "PushButton", nullptr));
        label->setText(QApplication::translate("juego", "TextLabel", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("juego", "PushButton", nullptr));
        label_2->setText(QApplication::translate("juego", "TextLabel", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class juego: public Ui_juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
