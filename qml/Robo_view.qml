import QtQuick 2.15
import QtQuick.Controls 2.15

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
            model: 5  // Placeholder for number of robots, adjust as necessary
            delegate: RobotStatusDelegate {
                robotId: index + 1
                robotX: Math.random() * 100  // Placeholder values
                robotY: Math.random() * 100  // Placeholder values
                robotSpeed: Math.random() * 10  // Placeholder values
                isConnected: index % 2 == 0  // Alternate connected statuses for now
            }
        }
    }
}

/*##^##
Designer {
    D{i:0;formeditorColor:"#00000c"}
}
##^##*/
