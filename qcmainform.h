#ifndef QCMAINFORM_H
#define QCMAINFORM_H

#include "QDebug"
#include <QQmlApplicationEngine>
#include "QQmlContext"
#ifdef Q_OS_LINUX
    #if defined(Q_OS_ANDROID)
        #include <QtAndroidExtras/QAndroidJniObject>
        #include "QtAndroid"
        #include "QAndroidJniEnvironment"
    #else
    #endif
#endif

class QCMainForm : public QQmlApplicationEngine
{
    Q_OBJECT

public:
    explicit QCMainForm(QObject *parent = nullptr);
    ~QCMainForm();
    Q_INVOKABLE void serviceStart();
    Q_INVOKABLE void serviceStop();

signals:
    void serviceState(QString State);

private:

};

#endif // QCMAINFORM_H
