QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    formulario.cpp \
    juego.cpp \
    laberinto.cpp \
    main.cpp \
    mainwindow.cpp \
    puntuacion.cpp

HEADERS += \
    formulario.h \
    juego.h \
    laberinto.h \
    mainwindow.h \
    puntuacion.h

FORMS += \
    formulario.ui \
    juego.ui \
    mainwindow.ui \
    puntuacion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imagenes.qrc

DISTFILES += \
    nivel1
