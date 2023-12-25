import QtQuick 2.0
<<<<<<< HEAD
import QtLocation 5.12
import QtPositioning 5.12
=======
>>>>>>> e2335bd321e4dc21174baf6ca90a44bb9e4de38c

Rectangle {
    id: rightScreen

    anchors {
        top: parent.top
        bottom: bottomBar.top
        right:parent.right
    }
<<<<<<< HEAD
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
     width: parent.width * 2/3
=======
    color: "orange"
    width: parent.width * 2/3
>>>>>>> e2335bd321e4dc21174baf6ca90a44bb9e4de38c
}
