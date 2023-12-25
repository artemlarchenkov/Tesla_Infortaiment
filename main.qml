import QtQuick 2.12
import QtQuick.Window 2.12
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"

Window {
    visible: true
<<<<<<< HEAD
    width: 1280
    height: 720
=======
    width: 640
    height: 480
>>>>>>> e2335bd321e4dc21174baf6ca90a44bb9e4de38c
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
