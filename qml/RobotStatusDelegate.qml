import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: robotStatusDelegate
    width: parent.width
    height: 50

    Rectangle {
        width: parent.width + 800
        height: parent.height
        border.color: "lightgrey"
        color: model.color  // Access color directly from model
        radius: 10

        Row {
            spacing: 20
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.margins: 10

            // Robot ID
            Text {
                text: "Robot ID: " + model.robotId
                font.bold: true
                font.pointSize: 16
            }

            // Robot Coordinates
            Text {
                text: "X: " + model.x + " Y: " + modelData.y
                font.pointSize: 14
            }

            // Robot Speed
            Text {
                text: "Speed: " + model.speed
                font.pointSize: 14
            }

            // Connection Status
            Text {
                text: modelData.isConnected ? "Connected" : "Disconnected"
                font.pointSize: 14
                color: modelData.isConnected ? "green" : "red"
            }

            Text {
                text: "Current: " + model.current
                font.pointSize: 14
            }

            Text {
                text: "Latency: " + model.latency
                font.pointSize: 14
            }

            Text {
                text: "Signal Quality: " + model.transmission
                font.pointSize: 14
            }
        }
    }
}
