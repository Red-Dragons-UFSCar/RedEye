import QtQuick 2.15

import com.example.robot 1.0
Item {
    id: roboView
    width: 800
    height: 600

    Column {
        anchors.left: parent.left
        spacing: 20

        // Title for the panel
        Text {
            text: "Status Robos"
            font.pointSize: 24
            horizontalAlignment: Text.AlignHCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // List of robots in a Repeater for scalability
        ListView {
            width: parent.width
            height: parent.height * 0.9
            model: robotManager.robots // Placeholder for number of robots, adjust as necessary
            delegate: RobotStatusDelegate {


            }
        }
    }
}

/*##^##
Designer {
    D{i:0;formeditorColor:"#00000c"}
}
##^##*/
