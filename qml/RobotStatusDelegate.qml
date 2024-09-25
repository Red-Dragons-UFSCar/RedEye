import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    width: parent.width
    height: 50

    // Declare custom properties
    property int robotId
    property real robotX
    property real robotY
    property real robotSpeed
    property bool isConnected

    Rectangle {
        width: parent.width + 400
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
                text: "Robot ID: " + robotId
                font.bold: true
                font.pointSize: 16
            }

            // Robot Coordinates
            Text {
                text: "X: " + robotX.toFixed(2) + " Y: " + robotY.toFixed(2)
                font.pointSize: 14
            }

            // Robot Speed
            Text {
                text: "Speed: " + robotSpeed.toFixed(2) + " m/s"
                font.pointSize: 14
            }

            // Connection Status
            Text {
                text: isConnected ? "Connected" : "Disconnected"
                font.pointSize: 14
                color: isConnected ? "green" : "red"
            }
        }
    }
}
