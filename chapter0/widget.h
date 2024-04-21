#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "testwidget.h"
#include "testdialog.h"

QT_BEGIN_NAMESPACE
//对应ui文件中的Widget类，所以需要名称空间Ui修饰，防止重名
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

//C++中的Widget类
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui; //指向Ui文件中Widget类的指针
    TestWidget* w;
    TestDialog* dia;
};
#endif // WIDGET_H
