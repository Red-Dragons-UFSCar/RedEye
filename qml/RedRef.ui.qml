

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

// framework imports
import QtQuick 6.7
import QtQuick.Controls 6.7
import QtQuick.Layouts




Item {
    id: root
    width: Constants.width
    height: Constants.height

    Rectangle {
        id: rectangle
        color: "white"
        anchors.fill: parent

        Text {
            id: galleryLabel
            x: 734
            y: 20
            text: qsTr("RED REFEREE 0.1")
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 40
            anchors.topMargin: 50
            font.pixelSize: 48
            font.styleName: "SemiBold"
            font.family: "Victor Mono"
        }

        ColumnLayout {
            id: mainMenu
            width: 300
            height: 300
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.leftMargin: 20
            anchors.topMargin: 200

            GalleryMenuButton {
                id: botao_robos
                height: 70
                highlighted: false
                flat: false
                autoExclusive: true
                checked: true
                buttonLabelText: "Robôs"
                Layout.fillWidth: true

                Connections {
                    target: botao_robos
                    onClicked: {
                        galleryPanel.currentIndex = 0
                        menuPanel.currentIndex = 0
                    }
                }
            }

            GalleryMenuButton {
                id: botao_codigo
                height: 70
                autoExclusive: true
                buttonLabelText: "Código"
                Layout.fillWidth: true

                Connections {
                    target: botao_codigo
                    onClicked: {
                        galleryPanel.currentIndex = 1
                        menuPanel.currentIndex = 1
                    }
                }
            }

            GalleryMenuButton {
                id: botao_sobre
                height: 70
                autoExclusive: true
                buttonLabelText: "Sobre"
                Layout.fillWidth: true

                Connections {
                    target: botao_sobre
                    onClicked: {
                        galleryPanel.currentIndex = 2
                        menuPanel.currentIndex = 2
                    }
                }
            }
        }

        Rectangle {
            id: splitter
            width: 300
            height: 5
            color: "#000000"
            anchors.bottom: mainMenu.bottom
            anchors.bottomMargin: -20
            anchors.horizontalCenter: mainMenu.horizontalCenter
        }

        StackLayout {
            id: menuPanel
            width: 300
            anchors.left: parent.left
            anchors.top: splitter.bottom
            anchors.bottom: parent.bottom
            anchors.leftMargin: 20
            anchors.topMargin: 20
            anchors.bottomMargin: 20
            currentIndex: 0

            ColumnLayout {
                id: submenu_robos
                Layout.fillWidth: true

                GalleryMenuButton {
                    id: submenu_robos_1
                    height: 70
                    autoExclusive: true
                    checked: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_1
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }

                GalleryMenuButton {
                    id: submenu_robos_2
                    height: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_2
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }

                GalleryMenuButton {
                    id: submenu_robos_4
                    height: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_4
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }

                GalleryMenuButton {
                    id: submenu_robos_3
                    height: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_3
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }
            }

            ColumnLayout {
                id: codigo_submenu
                visible: false
                Layout.fillWidth: true

                GalleryMenuButton {
                    id: codigo_submenu_1
                    height: 70
                    autoExclusive: true
                    checked: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: codigo_submenu_1
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }

                GalleryMenuButton {
                    id: codigo_submenu_2
                    height: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: codigo_submenu_2
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }

                GalleryMenuButton {
                    id: codigo_submenu_3
                    height: 70
                    Connections {
                        target: codigo_submenu_3
                        onClicked: galleryPanel.currentIndex = 0
                    }
                    buttonLabelText: "Botao"
                    autoExclusive: true
                    Layout.fillWidth: true
                }
            }

            ColumnLayout {
                id: sobre_submenu
                Layout.fillWidth: true

                GalleryMenuButton {
                    id: sobre_submenu_1
                    height: 70
                    autoExclusive: true
                    checked: true
                    buttonLabelText: "Botao"
                    Layout.fillWidth: true

                    Connections {
                        target: gMenu1
                        onClicked: galleryPanel.currentIndex = 0
                    }
                }
            }
        }

        StackLayout {
            id: galleryPanel
            anchors.left: menuPanel.right
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.leftMargin: 20
            anchors.rightMargin: 20
            anchors.topMargin: 200
            anchors.bottomMargin: 20
            currentIndex: 0

            Robo_view {
                id: robo_view
            }

            Robo_view {
                id: vis_cod
            }

            Robo_view {
                id: vis_sobre
            }
        }

        Image {
            id: logo_red
            width: 211
            height: 144
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.leftMargin: 65
            anchors.topMargin: 20
            source: "src/img/logo - vermelha 2.png"
            mipmap: true
            fillMode: Image.PreserveAspectFit
        }
    }
}
