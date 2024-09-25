import QtQuick 6.7
import QtQuick.Templates as T

T.Button {
    id: root
    width: 200
    height: 200
    state: "idle"
    checkable: true

    property alias buttonLabelText: buttonLabel.text

    Rectangle {
        id: buttonBack
        color: "#00ffffff"
        radius: 10
        border.color: "#333333"
        border.width: 4
        anchors.fill: parent
    }

    Text {
        id: buttonLabel
        text: qsTr("Text")
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 18
        font.family: FontManager.victorMonoFamily
        font.styleName: FontManager.boldFontStyle
        color: "black"
        anchors.horizontalCenter: parent.horizontalCenter
    }
    states: [
        State {
            name: "idle"
            when: !root.hovered && !root.checked
        },
        State {
            name: "hover"
            when: root.hovered && !root.checked

            PropertyChanges {
                target: buttonBack
                color: "#bdbdbd"
            }
        },
        State {
            name: "check"
            when: root.checked

            PropertyChanges {
                target: buttonBack
                color: "#000000"
                border.color: "#000000"
            }

            PropertyChanges {
                target: buttonLabel
                color: "#ffffff"
            }
        }
    ]
}
