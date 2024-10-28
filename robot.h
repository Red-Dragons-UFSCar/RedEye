#ifndef ROBOT_H
#define ROBOT_H

#include <QObject>

class Robot : public QObject{
    Q_OBJECT

    // Define QML properties
    Q_PROPERTY(QString robotId READ robotId WRITE setRobotId NOTIFY robotIdChanged)
    Q_PROPERTY(double x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(double y READ y WRITE setY NOTIFY yChanged)
    Q_PROPERTY(double speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_PROPERTY(bool connectionStatus READ connectionStatus WRITE setConnectionStatus NOTIFY connectionStatusChanged)
    Q_PROPERTY(double current READ current WRITE setCurrent NOTIFY currentChanged)
    Q_PROPERTY(int signalQuality READ signalQuality WRITE setSignalQuality NOTIFY signalQualityChanged)

public:
    explicit Robot(QObject *parent = nullptr, QString Ident = 0) : QObject(parent),
        m_robotId(Ident), m_x(0), m_y(0), m_speed(0), m_connectionStatus(false), m_current(0.0), m_signalQuality(0) {}

    // Getters
    QString robotId() const { return m_robotId; }
    double x() const { return m_x; }
    double y() const { return m_y; }
    double speed() const { return m_speed; }
    bool connectionStatus() const { return m_connectionStatus; }
    double current() const { return m_current; }
    int signalQuality() const { return m_signalQuality; }

    // Setters
    void setRobotId(const QString &robotId) {
        if (m_robotId != robotId) {
            m_robotId = robotId;
            emit robotIdChanged();
        }
    }
    void setX(double x) {
        if (m_x != x) {
            m_x = x;
            emit xChanged();
        }
    }
    void setY(double y) {
        if (m_y != y) {
            m_y = y;
            emit yChanged();
        }
    }
    void setSpeed(double speed) {
        if (m_speed != speed) {
            m_speed = speed;
            emit speedChanged();
        }
    }
    void setConnectionStatus(bool status) {
        if (m_connectionStatus != status) {
            m_connectionStatus = status;
            emit connectionStatusChanged();
        }
    }
    void setCurrent(double current) {
        if (m_current != current) {
            m_current = current;
            emit currentChanged();
        }
    }
    void setSignalQuality(int quality) {
        if (m_signalQuality != quality) {
            m_signalQuality = quality;
            emit signalQualityChanged();
        }
    }

signals:
    void robotIdChanged();
    void xChanged();
    void yChanged();
    void speedChanged();
    void connectionStatusChanged();
    void currentChanged();
    void signalQualityChanged();

private:
    QString m_robotId;
    double m_x;
    double m_y;
    double m_speed;
    bool m_connectionStatus;
    double m_current;
    int m_signalQuality;
};

#endif // ROBOT_H
