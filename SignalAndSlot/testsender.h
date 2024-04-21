#ifndef TESTSENDER_H
#define TESTSENDER_H

#include <QObject>

class TestSender : public QObject
{
    Q_OBJECT
public:
    explicit TestSender(QObject *parent = nullptr);

signals:
    void testSignal();
};

#endif // TESTSENDER_H
