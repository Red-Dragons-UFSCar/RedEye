#ifndef ROBOTMANAGER_H
#define ROBOTMANAGER_H

#include <iostream>
#include <QObject>
#include <QQmlListProperty>
#include <QtQuick>
#include "robot.h"

class RobotManager : public QObject {
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Robot> robots READ robots CONSTANT)

public:
    explicit RobotManager(QObject *parent = nullptr) : QObject(parent) {
        for (int i = 0; i < 6; ++i) {
            m_robots.append(new Robot(this, QString::number(i)));  // Create Robot instances and add them to the list
        }
    }

    QQmlListProperty<Robot> robots() {
        return QQmlListProperty<Robot>(this, &m_robots, &RobotManager::robotCount, &RobotManager::robotAt);
    }

    Robot* getRobot(int index) {
        if (index >= 0 && index < m_robots.size()) {
            return m_robots[index];
        }
        return nullptr;
    }

    void updateRobotPosition(int robotId, double x, double y){
        std::cout << robotId << x << y;
    }

private:
    QList<Robot*> m_robots;

    // Static functions for QQmlListProperty
    static qsizetype robotCount(QQmlListProperty<Robot> *list) {
        return reinterpret_cast<QList<Robot*>*>(list->data)->size();
    }

    static Robot *robotAt(QQmlListProperty<Robot> *list, qsizetype index) {
        return reinterpret_cast<QList<Robot*>*>(list->data)->at(index);
    }
};

#endif // ROBOTMANAGER_H
