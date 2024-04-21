#include "testreceiver.h"
#include <QDebug>

TestReceiver::TestReceiver(QObject *parent)
    : QObject{parent}
{}

void TestReceiver::testSlot()
{
    qDebug()<<"Slot for testSignal()";
}
