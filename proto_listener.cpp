#include "proto_listener.h"

ProtoListener::ProtoListener(RobotManager* manager, QObject *parent)
    : QObject{parent},
    m_manager(manager),
    m_socket_electronic(new QUdpSocket(this)),
    m_socket_vision(new QUdpSocket(this))
{
    connect(m_socket_electronic, &QUdpSocket::readyRead, this, &ProtoListener::onElectronicDataReceived);
    connect(m_socket_vision, &QUdpSocket::readyRead, this, &ProtoListener::onVisionDataReceived);
}

ProtoListener::~ProtoListener(){
    m_socket_electronic->close();
    m_socket_vision->close();
}

void ProtoListener::startListeningElectro(int portElectro){
    m_socket_electronic->connectToHost("localhost", portElectro);
}

void ProtoListener::startListeningVision(int portVision){
    m_socket_vision->connectToHost("localhost", portVision);

}

void ProtoListener::onElectronicDataReceived(){
    QByteArray data = m_socket_electronic->readAll();
    processElectronicMessage(data);
}

void ProtoListener::onVisionDataReceived(){
    QByteArray data = m_socket_vision->readAll();
    processVisionMessage(data);
}

void ProtoListener::processElectronicMessage(const QByteArray& data){
    SSL_

}

