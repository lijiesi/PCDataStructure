/********************************************************************************
** Form generated from reading UI file 'QT_file.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_FILE_H
#define UI_QT_FILE_H

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

class Ui_QT_fileClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_open;
    QPushButton *btn_save;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *btn_show;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QT_fileClass)
    {
        if (QT_fileClass->objectName().isEmpty())
            QT_fileClass->setObjectName(QStringLiteral("QT_fileClass"));
        QT_fileClass->resize(600, 400);
        centralWidget = new QWidget(QT_fileClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_open = new QPushButton(centralWidget);
        btn_open->setObjectName(QStringLiteral("btn_open"));

        horizontalLayout->addWidget(btn_open);

        btn_save = new QPushButton(centralWidget);
        btn_save->setObjectName(QStringLiteral("btn_save"));

        horizontalLayout->addWidget(btn_save);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_show = new QPlainTextEdit(centralWidget);
        btn_show->setObjectName(QStringLiteral("btn_show"));

        verticalLayout->addWidget(btn_show);

        QT_fileClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QT_fileClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QT_fileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QT_fileClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QT_fileClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QT_fileClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QT_fileClass->setStatusBar(statusBar);

        retranslateUi(QT_fileClass);

        QMetaObject::connectSlotsByName(QT_fileClass);
    } // setupUi

    void retranslateUi(QMainWindow *QT_fileClass)
    {
        QT_fileClass->setWindowTitle(QApplication::translate("QT_fileClass", "QT_file", 0));
        btn_open->setText(QApplication::translate("QT_fileClass", "\346\211\223\345\274\200", 0));
        btn_save->setText(QApplication::translate("QT_fileClass", "\344\277\235\345\255\230", 0));
    } // retranslateUi

};

namespace Ui {
    class QT_fileClass: public Ui_QT_fileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_FILE_H
