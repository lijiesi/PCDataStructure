/********************************************************************************
** Form generated from reading UI file 'test_11A.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_11A_H
#define UI_TEST_11A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyCircle.h"

QT_BEGIN_NAMESPACE

class Ui_test_11AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    MyCircle *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_11AClass)
    {
        if (test_11AClass->objectName().isEmpty())
            test_11AClass->setObjectName(QStringLiteral("test_11AClass"));
        test_11AClass->resize(600, 400);
        centralWidget = new QWidget(test_11AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        frame = new MyCircle(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        test_11AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_11AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_11AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_11AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_11AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_11AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_11AClass->setStatusBar(statusBar);

        retranslateUi(test_11AClass);

        QMetaObject::connectSlotsByName(test_11AClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_11AClass)
    {
        test_11AClass->setWindowTitle(QApplication::translate("test_11AClass", "test_11A", 0));
        label->setText(QApplication::translate("test_11AClass", "\346\240\207\347\255\276", 0));
    } // retranslateUi

};

namespace Ui {
    class test_11AClass: public Ui_test_11AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_11A_H
