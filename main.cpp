#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>
#include <QQmlContext>
#include "robot.h"
#include "RobotManager.h"
#include <QTimer>
#include "proto_listener.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    //Sets up the application icon
    QIcon icon(QPixmap("src/img/logo-vermelha2"));
    app.setWindowIcon(icon);

    //Initializes the QML app engine for loading the UI
    QQmlApplicationEngine engine;

    //Makes it so the robot class can be seen by the qml files
    qmlRegisterType<Robot>("com.example.robot", 1, 0, "Robot");

    //creating robot manager and making it visible by qml
    RobotManager* robotManager = new RobotManager(&app);
    engine.rootContext()->setContextProperty("robotManager", robotManager);

    //qml error checking
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    //protocol listener
    ProtoListener* protoListener = new ProtoListener(robotManager, &app);
    protoListener->startListeningVision(10020);

    //initialize the UI
    engine.loadFromModule("RedRefC", "Main");

    //qml load check
    if (engine.rootObjects().isEmpty()) {
        qCritical("Failed to load QML file.");
        return -1;  // Exit if QML load fails
    }
    return app.exec(); //QT event loop
}
