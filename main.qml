import QtQuick 2.12
import QtQuick.Window 2.12
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tesla Infortaiment")

    LeftScreen {
        id: leftScreen
    }
    RightScreen {
        id: rightScreen
    }

    BottomBar{
        id: bottomBar
    }

}
