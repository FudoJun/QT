#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout<<"Qt version: "<<qVersion()<<std::endl;
    qDebug() <<"Qt Version:"<<qVersion();
}
