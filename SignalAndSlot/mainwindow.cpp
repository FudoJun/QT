#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , sendr(new TestSender)
    , receiver(new TestReceiver)
{
    ui->setupUi(this);
    sendr->setParent(this);
    receiver->setParent(this);

    //自定义信号需要手动实现发射
    //点击testBtn时，发射标准QPushButton::clicked信号，并使用自定义槽函数MainWindow::testBtnSlot处理
    //MainWindow::testBtnSlot槽函数中执行sendr->testSignal()完成自定义信号的发射，类似于中转实现发射信号功能
    connect(sendr, &TestSender::testSignal, receiver, &TestReceiver::testSlot);
    connect(ui->testBtn, &QPushButton::clicked, this, &MainWindow::testBtnSlot);

    //一个信号可以连接多个槽函数
    //槽函数执行顺训在qt4中是随即的
    //槽函数执行顺序在qt5以后的版本中，和connect顺序相同
    //多个信号也可以连接到同一个槽函数
    connect(sendr, &TestSender::testSignal, this, &MainWindow::mainwindowTestSlot);

    //信号除了连接到槽函数，还可以连接到另一个信号，实现信号的转发
    connect(ui->testBtn, &QPushButton::clicked, sendr, &TestSender::testSignal);

    //使用lambda表达式发送信号
    connect(ui->testBtn, &QPushButton::clicked, this, [&](){
        emit sendr->testSignal();
    });

    connect(ui->closeBtn, &QPushButton::clicked, this, &QWidget::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testBtnSlot()
{
    //发射自定义信号
    emit sendr->testSignal();
}

void MainWindow::mainwindowTestSlot()
{
    qDebug()<<"mainwindow slot for testSignal()";
}
