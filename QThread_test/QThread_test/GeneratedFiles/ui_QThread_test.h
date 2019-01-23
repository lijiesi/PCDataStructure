/********************************************************************************
** Form generated from reading UI file 'QThread_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHREAD_TEST_H
#define UI_QTHREAD_TEST_H

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

class Ui_QThread_testClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnSave;
    QPushButton *btnSend;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *btnshow;
    QPushButton *btnSearch;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QThread_testClass)
    {
        if (QThread_testClass->objectName().isEmpty())
            QThread_testClass->setObjectName(QStringLiteral("QThread_testClass"));
        QThread_testClass->resize(600, 400);
        centralWidget = new QWidget(QThread_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(20, 130, 121, 81));
        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setGeometry(QRect(180, 130, 121, 81));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 70, 216, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnshow = new QLineEdit(widget);
        btnshow->setObjectName(QStringLiteral("btnshow"));

        horizontalLayout->addWidget(btnshow);

        btnSearch = new QPushButton(widget);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));

        horizontalLayout->addWidget(btnSearch);

        QThread_testClass->setCentralWidget(centralWidget);
        btnSave->raise();
        btnSend->raise();
        btnshow->raise();
        menuBar = new QMenuBar(QThread_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QThread_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QThread_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QThread_testClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QThread_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QThread_testClass->setStatusBar(statusBar);

        retranslateUi(QThread_testClass);

        QMetaObject::connectSlotsByName(QThread_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *QThread_testClass)
    {
        QThread_testClass->setWindowTitle(QApplication::translate("QThread_testClass", "QThread_test", 0));
        btnSave->setText(QApplication::translate("QThread_testClass", "\344\274\240\351\200\201", 0));
        btnSend->setText(QApplication::translate("QThread_testClass", "\350\257\273\345\217\226", 0));
        btnSearch->setText(QApplication::translate("QThread_testClass", "\351\200\211\346\213\251", 0));
    } // retranslateUi

};

namespace Ui {
    class QThread_testClass: public Ui_QThread_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHREAD_TEST_H
