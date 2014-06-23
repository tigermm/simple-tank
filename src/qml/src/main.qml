import QtQuick 2.0

Rectangle {
    width : 900
    height : 500
    color : "black"
    Item {
        id: tank
        x : 430
        y : 420
        focus: true
        Image {
            source: "tank.png"
        }
        Keys.onLeftPressed: {
            x -=20
        }
        Keys.onUpPressed: {
            y -=20
        }
        Keys.onRightPressed: {
            x += 20
        }
        Keys.onDownPressed: {
            y +=20
        }
    }


}
