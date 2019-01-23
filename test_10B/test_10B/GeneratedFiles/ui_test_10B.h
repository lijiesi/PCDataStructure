/********************************************************************************
** Form generated from reading UI file 'test_10B.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_10B_H
#define UI_TEST_10B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_10BClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_10BClass)
    {
        if (test_10BClass->objectName().isEmpty())
            test_10BClass->setObjectName(QStringLiteral("test_10BClass"));
        test_10BClass->resize(600, 400);
        centralWidget = new QWidget(test_10BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        test_10BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_10BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_10BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_10BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_10BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_10BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_10BClass->setStatusBar(statusBar);

        retranslateUi(test_10BClass);

        QMetaObject::connectSlotsByName(test_10BClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_10BClass)
    {
        test_10BClass->setWindowTitle(QApplication::translate("test_10BClass", "test_10B", 0));
    } // retranslateUi

};

namespace Ui {
    class test_10BClass: public Ui_test_10BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_10B_H
