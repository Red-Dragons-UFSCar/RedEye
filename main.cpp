#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>
#include <QQmlContext>
#include "robot.h"
#include "RobotManager.h"
#include <QTimer>

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
    QIcon icon(QPixmap("src/img/logo-vermelha2"));
    app.setWindowIcon(icon);
    QQmlApplicationEngine engine;

    qmlRegisterType<Robot>("com.example.robot", 1, 0, "Robot");

    RobotManager robotManager;
    engine.rootContext()->setContextProperty("robotManager", &robotManager);
    robotManager.getRobot(0);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    incrementRobotSpeed(&robotManager);
    engine.loadFromModule("RedRefC", "Main");

    return app.exec();
}
