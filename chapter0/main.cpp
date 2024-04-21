#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //应用程序类对象，在一个qt应用程序中，该对象只有一个
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //阻塞函数，程序进入事件循环
    return a.exec();
}
