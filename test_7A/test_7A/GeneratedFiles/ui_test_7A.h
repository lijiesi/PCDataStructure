/********************************************************************************
** Form generated from reading UI file 'test_7A.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_7A_H
#define UI_TEST_7A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_7AClass
{
public:

    void setupUi(QWidget *test_7AClass)
    {
        if (test_7AClass->objectName().isEmpty())
            test_7AClass->setObjectName(QStringLiteral("test_7AClass"));
        test_7AClass->resize(600, 400);

        retranslateUi(test_7AClass);

        QMetaObject::connectSlotsByName(test_7AClass);
    } // setupUi

    void retranslateUi(QWidget *test_7AClass)
    {
        test_7AClass->setWindowTitle(QApplication::translate("test_7AClass", "test_7A", 0));
    } // retranslateUi

};

namespace Ui {
    class test_7AClass: public Ui_test_7AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_7A_H
