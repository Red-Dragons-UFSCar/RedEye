#ifndef ROBOT_H
#define ROBOT_H

#include <QObject>

class Robot : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int speed READ speed WRITE setSpeed NOTIFY speedChanged FINAL)
    Q_PROPERTY(QString robotID READ robotID WRITE setRobotID NOTIFY robotIDChanged FINAL)
    Q_PROPERTY(type name READ name WRITE setname NOTIFY nameChanged FINAL)
public:
    explicit Robot(QObject *parent = nullptr);

signals:
};

#endif // ROBOT_H
