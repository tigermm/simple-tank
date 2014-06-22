import QtQuick 2.0

Rectangle {
    width: 500
    height: 500
    Image {
        id: tank
        source: "tank.png"
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {

        }
    }
}
