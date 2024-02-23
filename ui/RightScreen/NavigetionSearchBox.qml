import QtQuick 2.0

Rectangle {
    id: navSearchBox
    radius: 5
    color: "#ede9e8"

    Image{
        id: searchIcon

        anchors {
            left: parent.left
            leftMargin: 25
            verticalCenter: parent.verticalCenter
        }

        height: parent.height * .45
        fillMode: Image.PreserveAspectFit

        source: "qrc:/ui/assets/search.png"
    }
}
