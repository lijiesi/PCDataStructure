/********************************************************************************
** Form generated from reading UI file 'ADD.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ADD
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *ADD)
    {
        if (ADD->objectName().isEmpty())
            ADD->setObjectName(QStringLiteral("ADD"));
        ADD->resize(400, 300);
        label = new QLabel(ADD);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 70, 54, 12));
        lineEdit = new QLineEdit(ADD);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 110, 113, 20));
        pushButton = new QPushButton(ADD);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 180, 75, 23));

        retranslateUi(ADD);

        QMetaObject::connectSlotsByName(ADD);
    } // setupUi

    void retranslateUi(QWidget *ADD)
    {
        ADD->setWindowTitle(QApplication::translate("ADD", "ADD", 0));
        label->setText(QApplication::translate("ADD", "TextLabel", 0));
        pushButton->setText(QApplication::translate("ADD", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ADD: public Ui_ADD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
