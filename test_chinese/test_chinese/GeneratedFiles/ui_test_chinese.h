/********************************************************************************
** Form generated from reading UI file 'test_chinese.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_CHINESE_H
#define UI_TEST_CHINESE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_chineseClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *btn_line;
    QPushButton *btn_ok;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_chineseClass)
    {
        if (test_chineseClass->objectName().isEmpty())
            test_chineseClass->setObjectName(QStringLiteral("test_chineseClass"));
        test_chineseClass->resize(600, 400);
        centralWidget = new QWidget(test_chineseClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 90, 216, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_line = new QLineEdit(widget);
        btn_line->setObjectName(QStringLiteral("btn_line"));

        horizontalLayout->addWidget(btn_line);

        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        test_chineseClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_chineseClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_chineseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_chineseClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_chineseClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_chineseClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_chineseClass->setStatusBar(statusBar);

        retranslateUi(test_chineseClass);

        QMetaObject::connectSlotsByName(test_chineseClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_chineseClass)
    {
        test_chineseClass->setWindowTitle(QApplication::translate("test_chineseClass", "test_chinese", 0));
        btn_ok->setText(QApplication::translate("test_chineseClass", "\346\265\213\350\257\225", 0));
    } // retranslateUi

};

namespace Ui {
    class test_chineseClass: public Ui_test_chineseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_CHINESE_H
