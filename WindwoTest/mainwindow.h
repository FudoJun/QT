#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_moveBtn_clicked();

    void on_positionBtn_clicked();

    void on_geometryBtn_clicked();

    void on_modifyBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
