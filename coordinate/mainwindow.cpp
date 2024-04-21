#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //最外层父窗口坐标原点在相对于桌面的坐标原点500,500位置
    this->move(500,500);

    button1 = new QPushButton(this);
    button1->setFixedSize(500,500);
    //当前窗口坐标原点相对于父窗口坐标原点20,20的位置
    //父窗口坐标原点在左上角
    button1->move(20,20);

    button2 = new QPushButton(button1);
    button2->setFixedSize(200,200);
    //当前窗口坐标原点相对于父窗口坐标原点20,20的位置
    //父窗口坐标原点在左上角
    button2->move(20,20);

    button2 = new QPushButton(button2);
    button2->setFixedSize(100,100);
    //当前窗口坐标原点相对于父窗口坐标原点20,20的位置
    //父窗口坐标原点在左上角
    button2->move(20,20);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete button1;
    delete button2;
    delete button3;
}
