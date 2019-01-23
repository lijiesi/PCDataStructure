/********************************************************************************
** Form generated from reading UI file 'test_1.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_1_H
#define UI_TEST_1_H

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

class Ui_test_1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_1Class)
    {
        if (test_1Class->objectName().isEmpty())
            test_1Class->setObjectName(QStringLiteral("test_1Class"));
        test_1Class->resize(600, 400);
        menuBar = new QMenuBar(test_1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        test_1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(test_1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        test_1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(test_1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_1Class->setStatusBar(statusBar);

        retranslateUi(test_1Class);

        QMetaObject::connectSlotsByName(test_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *test_1Class)
    {
        test_1Class->setWindowTitle(QApplication::translate("test_1Class", "test_1", 0));
    } // retranslateUi

};

namespace Ui {
    class test_1Class: public Ui_test_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_1_H
