/********************************************************************************
** Form generated from reading UI file 'qt_123.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_123_H
#define UI_QT_123_H

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

class Ui_qt_123Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt_123Class)
    {
        if (qt_123Class->objectName().isEmpty())
            qt_123Class->setObjectName(QStringLiteral("qt_123Class"));
        qt_123Class->resize(600, 400);
        menuBar = new QMenuBar(qt_123Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        qt_123Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt_123Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qt_123Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(qt_123Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qt_123Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qt_123Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qt_123Class->setStatusBar(statusBar);

        retranslateUi(qt_123Class);

        QMetaObject::connectSlotsByName(qt_123Class);
    } // setupUi

    void retranslateUi(QMainWindow *qt_123Class)
    {
        qt_123Class->setWindowTitle(QApplication::translate("qt_123Class", "qt_123", 0));
    } // retranslateUi

};

namespace Ui {
    class qt_123Class: public Ui_qt_123Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_123_H
