/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *TestWidget)
    {
        if (TestWidget->objectName().isEmpty())
            TestWidget->setObjectName("TestWidget");
        TestWidget->resize(400, 300);
        pushButton = new QPushButton(TestWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 130, 89, 25));
        pushButton_2 = new QPushButton(TestWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 130, 89, 25));
        label = new QLabel(TestWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 60, 107, 24));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        label->setFont(font);

        retranslateUi(TestWidget);

        QMetaObject::connectSlotsByName(TestWidget);
    } // setupUi

    void retranslateUi(QWidget *TestWidget)
    {
        TestWidget->setWindowTitle(QCoreApplication::translate("TestWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("TestWidget", "TestWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWidget: public Ui_TestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
