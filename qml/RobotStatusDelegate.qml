import QtQuick 2.15
import QtQuick.Controls 2.15
import com.example.robot 1.0
Item {
    width: parent.width
    height: 50

    // Declare custom properties
    property int robotId
    property real robotX
    property real robotY
    property real robotSpeed
    property bool isConnected
    property real current
    property int latency
    property real transmission


    Rectangle {
        width: parent.width + 800
        height: parent.height
        border.color: "lightgrey"
        color: "lightblue"
        radius: 10

        Row {
            spacing: 20
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.margins: 10

            // Robot ID
            Text {
                text: "Robot ID: " + robotManager.robots[index].robotId
                font.bold: true
                font.pointSize: 16
            }

            // Robot Coordinates
            Text {
                text: "X: " + robotManager.robots[index].x + " Y: " + robotManager.robots[index].y
                font.pointSize: 14
            }

            // Robot Speed
            Text {
                text: "Speed: " + robotManager.robots[index].speed
                font.pointSize: 14
            }

            // Connection Status
            Text {
                text: robotManager.robots[index].connectionStatus ? "Connected" : "Disconnected"
                font.pointSize: 14
                color: robotManager.robots[index].connectionStatus ? "green" : "red"
            }

            Text {
                text: "Corrente: " + robotManager.robots[index].current
                font.pointSize: 14

            }

            Text{
                text: "Latencia: " + robotManager.robots[index].latency
                font.pointSize: 14
            }

            Text{
                text: "Qualidade: " + robotManager.robots[index].signalQuality
                font.pointSize: 14
            }
        }
    }
}
