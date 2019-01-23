/********************************************************************************
** Form generated from reading UI file 'test_11D.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_11D_H
#define UI_TEST_11D_H

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

class Ui_test_11DClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    MyWidget *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_11DClass)
    {
        if (test_11DClass->objectName().isEmpty())
            test_11DClass->setObjectName(QStringLiteral("test_11DClass"));
        test_11DClass->resize(600, 400);
        centralWidget = new QWidget(test_11DClass);
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

        test_11DClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_11DClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_11DClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_11DClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_11DClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_11DClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_11DClass->setStatusBar(statusBar);

        retranslateUi(test_11DClass);

        QMetaObject::connectSlotsByName(test_11DClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_11DClass)
    {
        test_11DClass->setWindowTitle(QApplication::translate("test_11DClass", "test_11D", 0));
    } // retranslateUi

};

namespace Ui {
    class test_11DClass: public Ui_test_11DClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_11D_H
