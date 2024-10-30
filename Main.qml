// framework imports
import QtQuick 6.7
import QtQuick.Controls 6.7
import QtQuick.Layouts
import "./qml"


ApplicationWindow {
    id: root

    width: 1920
    height: 1080
    visible: true

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
            //font.family: FontManager.victorMonoFamily
            //font.styleName: FontManager.boldFontStyle
            font.pixelSize: 48
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
                implicitHeight: 70
                highlighted: false
                flat: false
                autoExclusive: true
                checked: true
                buttonLabelText: "Robôs"
                Layout.fillWidth: true

                Connections {
                    target: botao_robos
                    function onClicked() {
                        galleryPanel.currentIndex = 0
                        menuPanel.currentIndex = 0
                    }
                }
            }

            GalleryMenuButton {
                id: botao_codigo
                implicitHeight: 70
                autoExclusive: true
                buttonLabelText: "Código"
                Layout.fillWidth: true

                Connections {
                    target: botao_codigo
                    function onClicked() {
                        galleryPanel.currentIndex = 1
                        menuPanel.currentIndex = 1
                    }
                }
            }

            GalleryMenuButton {
                id: botao_sobre
                implicitHeight: 70
                autoExclusive: true
                buttonLabelText: "Sobre"
                Layout.fillWidth: true

                Connections {
                    target: botao_sobre
                    function onClicked(){
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
                    implicitHeight: 70
                    autoExclusive: true
                    checked: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_1
                        function onClicked() {galleryPanel.currentIndex = 0}
                    }
                }

                GalleryMenuButton {
                    id: submenu_robos_2
                    implicitHeight: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_2
                        function onClicked() {galleryPanel.currentIndex = 0}
                    }
                }

                GalleryMenuButton {
                    id: submenu_robos_4
                    implicitHeight: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_4
                        function onClicked() {galleryPanel.currentIndex = 0}
                    }
                }

                GalleryMenuButton {
                    id: submenu_robos_3
                    implicitHeight: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: submenu_robos_3
                        function onClicked() {galleryPanel.currentIndex = 0}
                    }
                }
            }

            ColumnLayout {
                id: codigo_submenu
                visible: false
                Layout.fillWidth: true

                GalleryMenuButton {
                    id: codigo_submenu_1
                    implicitHeight: 70
                    autoExclusive: true
                    checked: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: codigo_submenu_1
                        function onClicked() {galleryPanel.currentIndex = 0}
                    }
                }

                GalleryMenuButton {
                    id: codigo_submenu_2
                    implicitHeight: 70
                    autoExclusive: true
                    Layout.fillWidth: true
                    buttonLabelText: "Botao"

                    Connections {
                        target: codigo_submenu_2
                        function onClicked() {galleryPanel.currentIndex = 0}
                    }
                }

                GalleryMenuButton {
                    id: codigo_submenu_3
                    implicitHeight: 70
                    Connections {
                        target: codigo_submenu_3
                        function onClicked() {galleryPanel.currentIndex = 0}
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
                    implicitHeight: 70
                    autoExclusive: true
                    checked: true
                    buttonLabelText: "Botao"
                    Layout.fillWidth: true

                    Connections {
                        target: sobre_submenu_1
                        function onClicked() {galleryPanel.currentIndex = 0}
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
                id: vis_sobre
            }

            Text {
                id: vis_cod
                color: "black"
                text: "Red Referee, o brabo. \n Por: Lealdini"
                Layout.leftMargin: 734
                Layout.topMargin: 250
                font.pixelSize: 50
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
            source: "qrc:/src/img/logo-vermelha2.png"
            mipmap: true
            fillMode: Image.PreserveAspectFit
        }
    }
}
