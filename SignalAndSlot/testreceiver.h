#ifndef TESTRECEIVER_H
#define TESTRECEIVER_H

#include <QObject>

class TestReceiver : public QObject
{
    Q_OBJECT
public:
    explicit TestReceiver(QObject *parent = nullptr);

public slots:
    void testSlot();
};

#endif // TESTRECEIVER_H
