#ifndef PROTO_LISTENER_H
#define PROTO_LISTENER_H

#include <QObject>
#include "./communication/protobuf/ssl_vision_wrapper.pb.h"
#include "./communication/protobuf/ssl_eletro_UI.pb.h"
#include <QUdpSocket>
#include "RobotManager.h"

class Proto_Listener : public
                       QObject {
    Q_OBJECT

public:
    Proto_Listener(RobotManager* manager, QObject* parent = nullptr);
    ~Proto_Listener();



    void startListeningEletro(int portEletro);
    void startListeningVisao(int portVisao);

signals:
    void visionDataRecieved();
    void electronicDataRecieved();

private slots:
    void onVisionDataRecieved();
    void onElectronicDataRecieved();

private:
    RobotManager* manager;
    QUdpSocket* socket_vision;
    QUdpSocket* socket_eletronic;

    void process_vision_message(QByteArray data);
    void process_electronic_message(QByteArray data);




};


#endif // PROTO_LISTENER_H
