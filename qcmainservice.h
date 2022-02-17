#ifndef QCMAINSERVICE_H
#define QCMAINSERVICE_H

#include "QDebug"

class QCMainService : public QObject
{
    Q_OBJECT

public:
    explicit QCMainService(QObject *parent = nullptr);
    ~QCMainService();

private:

};

#endif // QCMAINSERVICE_H
