/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *moveBtn;
    QPushButton *positionBtn;
    QPushButton *geometryBtn;
    QPushButton *modifyBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(547, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        moveBtn = new QPushButton(centralwidget);
        moveBtn->setObjectName("moveBtn");
        moveBtn->setGeometry(QRect(130, 84, 131, 51));
        QFont font;
        font.setPointSize(20);
        font.setItalic(true);
        moveBtn->setFont(font);
        positionBtn = new QPushButton(centralwidget);
        positionBtn->setObjectName("positionBtn");
        positionBtn->setGeometry(QRect(130, 180, 191, 51));
        positionBtn->setFont(font);
        geometryBtn = new QPushButton(centralwidget);
        geometryBtn->setObjectName("geometryBtn");
        geometryBtn->setGeometry(QRect(130, 280, 301, 51));
        geometryBtn->setFont(font);
        modifyBtn = new QPushButton(centralwidget);
        modifyBtn->setObjectName("modifyBtn");
        modifyBtn->setGeometry(QRect(130, 380, 301, 51));
        modifyBtn->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 547, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        moveBtn->setText(QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250\347\252\227\345\217\243", nullptr));
        positionBtn->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\344\275\215\347\275\256\344\277\241\346\201\257", nullptr));
        geometryBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\347\252\227\345\217\243\347\232\204\344\275\215\347\275\256\345\222\214\345\260\272\345\257\270", nullptr));
        modifyBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\240\207\351\242\230\345\222\214\345\233\276\346\240\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
