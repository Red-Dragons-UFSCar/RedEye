import QtQuick 6.7
import QtQuick.Templates as T
import DesignEffectsDemo

T.Button {
    id: root
    width: 200
    height: 200
    state: "idle"

    property alias buttonLabelText: buttonLabel.text

    Rectangle {
        id: buttonBack
        color: "#000000"
        radius: 10
        border.color: "#000000"
        border.width: 4
        anchors.fill: parent
    }

    Text {
        id: buttonLabel
        color: "#ffffff"
        text: qsTr("Text")
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 18
        font.styleName: "SemiBold"
        font.family: "Victor Mono"
        anchors.horizontalCenter: parent.horizontalCenter
    }
    states: [
        State {
            name: "idle"
            when: !root.hovered && !root.pressed
        },
        State {
            name: "hover"
            when: root.hovered && !root.pressed

            PropertyChanges {
                target: buttonBack
                border.color: "#ffffff"
            }
        },
        State {
            name: "press"
            when: root.pressed

            PropertyChanges {
                target: buttonBack
                color: "#ffffff"
                border.color: "#ffffff"
            }

            PropertyChanges {
                target: buttonLabel
                color: "#000000"
            }
        }
    ]
}
