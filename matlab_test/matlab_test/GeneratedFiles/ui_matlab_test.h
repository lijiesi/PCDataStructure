/********************************************************************************
** Form generated from reading UI file 'matlab_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATLAB_TEST_H
#define UI_MATLAB_TEST_H

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

class Ui_matlab_testClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *matlab_testClass)
    {
        if (matlab_testClass->objectName().isEmpty())
            matlab_testClass->setObjectName(QStringLiteral("matlab_testClass"));
        matlab_testClass->resize(600, 400);
        menuBar = new QMenuBar(matlab_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        matlab_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(matlab_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        matlab_testClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(matlab_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        matlab_testClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(matlab_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        matlab_testClass->setStatusBar(statusBar);

        retranslateUi(matlab_testClass);

        QMetaObject::connectSlotsByName(matlab_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *matlab_testClass)
    {
        matlab_testClass->setWindowTitle(QApplication::translate("matlab_testClass", "matlab_test", 0));
    } // retranslateUi

};

namespace Ui {
    class matlab_testClass: public Ui_matlab_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATLAB_TEST_H
