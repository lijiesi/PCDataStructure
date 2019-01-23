/********************************************************************************
** Form generated from reading UI file 'Qtool_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOOL_TEST_H
#define UI_QTOOL_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qtool_testClass
{
public:
    QWidget *centralWidget;
    QToolButton *ok_tool;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qtool_testClass)
    {
        if (Qtool_testClass->objectName().isEmpty())
            Qtool_testClass->setObjectName(QStringLiteral("Qtool_testClass"));
        Qtool_testClass->resize(600, 400);
        Qtool_testClass->setIconSize(QSize(48, 48));
        Qtool_testClass->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        Qtool_testClass->setAnimated(true);
        centralWidget = new QWidget(Qtool_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ok_tool = new QToolButton(centralWidget);
        ok_tool->setObjectName(QStringLiteral("ok_tool"));
        ok_tool->setEnabled(true);
        ok_tool->setGeometry(QRect(200, 40, 111, 71));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Resources/help_48px_36121_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        ok_tool->setIcon(icon);
        ok_tool->setIconSize(QSize(48, 48));
        ok_tool->setCheckable(true);
        ok_tool->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ok_tool->setAutoRaise(false);
        ok_tool->setArrowType(Qt::NoArrow);
        Qtool_testClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qtool_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Qtool_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qtool_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qtool_testClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qtool_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qtool_testClass->setStatusBar(statusBar);

        retranslateUi(Qtool_testClass);

        QMetaObject::connectSlotsByName(Qtool_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qtool_testClass)
    {
        Qtool_testClass->setWindowTitle(QApplication::translate("Qtool_testClass", "Qtool_test", 0));
        ok_tool->setText(QApplication::translate("Qtool_testClass", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class Qtool_testClass: public Ui_Qtool_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOOL_TEST_H
