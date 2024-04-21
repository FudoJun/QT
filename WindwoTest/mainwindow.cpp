#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->move(100,100);

    //this->setMaximumSize(600,600);
    this->setMinimumSize(300,300);
    this->setWindowTitle("hello QT");
    this->setWindowIcon(QIcon("//media//jun//Windows//Users//Fudo//混淆矩阵.png"));

    //此处发出信号的不是ui->modifyBtn,而是当前窗口this
    //这里仅捕获信号并打印提示
    connect(this, &MainWindow::windowTitleChanged, this, [&](const QString& title){
        qDebug()<<"新的标题: "<<title;
    });
    connect(this, &MainWindow::windowIconChanged, this, [&](){
        qDebug()<<"图标已经改变";
    });

    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, this, [&](const QPoint &pos){
        QMenu menu(this);
        menu.addAction("西红柿");
        menu.addAction("黄瓜");
        menu.addAction("茄子");
        menu.exec(QCursor::pos());
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_moveBtn_clicked()
{

    QRect rect = this->frameGeometry();
    this->move(rect.topLeft() + QPoint(100,100));
}

void MainWindow::on_positionBtn_clicked()
{
    //省略显示的this
    QRect rect = frameGeometry();
    qDebug() << "左上角: " << rect.topLeft()
             << "右上角: " << rect.topRight()
             << "左下角: " << rect.bottomLeft()
             << "右下角: " << rect.bottomRight()
             << "宽度: " << rect.width()
             << "高度: " << rect.height();
}

void MainWindow::on_geometryBtn_clicked()
{
    int x = 100 + rand() % 500;
    int y = 100 + rand() % 500;
    int width = this->width() + 50;
    int height = this->height() + 50;

    this->setGeometry(x, y, width, height);
}


void MainWindow::on_modifyBtn_clicked()
{
    this->setWindowTitle("hello world");
    this->setWindowIcon(
        QIcon("//media//jun//新加卷//Batman Arkham Knight//BmGame//Splash//PC//Splash.bmp"));
}

