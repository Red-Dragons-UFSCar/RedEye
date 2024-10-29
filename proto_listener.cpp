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

void ProtoListener::startListeningElectro(int portElectro) {
    // Bind to localhost on the specified port for the electronic data
    if (!m_socket_electronic->bind(QHostAddress::LocalHost, portElectro)) {
        qWarning() << "Failed to bind electronic socket on port" << portElectro;
    } else {
        qDebug() << "Listening for electronic data on port" << portElectro;
    }
}

void ProtoListener::startListeningVision(int portVision) {
    // Bind to localhost on the specified port for the vision data
    if (!m_socket_vision->bind(QHostAddress::LocalHost, portVision)) {
        qWarning() << "Failed to bind vision socket on port" << portVision;
    } else {
        qDebug() << "Listening for vision data on port" << portVision;
    }
}

void ProtoListener::onElectronicDataReceived(){
    QByteArray data = m_socket_electronic->readAll();
    processElectronicMessage(data);
}

void ProtoListener::onVisionDataReceived(){
    QByteArray data = m_socket_vision->readAll();
    processVisionMessage(data);
}

void ProtoListener::processElectronicMessage(const QByteArray& data) {
    SSL_eletronica robotMessage;
    if (robotMessage.ParseFromArray(data.data(), data.size())) {
        // just an empty method for now
        std::cout << "pass";
    }
}

void ProtoListener::processVisionMessage(const QByteArray& data) {
    SSL_WrapperPacket visionMessage;
    if (visionMessage.ParseFromArray(data.data(), data.size())) {
        // Process robots
        for (const auto& robot : visionMessage.detection().robots_blue()) {
            int robotId = robot.robot_id();
            double x = robot.x();
            double y = robot.y();
            m_manager->updateRobotPosition(robotId, x, y);  // Custom method in RobotManager
        }

        for (const auto& robot : visionMessage.detection().robots_yellow()) {
            int robotId = robot.robot_id();
            double x = robot.x();
            double y = robot.y();
            m_manager->updateRobotPosition(robotId, x, y);
        }

        // Process the ball as a "robot" with ID 0
        if (!visionMessage.detection().balls().empty()) {
            double x = visionMessage.detection().balls(0).x();
            double y = visionMessage.detection().balls(0).y();
            m_manager->updateRobotPosition(0, x, y);  // Using ID 0 for the ball
        }
    }
}

