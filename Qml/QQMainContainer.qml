import QtQuick 2.0
import QtQuick.Controls 2.13

Rectangle {
    id: mainContainer
    width: 640
    height: 480
    color: "#ffffff"
    border.color: "#ffffff"
    anchors.fill: parent

    Button {
        id: button
        text: qsTr("Service start")
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 8
        onClicked: {
            QCMainForm.serviceStart()
        }
    }

    Button {
        id: button1
        text: qsTr("Service stop")
        anchors.top: button.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 8
        onClicked: {
            QCMainForm.serviceStop()
        }
    }
}
