#include "qcmainservice.h"
#ifdef Q_OS_LINUX
    #if defined(Q_OS_ANDROID)
        #include <QAndroidService>
    #else
        #include <QCoreApplication>
    #endif
#endif

int main(int argc, char *argv[]) {
    qInfo() << "QtAndroidLib01 main1";
    qInfo() << "QtAndroidLib01 main2";
    qInfo() << "QtAndroidLib01 main3";
    qInfo() << "QtAndroidLib01 main4";
    qInfo() << "QtAndroidLib01 main5";
    qInfo() << "QtAndroidLib01 main6";
    #ifdef Q_OS_LINUX
        #if defined(Q_OS_ANDROID)
            QAndroidService app(argc, argv);
        #else
            QCoreApplication app(argc, argv);
        #endif
    #endif
    new QCMainService();
    return app.exec();
    qInfo() << "QtAndroidLib01 main end1";
    qInfo() << "QtAndroidLib01 main end2";
    qInfo() << "QtAndroidLib01 main end3";
    qInfo() << "QtAndroidLib01 main end4";
    qInfo() << "QtAndroidLib01 main end5";
    qInfo() << "QtAndroidLib01 main end6";
}
