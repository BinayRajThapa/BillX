/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addproduct
{
public:
    QLabel *label_pid;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_productid;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdit_quantity;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_addproduct;
    QPushButton *pushButton_cancel;
    QLabel *label;

    void setupUi(QDialog *Addproduct)
    {
        if (Addproduct->objectName().isEmpty())
            Addproduct->setObjectName(QString::fromUtf8("Addproduct"));
        Addproduct->resize(708, 440);
        label_pid = new QLabel(Addproduct);
        label_pid->setObjectName(QString::fromUtf8("label_pid"));
        label_pid->setGeometry(QRect(90, 160, 101, 31));
        label_pid->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));
        label_2 = new QLabel(Addproduct);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 160, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));
        label_3 = new QLabel(Addproduct);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 160, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));
        label_4 = new QLabel(Addproduct);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 160, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));
        layoutWidget = new QWidget(Addproduct);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 200, 523, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_productid = new QLineEdit(layoutWidget);
        lineEdit_productid->setObjectName(QString::fromUtf8("lineEdit_productid"));
        lineEdit_productid->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        horizontalLayout->addWidget(lineEdit_productid);

        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        horizontalLayout->addWidget(lineEdit_name);

        lineEdit_price = new QLineEdit(layoutWidget);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));
        lineEdit_price->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        horizontalLayout->addWidget(lineEdit_price);

        lineEdit_quantity = new QLineEdit(layoutWidget);
        lineEdit_quantity->setObjectName(QString::fromUtf8("lineEdit_quantity"));
        lineEdit_quantity->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        horizontalLayout->addWidget(lineEdit_quantity);

        layoutWidget1 = new QWidget(Addproduct);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(300, 250, 135, 67));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_addproduct = new QPushButton(layoutWidget1);
        pushButton_addproduct->setObjectName(QString::fromUtf8("pushButton_addproduct"));
        pushButton_addproduct->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;\n"
""));

        verticalLayout->addWidget(pushButton_addproduct);

        pushButton_cancel = new QPushButton(layoutWidget1);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 0, 0);\n"
"color: white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"border: 1pz solid black;\n"
""));

        verticalLayout->addWidget(pushButton_cancel);

        label = new QLabel(Addproduct);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 410, 63, 20));

        retranslateUi(Addproduct);

        QMetaObject::connectSlotsByName(Addproduct);
    } // setupUi

    void retranslateUi(QDialog *Addproduct)
    {
        Addproduct->setWindowTitle(QCoreApplication::translate("Addproduct", "Dialog", nullptr));
        label_pid->setText(QCoreApplication::translate("Addproduct", "Product ID", nullptr));
        label_2->setText(QCoreApplication::translate("Addproduct", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("Addproduct", "Price", nullptr));
        label_4->setText(QCoreApplication::translate("Addproduct", "Quantity", nullptr));
        pushButton_addproduct->setText(QCoreApplication::translate("Addproduct", "ADD PRODUCTS", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Addproduct", "EXIT", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Addproduct: public Ui_Addproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
