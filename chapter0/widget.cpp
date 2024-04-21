#include "widget.h"
#include "./ui_widget.h"
#include "testwidget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this); //将2个同名的Widget类对象进行捆绑，然后将可以在Widget类中对ui界面进行操作

    //没有指定父窗口时，作为独立窗口存在，需要手动调用show()方法，此时该窗口有边框
    // TestWidget* w = new TestWidget;
    // w->show();

    //指定父窗口时，作为嵌套窗口，不需要手动调用show()，当父窗口被显示时，前套窗口自动显示，此时该窗口无边框
    //TestWidget* w = new TestWidget(this);

    //将TestWidget类对象w作为父窗口对象成员变量重写上面的逻辑
    w = new TestWidget(this);

    //Dialog类无法嵌套，因此无论是否指定父窗口，都是作为独立窗口存在
    dia = new TestDialog;

    //非模态显示
    //dia->show();

    //模态显示
    //调用exec()时，会执行阻塞，关闭Dialog后，取消阻塞
    dia->exec();

}

Widget::~Widget()
{
    delete ui;
    delete w;
    delete dia;
}
