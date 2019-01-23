/********************************************************************************
** Form generated from reading UI file 'my_save.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_SAVE_H
#define UI_MY_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_my_save
{
public:
    QProgressBar *progressBar;

    void setupUi(QDialog *my_save)
    {
        if (my_save->objectName().isEmpty())
            my_save->setObjectName(QStringLiteral("my_save"));
        my_save->resize(354, 50);
        progressBar = new QProgressBar(my_save);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 10, 331, 31));
        progressBar->setValue(0);

        retranslateUi(my_save);

        QMetaObject::connectSlotsByName(my_save);
    } // setupUi

    void retranslateUi(QDialog *my_save)
    {
        my_save->setWindowTitle(QApplication::translate("my_save", "my_save", 0));
    } // retranslateUi

};

namespace Ui {
    class my_save: public Ui_my_save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_SAVE_H
