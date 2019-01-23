/********************************************************************************
** Form generated from reading UI file 'test_9B.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_9B_H
#define UI_TEST_9B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_9BClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_page1;
    QPushButton *btn_page2;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QWidget *page_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_9BClass)
    {
        if (test_9BClass->objectName().isEmpty())
            test_9BClass->setObjectName(QStringLiteral("test_9BClass"));
        test_9BClass->resize(600, 400);
        centralWidget = new QWidget(test_9BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_page1 = new QPushButton(centralWidget);
        btn_page1->setObjectName(QStringLiteral("btn_page1"));

        verticalLayout->addWidget(btn_page1);

        btn_page2 = new QPushButton(centralWidget);
        btn_page2->setObjectName(QStringLiteral("btn_page2"));

        verticalLayout->addWidget(btn_page2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 431, 331));
        label->setPixmap(QPixmap(QString::fromUtf8(":/test_9B/Resources/123.jpg")));
        label->setScaledContents(true);
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        test_9BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_9BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test_9BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_9BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_9BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_9BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_9BClass->setStatusBar(statusBar);

        retranslateUi(test_9BClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(test_9BClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_9BClass)
    {
        test_9BClass->setWindowTitle(QApplication::translate("test_9BClass", "test_9B", 0));
        btn_page1->setText(QApplication::translate("test_9BClass", "\347\254\254\344\270\200\351\241\265", 0));
        btn_page2->setText(QApplication::translate("test_9BClass", "\347\254\254\344\272\214\351\241\265", 0));
        textEdit->setHtml(QApplication::translate("test_9BClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\254\254\344\270\200\351\241\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\254\254\344\270\200\351\241\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\254\254\344\270\200\351\241\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350"
                        "\277\231\346\230\257\347\254\254\344\270\200\351\241\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">OK</p></body></html>", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class test_9BClass: public Ui_test_9BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_9B_H
