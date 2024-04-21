#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "testsender.h"
#include "testreceiver.h"

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

public slots:
    void testBtnSlot();
    void mainwindowTestSlot();

private:
    Ui::MainWindow *ui;
    TestSender *sendr;
    TestReceiver *receiver;
};
#endif // MAINWINDOW_H
