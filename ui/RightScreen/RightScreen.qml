import QtQuick 2.0

Rectangle {
    id: rightScreen

    anchors {
        top: parent.top
        bottom: bottomBar.top
        right:parent.right
    }
    color: "orange"
    width: parent.width * 2/3
}
