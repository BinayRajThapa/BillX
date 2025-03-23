/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *id;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *quan;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName(QString::fromUtf8("Edit"));
        Edit->resize(706, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Edit->setWindowIcon(icon);
        Edit->setStyleSheet(QString::fromUtf8("background-color: rgb(158, 158, 158);"));
        layoutWidget = new QWidget(Edit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 60, 267, 207));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 500 10pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(label);

        id = new QLineEdit(layoutWidget);
        id->setObjectName(QString::fromUtf8("id"));
        id->setStyleSheet(QString::fromUtf8("background-color:white;"));

        verticalLayout->addWidget(id);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 500 10pt \"Segoe UI\";\n"
""));

        verticalLayout_2->addWidget(label_2);

        quan = new QLineEdit(layoutWidget);
        quan->setObjectName(QString::fromUtf8("quan"));
        quan->setStyleSheet(QString::fromUtf8("background-color: white;"));

        verticalLayout_2->addWidget(quan);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 500 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_3->addWidget(pushButton_4);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 500 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_3->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 500 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"font: 500 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_3->addWidget(pushButton_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Inventory", nullptr));
        label->setText(QCoreApplication::translate("Edit", "Product ID", nullptr));
        label_2->setText(QCoreApplication::translate("Edit", "Quantity", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Edit", "Subtract", nullptr));
        pushButton->setText(QCoreApplication::translate("Edit", "Add", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Edit", "Delete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Edit", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
