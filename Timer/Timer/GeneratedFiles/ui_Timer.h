/********************************************************************************
** Form generated from reading UI file 'Timer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimerClass
{
public:
    QWidget *centralWidget;
    QLabel *timeLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnstart;
    QSpacerItem *verticalSpacer;
    QPushButton *btnEnd;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TimerClass)
    {
        if (TimerClass->objectName().isEmpty())
            TimerClass->setObjectName(QStringLiteral("TimerClass"));
        TimerClass->resize(600, 400);
        centralWidget = new QWidget(TimerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setGeometry(QRect(70, 90, 171, 51));
        QFont font;
        font.setFamily(QStringLiteral("Vrinda"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        timeLabel->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 70, 77, 118));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnstart = new QPushButton(layoutWidget);
        btnstart->setObjectName(QStringLiteral("btnstart"));

        verticalLayout->addWidget(btnstart);

        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnEnd = new QPushButton(layoutWidget);
        btnEnd->setObjectName(QStringLiteral("btnEnd"));

        verticalLayout->addWidget(btnEnd);

        TimerClass->setCentralWidget(centralWidget);
        layoutWidget->raise();
        timeLabel->raise();
        menuBar = new QMenuBar(TimerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TimerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TimerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TimerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TimerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TimerClass->setStatusBar(statusBar);

        retranslateUi(TimerClass);

        QMetaObject::connectSlotsByName(TimerClass);
    } // setupUi

    void retranslateUi(QMainWindow *TimerClass)
    {
        TimerClass->setWindowTitle(QApplication::translate("TimerClass", "Timer", 0));
        timeLabel->setText(QApplication::translate("TimerClass", "00:00:00", 0));
        btnstart->setText(QApplication::translate("TimerClass", "\345\274\200\345\247\213", 0));
        btnEnd->setText(QApplication::translate("TimerClass", "\347\273\223\346\235\237", 0));
    } // retranslateUi

};

namespace Ui {
    class TimerClass: public Ui_TimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
