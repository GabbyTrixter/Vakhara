TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CharacterList/Characterlist.cpp \
    CharacterList/Generalinfo.cpp \
    CharacterList/Inventory.cpp \
    CharacterList/Feats.cpp

HEADERS += \
    CharacterList/Characterlist.h \
    CharacterList/Generalinfo.h \
    CharacterList/Inventory.h \
    CharacterList/Feats.h
