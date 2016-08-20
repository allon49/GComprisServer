QT += network widgets

HEADERS       = server.h \
                messages.h \
                MyListener.h \
                DataStreamConverter.h

SOURCES       = server.cpp \
                main.cpp \
                MyListener.cpp

win32 {
    CONFIG += console
}
        
CONFIG += c++11
