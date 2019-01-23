/********************************************************************************
** Form generated from reading UI file 'test_5.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_5_H
#define UI_TEST_5_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_5Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnok;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_5Class)
    {
        if (test_5Class->objectName().isEmpty())
            test_5Class->setObjectName(QStringLiteral("test_5Class"));
        test_5Class->resize(600, 400);
        centralWidget = new QWidget(test_5Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(label);

        user = new QLineEdit(centralWidget);
        user->setObjectName(QStringLiteral("user"));
        user->setMaxLength(16);

        horizontalLayout->addWidget(user);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 0));

        horizontalLayout_2->addWidget(label_2);

        password = new QLineEdit(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setMaxLength(16);
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnok = new QPushButton(centralWidget);
        btnok->setObjectName(QStringLiteral("btnok"));

        horizontalLayout_3->addWidget(btnok);


        verticalLayout->addLayout(horizontalLayout_3);

        test_5Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_5Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_5Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_5Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_5Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_5Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_5Class->setStatusBar(statusBar);

        retranslateUi(test_5Class);

        QMetaObject::connectSlotsByName(test_5Class);
    } // setupUi

    void retranslateUi(QMainWindow *test_5Class)
    {
        test_5Class->setWindowTitle(QApplication::translate("test_5Class", "test_5", 0));
        label->setText(QApplication::translate("test_5Class", "\350\264\246\346\210\267", 0));
        user->setPlaceholderText(QApplication::translate("test_5Class", "\350\257\267\350\276\223\345\205\245\350\264\246\346\210\267", 0));
        label_2->setText(QApplication::translate("test_5Class", "\345\257\206\347\240\201", 0));
        password->setPlaceholderText(QApplication::translate("test_5Class", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        btnok->setText(QApplication::translate("test_5Class", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class test_5Class: public Ui_test_5Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_5_H
