/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mydialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLineEdit *btnuser;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QLineEdit *btnpassword;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btncheck;
    QPushButton *btncancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *mydialog)
    {
        if (mydialog->objectName().isEmpty())
            mydialog->setObjectName(QStringLiteral("mydialog"));
        mydialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(mydialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(mydialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(40, 0));

        horizontalLayout_3->addWidget(pushButton);

        btnuser = new QLineEdit(mydialog);
        btnuser->setObjectName(QStringLiteral("btnuser"));

        horizontalLayout_3->addWidget(btnuser);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_2 = new QPushButton(mydialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 0));

        horizontalLayout_4->addWidget(pushButton_2);

        btnpassword = new QLineEdit(mydialog);
        btnpassword->setObjectName(QStringLiteral("btnpassword"));
        btnpassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(btnpassword);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(mydialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btncheck = new QPushButton(mydialog);
        btncheck->setObjectName(QStringLiteral("btncheck"));

        horizontalLayout->addWidget(btncheck);

        btncancel = new QPushButton(mydialog);
        btncancel->setObjectName(QStringLiteral("btncancel"));

        horizontalLayout->addWidget(btncancel);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(mydialog);

        QMetaObject::connectSlotsByName(mydialog);
    } // setupUi

    void retranslateUi(QDialog *mydialog)
    {
        mydialog->setWindowTitle(QApplication::translate("mydialog", "mydialog", 0));
        pushButton->setText(QApplication::translate("mydialog", "\350\264\246\346\210\267", 0));
        pushButton_2->setText(QApplication::translate("mydialog", "\345\257\206\347\240\201", 0));
        btncheck->setText(QApplication::translate("mydialog", "\347\241\256\350\256\244", 0));
        btncancel->setText(QApplication::translate("mydialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class mydialog: public Ui_mydialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
