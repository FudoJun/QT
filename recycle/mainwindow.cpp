#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"MainWindow Consturctor";
    //当new的对象时QObject对象的直接或间接子类时，
    //且该对象指定了父对象，那么可以实现自动回收内存，即不需要手动delete
    sub = new SubWindow(this);
    sub->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
