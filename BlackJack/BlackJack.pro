QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        src/card.cpp \
        src/deck.cpp \
        src/game.cpp \
        src/genericplayer.cpp \
        src/hand.cpp \
        src/house.cpp \
        src/main.cpp \
        src/player.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Include/card.h \
    Include/deck.h \
    Include/game.h \
    Include/genericplayer.h \
    Include/hand.h \
    Include/house.h \
    Include/player.h \
