#ifndef PROTO_LISTENER_H
#define PROTO_LISTENER_H

#include <QObject>
#include "./communication/protobuf/ssl_vision_wrapper.pb.h"
#include "./communication/protobuf/ssl_eletro_UI.pb.h"
#include <QUdpSocket>
#include "RobotManager.h"

class ProtoListener : public
                       QObject {
    Q_OBJECT

public:
    ProtoListener(RobotManager* manager, QObject* parent = nullptr);
    ~ProtoListener();



    void startListeningElectro(int portElectro);
    void startListeningVision(int portVisao);

signals:
    void visionDataRecieved();
    void electronicDataRecieved();

private slots:
    void onVisionDataReceived();
    void onElectronicDataReceived();

private:
    RobotManager* m_manager;
    QUdpSocket* m_socket_vision;
    QUdpSocket* m_socket_electronic;

    void processVisionMessage(const QByteArray& data);
    void processElectronicMessage(const QByteArray& data);




};


#endif // PROTO_LISTENER_H
