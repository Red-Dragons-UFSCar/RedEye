import QtQuick 2.15
import QtQuick.Controls 2.15
import com.example.robot 1.0
Item {
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
            height: parent.height * 0.8
            model: robotManager.robots  // Placeholder for number of robots, adjust as necessary
            delegate: RobotStatusDelegate {
                robotId: 0
                robotX: 0  // Placeholder values
                robotY: 0// Placeholder values
                robotSpeed: 0  // Placeholder values
                isConnected: false  // Alternate connected statuses for now
                current: 0
                latency: 0
                transmission: 0

            }
        }
    }
}

/*##^##
Designer {
    D{i:0;formeditorColor:"#00000c"}
}
##^##*/
