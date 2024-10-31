#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>
#include <QQmlContext>
#include "robot.h"
#include "RobotManager.h"
#include <QTimer>
#include "proto_listener.h"
// Assuming you have a `RobotManager` pointer named `robotManager`
void incrementRobotSpeed(RobotManager *robotManager) {
    QTimer *timer = new QTimer();

    QObject::connect(timer, &QTimer::timeout, [robotManager]() {
        Robot *firstRobot = robotManager->getRobot(0);  // Get the first robot

        if (firstRobot) {
            qDebug() << "increasing speed";
            firstRobot->setSpeed(firstRobot->speed() + 1);  // Increment speed by 1
            firstRobot->setX(firstRobot->x() + 1);
            firstRobot->connectionStatus() ? firstRobot->setConnectionStatus(false) : firstRobot->setConnectionStatus(true);

        }
    });

    timer->start(3000);  // 3000 ms = 3 seconds
}


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

    //incrementRobotSpeed(robotManager);

    //protocol listener
    ProtoListener* protoListener = new ProtoListener(robotManager, &app);
    protoListener->startListeningVision(10020);

    //initialize the UI
    engine.loadFromModule("RedRefC", "Main");
    if (engine.rootObjects().isEmpty()) {
        qCritical("Failed to load QML file.");
        return -1;  // Exit if QML load fails
    }
    return app.exec(); //QT event loop
}
