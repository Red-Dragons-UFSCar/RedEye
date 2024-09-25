// Este Arq

pragma Singleton

import QtQuick 6.7

Item {
    // Loads all font styles
    FontLoader {
        source: "qrc:/fonts/VictorMono-Regular.ttf"
    }

    FontLoader {
        source: "qrc:/fonts/VictorMono-Bold.ttf"
    }

    FontLoader {
        source: "qrc:/fonts/VictorMono-SemiBold.ttf"
    }

    FontLoader {
        source: "qrc:/fonts/VictorMono-Light.ttf"
    }

    FontLoader {
        source: "qrc:/fonts/VictorMono-Medium.ttf"
    }

    FontLoader {
        source: "qrc:/fonts/TitilliumWeb-Bold.ttf"
    }

    // Exposes font names as properties
    property string regularFontFamily: "Victor Mono"
    property string boldFontFamily: "Victor Mono"
    property string semiBoldFontFamily: "Victor Mono"
    property string lightFontFamily: "Victor Mono"
    property string mediumFontFamily: "Victor Mono"
    property string titilliumBoldFontFamily: "Titillium Web"

    // Exposes font style names
    property string boldFontStyle: "Bold"
    property string semiBoldFontStyle: "SemiBold"
    property string lightFontStyle: "Light"
    property string mediumFontStyle: "Medium"

}
