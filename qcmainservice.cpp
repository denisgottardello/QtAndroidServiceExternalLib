#include "qcmainservice.h"

QCMainService::QCMainService(QObject *) {
    qInfo() << "QCMainService::QCMainService()1";
    qInfo() << "QCMainService::QCMainService()2";
    qInfo() << "QCMainService::QCMainService()3";
    qInfo() << "QCMainService::QCMainService()4";
    qInfo() << "QCMainService::QCMainService()5";
    qInfo() << "QCMainService::QCMainService()6";
}

QCMainService::~QCMainService() {
    qInfo() << "QCMainService::~QCMainService()6";
    qInfo() << "QCMainService::~QCMainService()5";
    qInfo() << "QCMainService::~QCMainService()4";
    qInfo() << "QCMainService::~QCMainService()3";
    qInfo() << "QCMainService::~QCMainService()2";
    qInfo() << "QCMainService::~QCMainService()1";
}
