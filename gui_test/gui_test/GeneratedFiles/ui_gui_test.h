/********************************************************************************
** Form generated from reading UI file 'gui_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_TEST_H
#define UI_GUI_TEST_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_testClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_push;
    QSpacerItem *horizontalSpacer;
    QTextEdit *btnshow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *gui_testClass)
    {
        if (gui_testClass->objectName().isEmpty())
            gui_testClass->setObjectName(QStringLiteral("gui_testClass"));
        gui_testClass->resize(600, 400);
        centralWidget = new QWidget(gui_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(41, 20, 258, 225));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ok_push = new QPushButton(widget);
        ok_push->setObjectName(QStringLiteral("ok_push"));

        horizontalLayout->addWidget(ok_push);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        btnshow = new QTextEdit(widget);
        btnshow->setObjectName(QStringLiteral("btnshow"));

        verticalLayout->addWidget(btnshow);

        gui_testClass->setCentralWidget(centralWidget);
        ok_push->raise();
        btnshow->raise();
        btnshow->raise();
        menuBar = new QMenuBar(gui_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        gui_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(gui_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        gui_testClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(gui_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        gui_testClass->setStatusBar(statusBar);

        retranslateUi(gui_testClass);

        QMetaObject::connectSlotsByName(gui_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *gui_testClass)
    {
        gui_testClass->setWindowTitle(QApplication::translate("gui_testClass", "gui_test", 0));
        ok_push->setText(QApplication::translate("gui_testClass", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class gui_testClass: public Ui_gui_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_TEST_H
