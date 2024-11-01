/* Campo de futebol de robos SSL-EL
Por: Pedro Lealdini
*/

import QtQuick 2.15
import QtQuick.Controls 2.15
import com.example.robot 1.0
import "../utils/utils.js" as Utils

Rectangle {
    id: fieldMap
    width: 800
    height: 600
    color: "green" //grass color

    //Field Boundaries
    Rectangle{
        anchors.fill: parent
        anchors.margins: 10
        border.color: "white"
        border.width: 2
        color: "transparent"
    }

    //Display Robots
    Repeater {
        model: robotManager.robots

        Rectangle {
            width: 60
            height: 60
            color: model.color
            radius: width/2

            x: Utils.mapToFieldX(model.x, fieldMap.width)
            y: Utils.mapToFieldY(model.y, fieldMap.height)

            Text {
                text: model.robotId
                anchors.centerIn: parent
                color: "black"
                font.bold: true
            }
        }


    }

    // Display the ball as a small circle (assuming it's represented as a robot with ID 6)
    Rectangle {
        width: 10
        height: 10
        color: "orange"
        radius: width / 2
        x: Utils.mapToFieldX(robotManager.getRobot(6).x, fieldMap.width)
        y: Utils.mapToFieldY(robotManager.getRobot(6).y, fieldMap.height)

        }

}
