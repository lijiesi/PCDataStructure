/********************************************************************************
** Form generated from reading UI file 'test_9_2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_9_2_H
#define UI_TEST_9_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_9_2Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnadd;
    QPushButton *btndelete;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_9_2Class)
    {
        if (test_9_2Class->objectName().isEmpty())
            test_9_2Class->setObjectName(QStringLiteral("test_9_2Class"));
        test_9_2Class->resize(600, 400);
        centralWidget = new QWidget(test_9_2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnadd = new QPushButton(centralWidget);
        btnadd->setObjectName(QStringLiteral("btnadd"));

        horizontalLayout->addWidget(btnadd);

        btndelete = new QPushButton(centralWidget);
        btndelete->setObjectName(QStringLiteral("btndelete"));

        horizontalLayout->addWidget(btndelete);


        verticalLayout->addLayout(horizontalLayout);

        test_9_2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_9_2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_9_2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_9_2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_9_2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_9_2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_9_2Class->setStatusBar(statusBar);

        retranslateUi(test_9_2Class);

        QMetaObject::connectSlotsByName(test_9_2Class);
    } // setupUi

    void retranslateUi(QMainWindow *test_9_2Class)
    {
        test_9_2Class->setWindowTitle(QApplication::translate("test_9_2Class", "test_9_2", 0));
        btnadd->setText(QApplication::translate("test_9_2Class", "\346\267\273\345\212\240", 0));
        btndelete->setText(QApplication::translate("test_9_2Class", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class test_9_2Class: public Ui_test_9_2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_9_2_H
