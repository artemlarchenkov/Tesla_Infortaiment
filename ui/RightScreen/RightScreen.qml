import QtQuick 2.0
import QtLocation 5.12
import QtPositioning 5.12

Rectangle {
    id: rightScreen

    anchors {
        top: parent.top
        bottom: bottomBar.top
        right:parent.right
    }
    Plugin {
        id: mapPlugin
        name: "osm"
    }

    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(37.46, -122.14) // Oslo
        zoomLevel: 14
    }

    Image{
        id: lockIcon
        anchors {
            left: parent.left
            top: parent.top
            margins: 20

        }
        width: parent.width / 30
        fillMode: Image.PreserveAspectFit
        source: ( systemHandler.carlocked ? "qrc:/ui/assets/lock.png" : "qrc:/ui/assets/unlock.png")
        MouseArea {
            anchors.fill: parent
            onClicked:  systemHandler.setcarlocked( !systemHandler.carlocked)
        }
    }

    Text {
        id: dateTimeDisplay
        anchors {
            left: lockIcon.right
            leftMargin: 40
            bottom: lockIcon.bottom
        }

        font.pixelSize: 12
        font.bold: true
        color: "black"

        text: systemHandler.currentTime
    }

     width: parent.width * 2/3
}
