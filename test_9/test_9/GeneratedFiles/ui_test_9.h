/********************************************************************************
** Form generated from reading UI file 'test_9.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_9_H
#define UI_TEST_9_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_9Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *page_1;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textlocation;
    QWidget *page_2;
    QCheckBox *login;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnsave;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_9Class)
    {
        if (test_9Class->objectName().isEmpty())
            test_9Class->setObjectName(QStringLiteral("test_9Class"));
        test_9Class->resize(600, 370);
        test_9Class->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(test_9Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        widget = new QWidget(page_1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 195, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textlocation = new QLineEdit(widget);
        textlocation->setObjectName(QStringLiteral("textlocation"));

        horizontalLayout->addWidget(textlocation);

        tabWidget->addTab(page_1, QString());
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        login = new QCheckBox(page_2);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(50, 70, 71, 16));
        tabWidget->addTab(page_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnsave = new QPushButton(centralWidget);
        btnsave->setObjectName(QStringLiteral("btnsave"));

        horizontalLayout_2->addWidget(btnsave);


        verticalLayout->addLayout(horizontalLayout_2);

        test_9Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_9Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_9Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_9Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_9Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_9Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_9Class->setStatusBar(statusBar);

        retranslateUi(test_9Class);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(test_9Class);
    } // setupUi

    void retranslateUi(QMainWindow *test_9Class)
    {
        test_9Class->setWindowTitle(QApplication::translate("test_9Class", "test_9", 0));
        label->setText(QApplication::translate("test_9Class", "\344\275\215\347\275\256", 0));
        tabWidget->setTabText(tabWidget->indexOf(page_1), QApplication::translate("test_9Class", "\347\224\250\346\210\267\350\256\276\347\275\256", 0));
        login->setText(QApplication::translate("test_9Class", "CheckBox", 0));
        tabWidget->setTabText(tabWidget->indexOf(page_2), QApplication::translate("test_9Class", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        btnsave->setText(QApplication::translate("test_9Class", "\344\277\235\345\255\230", 0));
    } // retranslateUi

};

namespace Ui {
    class test_9Class: public Ui_test_9Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_9_H
