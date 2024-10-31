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
        for (int i = 0; i < 7; ++i) {
            m_robots.append(new Robot(this, QString::number(i)));  // Create Robot instances and add them to the list
            if (i < 3){
                m_robots[i]->setColor("lightblue");
            }
            else if (i >= 3 && i != 6){
                m_robots[i]->setColor("yellow");
            }
            else {
                m_robots[i]->setColor("Orange");
            }
        }
    }

    QQmlListProperty<Robot> robots() {
        return QQmlListProperty<Robot>(this, &m_robots, &RobotManager::robotCount, &RobotManager::robotAt);
    }

    Q_INVOKABLE Robot* getRobot(int index) {
        if (index >= 0 && index < m_robots.size()) {
            return m_robots[index];
        }
        return nullptr;
    }

    void updateRobotPositionBlue(int robotId, double x, double y){
        m_robots[robotId]->setX(x);
        m_robots[robotId]->setY(y);
    }

    void updateRobotPositionYellow(int robotId, double x, double y){
        m_robots[robotId+3]->setX(x);
        m_robots[robotId+3]->setY(y);
    }

    void updateRobotPositionBall(int robotId, double x, double y){
        m_robots[6]->setX(x);
        m_robots[6]->setY(y);
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
