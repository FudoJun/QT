#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer)
{
    ui->setupUi(this);
    timer->setParent(this);

    connect(ui->loopBtn, &QPushButton::clicked, this, [&](){

        if (timer->isActive()) {
            timer->stop();
            ui->loopBtn->setText("开始");
        }else {
            //1ms后，发出timeout信号
            timer->start(1);
            ui->loopBtn->setText("关闭");
        }
    });

    connect(timer, &QTimer::timeout, this, [&](){
        currentTime = QTime::currentTime();
        QString tmStr = currentTime.toString("hh:mm:ss");
        ui->curTime->setText(tmStr);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
