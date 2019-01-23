/********************************************************************************
** Form generated from reading UI file 'test7_1.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_1_H
#define UI_TEST7_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test7_1Class
{
public:
    QWidget *centralWidget;
    QPushButton *btnok;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test7_1Class)
    {
        if (test7_1Class->objectName().isEmpty())
            test7_1Class->setObjectName(QStringLiteral("test7_1Class"));
        test7_1Class->resize(600, 400);
        centralWidget = new QWidget(test7_1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnok = new QPushButton(centralWidget);
        btnok->setObjectName(QStringLiteral("btnok"));
        btnok->setGeometry(QRect(60, 40, 75, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 130, 301, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        test7_1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test7_1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test7_1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test7_1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test7_1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test7_1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test7_1Class->setStatusBar(statusBar);

        retranslateUi(test7_1Class);

        QMetaObject::connectSlotsByName(test7_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *test7_1Class)
    {
        test7_1Class->setWindowTitle(QApplication::translate("test7_1Class", "test7_1", 0));
        btnok->setText(QApplication::translate("test7_1Class", "\347\231\273\351\231\206", 0));
    } // retranslateUi

};

namespace Ui {
    class test7_1Class: public Ui_test7_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_1_H
