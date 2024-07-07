#-------------------------------------------------
#
# Project created by QtCreator 2023-07-10T10:32:05
#
#-------------------------------------------------

QT       += core gui network serialport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS += -std=c++11

TARGET = longson
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mqtt/qmqtt_client.cpp \
    mqtt/qmqtt_client_p.cpp \
    mqtt/qmqtt_frame.cpp \
    mqtt/qmqtt_message.cpp \
    mqtt/qmqtt_network.cpp \
    mqtt/qmqtt_router.cpp \
    mqtt/qmqtt_routesubscription.cpp \
    mqtt/qmqtt_socket.cpp \
    mqtt/qmqtt_ssl_socket.cpp \
    mqtt/qmqtt_timer.cpp \
    mqtt/qmqtt_websocket.cpp \
    mqtt/qmqtt_websocketiodevice.cpp \
    nodeone.cpp \
    nodetwo.cpp \
    nodethr.cpp \
    setting.cpp \
    mywork.cpp \
    nodeoneline.cpp \
    nodetwoline.cpp \
    nodethrline.cpp

HEADERS  += widget.h \
    mqtt/qmqtt.h \
    mqtt/qmqtt_client.h \
    mqtt/qmqtt_client_p.h \
    mqtt/qmqtt_frame.h \
    mqtt/qmqtt_global.h \
    mqtt/qmqtt_message.h \
    mqtt/qmqtt_message_p.h \
    mqtt/qmqtt_network_p.h \
    mqtt/qmqtt_networkinterface.h \
    mqtt/qmqtt_routedmessage.h \
    mqtt/qmqtt_router.h \
    mqtt/qmqtt_routesubscription.h \
    mqtt/qmqtt_socket_p.h \
    mqtt/qmqtt_socketinterface.h \
    mqtt/qmqtt_ssl_socket_p.h \
    mqtt/qmqtt_timer_p.h \
    mqtt/qmqtt_timerinterface.h \
    mqtt/qmqtt_websocket_p.h \
    mqtt/qmqtt_websocketiodevice_p.h \
    nodeone.h \
    nodetwo.h \
    nodethr.h \
    setting.h \
    mywork.h \
    nodeoneline.h \
    nodetwoline.h \
    nodethrline.h

FORMS    += widget.ui \
    nodeone.ui \
    nodetwo.ui \
    nodethr.ui \
    setting.ui \
    nodeoneline.ui \
    nodetwoline.ui \
    nodethrline.ui

SUBDIRS += \
    mqtt/qmqtt.pro \
    mqtt/qmqtt.pro

DISTFILES += \
    mqtt/qmqtt.pri \
    mqtt/qmqtt.qbs

RESOURCES += \
    pic.qrc
