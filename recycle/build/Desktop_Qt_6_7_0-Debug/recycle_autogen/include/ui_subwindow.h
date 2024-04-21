/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_SubWindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SubWindow)
    {
        if (SubWindow->objectName().isEmpty())
            SubWindow->setObjectName("SubWindow");
        SubWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(SubWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SubWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SubWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SubWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SubWindow);
    } // setupUi

    void retranslateUi(QDialog *SubWindow)
    {
        SubWindow->setWindowTitle(QCoreApplication::translate("SubWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubWindow: public Ui_SubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
