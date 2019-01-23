/********************************************************************************
** Form generated from reading UI file 'test_11C.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_11C_H
#define UI_TEST_11C_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_test_11CClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    MyWidget *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_11CClass)
    {
        if (test_11CClass->objectName().isEmpty())
            test_11CClass->setObjectName(QStringLiteral("test_11CClass"));
        test_11CClass->resize(600, 400);
        centralWidget = new QWidget(test_11CClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new MyWidget(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        test_11CClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_11CClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_11CClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_11CClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_11CClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_11CClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_11CClass->setStatusBar(statusBar);

        retranslateUi(test_11CClass);

        QMetaObject::connectSlotsByName(test_11CClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_11CClass)
    {
        test_11CClass->setWindowTitle(QApplication::translate("test_11CClass", "test_11C", 0));
    } // retranslateUi

};

namespace Ui {
    class test_11CClass: public Ui_test_11CClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_11C_H
