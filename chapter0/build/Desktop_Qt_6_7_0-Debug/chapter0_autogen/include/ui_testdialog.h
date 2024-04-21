/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TestDialog
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label;

    void setupUi(QDialog *TestDialog)
    {
        if (TestDialog->objectName().isEmpty())
            TestDialog->setObjectName("TestDialog");
        TestDialog->resize(400, 300);
        checkBox = new QCheckBox(TestDialog);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(50, 70, 92, 23));
        checkBox_2 = new QCheckBox(TestDialog);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(50, 140, 92, 23));
        label = new QLabel(TestDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 110, 161, 71));
        QFont font;
        font.setPointSize(24);
        font.setItalic(true);
        label->setFont(font);

        retranslateUi(TestDialog);

        QMetaObject::connectSlotsByName(TestDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDialog)
    {
        TestDialog->setWindowTitle(QCoreApplication::translate("TestDialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("TestDialog", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("TestDialog", "CheckBox", nullptr));
        label->setText(QCoreApplication::translate("TestDialog", "TestDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestDialog: public Ui_TestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
