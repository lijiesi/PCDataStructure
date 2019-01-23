/********************************************************************************
** Form generated from reading UI file 'test_2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_2_H
#define UI_TEST_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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

class Ui_test_2Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_button;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *ok_show;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_2Class)
    {
        if (test_2Class->objectName().isEmpty())
            test_2Class->setObjectName(QStringLiteral("test_2Class"));
        test_2Class->resize(600, 400);
        centralWidget = new QWidget(test_2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ok_button = new QPushButton(centralWidget);
        ok_button->setObjectName(QStringLiteral("ok_button"));

        horizontalLayout->addWidget(ok_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        ok_show = new QPlainTextEdit(centralWidget);
        ok_show->setObjectName(QStringLiteral("ok_show"));

        verticalLayout->addWidget(ok_show);

        test_2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_2Class->setStatusBar(statusBar);

        retranslateUi(test_2Class);

        QMetaObject::connectSlotsByName(test_2Class);
    } // setupUi

    void retranslateUi(QMainWindow *test_2Class)
    {
        test_2Class->setWindowTitle(QApplication::translate("test_2Class", "test_2", 0));
        ok_button->setText(QApplication::translate("test_2Class", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class test_2Class: public Ui_test_2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_2_H
