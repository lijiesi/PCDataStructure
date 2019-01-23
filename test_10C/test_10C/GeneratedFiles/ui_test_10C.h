/********************************************************************************
** Form generated from reading UI file 'test_10C.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_10C_H
#define UI_TEST_10C_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_10CClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *okplain;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *okline;
    QPushButton *oksearch;
    QSpacerItem *verticalSpacer;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *test_10CClass)
    {
        if (test_10CClass->objectName().isEmpty())
            test_10CClass->setObjectName(QStringLiteral("test_10CClass"));
        test_10CClass->resize(600, 400);
        centralWidget = new QWidget(test_10CClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okplain = new QPlainTextEdit(centralWidget);
        okplain->setObjectName(QStringLiteral("okplain"));

        verticalLayout->addWidget(okplain);

        test_10CClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_10CClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_10CClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_10CClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_10CClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_10CClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_10CClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(test_10CClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(200, 80));
        dockWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidget->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okline = new QLineEdit(dockWidgetContents);
        okline->setObjectName(QStringLiteral("okline"));

        horizontalLayout->addWidget(okline);

        oksearch = new QPushButton(dockWidgetContents);
        oksearch->setObjectName(QStringLiteral("oksearch"));
        oksearch->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(oksearch);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 165, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        dockWidget->setWidget(dockWidgetContents);
        test_10CClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_2 = new QDockWidget(test_10CClass);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(89, 80));
        dockWidget_2->setMaximumSize(QSize(524287, 100));
        dockWidget_2->setSizeIncrement(QSize(0, 0));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        plainTextEdit = new QPlainTextEdit(dockWidgetContents_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_3->addWidget(plainTextEdit);

        dockWidget_2->setWidget(dockWidgetContents_4);
        test_10CClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_2);

        retranslateUi(test_10CClass);

        QMetaObject::connectSlotsByName(test_10CClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_10CClass)
    {
        test_10CClass->setWindowTitle(QApplication::translate("test_10CClass", "test_10C", 0));
        dockWidget->setWindowTitle(QApplication::translate("test_10CClass", "\346\220\234\347\264\242", 0));
        oksearch->setText(QApplication::translate("test_10CClass", "\346\220\234\347\264\242", 0));
        dockWidget_2->setWindowTitle(QApplication::translate("test_10CClass", "\350\276\223\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class test_10CClass: public Ui_test_10CClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_10C_H
