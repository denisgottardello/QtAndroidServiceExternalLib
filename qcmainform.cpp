#include "qcmainform.h"

QCMainForm::QCMainForm(QObject *parent) : QQmlApplicationEngine(parent) {
    this->rootContext()->setContextProperty("QCMainForm", this);
    this->load(QUrl(QStringLiteral("qrc:///Qml/main.qml")));
    qInfo() << "QCMainForm::QCMainForm()1";
    qInfo() << "QCMainForm::QCMainForm()2";
    qInfo() << "QCMainForm::QCMainForm()3";
    qInfo() << "QCMainForm::QCMainForm()4";
    qInfo() << "QCMainForm::QCMainForm()5";
    qInfo() << "QCMainForm::QCMainForm()6";
}

QCMainForm::~QCMainForm() {
    qInfo() << "QCMainForm::~QCMainForm()1";
    qInfo() << "QCMainForm::~QCMainForm()2";
    qInfo() << "QCMainForm::~QCMainForm()3";
    qInfo() << "QCMainForm::~QCMainForm()4";
    qInfo() << "QCMainForm::~QCMainForm()5";
    qInfo() << "QCMainForm::~QCMainForm()6";
}

void QCMainForm::serviceStart() {
    qInfo() << "QCMainForm::serviceStart()1";
    qInfo() << "QCMainForm::serviceStart()2";
    qInfo() << "QCMainForm::serviceStart()3";
    qInfo() << "QCMainForm::serviceStart()4";
    qInfo() << "QCMainForm::serviceStart()5";
    qInfo() << "QCMainForm::serviceStart()6";
    #ifdef Q_OS_LINUX
        #if defined(Q_OS_ANDROID)
            QAndroidJniObject::callStaticMethod<void>("it.denisgottardello.qtandroidserviceexternallib.QtAndroidService", "serviceStart", "(Landroid/content/Context;)V", QtAndroid::androidActivity().object());
        #else
        #endif
    #endif
}

void QCMainForm::serviceStop() {
    qInfo() << "QCMainForm::serviceStop()1";
    qInfo() << "QCMainForm::serviceStop()2";
    qInfo() << "QCMainForm::serviceStop()3";
    qInfo() << "QCMainForm::serviceStop()4";
    qInfo() << "QCMainForm::serviceStop()5";
    qInfo() << "QCMainForm::serviceStop()6";
    #ifdef Q_OS_LINUX
        #if defined(Q_OS_ANDROID)
            QAndroidJniObject::callStaticMethod<void>("it.denisgottardello.qtandroidserviceexternallib.QtAndroidService", "serviceStop", "(Landroid/content/Context;)V", QtAndroid::androidActivity().object());
        #else
        #endif
    #endif
}
