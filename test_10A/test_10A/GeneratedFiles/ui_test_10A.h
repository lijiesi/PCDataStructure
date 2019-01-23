/********************************************************************************
** Form generated from reading UI file 'test_10A.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_10A_H
#define UI_TEST_10A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_10AClass
{
public:
    QAction *actionNew;
    QAction *actionHelp;
    QAction *actionSave;
    QAction *actionSetting;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuW;
    QMenu *menu;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *test_10AClass)
    {
        if (test_10AClass->objectName().isEmpty())
            test_10AClass->setObjectName(QStringLiteral("test_10AClass"));
        test_10AClass->resize(600, 400);
        actionNew = new QAction(test_10AClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/test_10A/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionHelp = new QAction(test_10AClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/test_10A/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon1);
        actionSave = new QAction(test_10AClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/test_10A/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSetting = new QAction(test_10AClass);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/test_10A/Resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon3);
        centralWidget = new QWidget(test_10AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        test_10AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_10AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menuW = new QMenu(menuBar);
        menuW->setObjectName(QStringLiteral("menuW"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        test_10AClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(test_10AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_10AClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(test_10AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_10AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuW->menuAction());
        menuBar->addAction(menu->menuAction());
        menuW->addAction(actionNew);
        menuW->addAction(actionSave);
        menu->addAction(actionSetting);
        menu->addAction(actionHelp);
        mainToolBar->addAction(actionNew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSetting);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionHelp);

        retranslateUi(test_10AClass);

        QMetaObject::connectSlotsByName(test_10AClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_10AClass)
    {
        test_10AClass->setWindowTitle(QApplication::translate("test_10AClass", "test_10A", 0));
        actionNew->setText(QApplication::translate("test_10AClass", "\346\226\260\345\273\272", 0));
        actionHelp->setText(QApplication::translate("test_10AClass", "\345\270\256\345\212\251", 0));
        actionSave->setText(QApplication::translate("test_10AClass", "\344\277\235\345\255\230", 0));
        actionSetting->setText(QApplication::translate("test_10AClass", "\350\256\276\347\275\256", 0));
        menuW->setTitle(QApplication::translate("test_10AClass", "\346\226\207\344\273\266", 0));
        menu->setTitle(QApplication::translate("test_10AClass", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class test_10AClass: public Ui_test_10AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_10A_H
