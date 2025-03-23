/********************************************************************************
** Form generated from reading UI file 'createbill.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBILL_H
#define UI_CREATEBILL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateBill
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_exit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_billno;
    QVBoxLayout *verticalLayout;
    QLabel *Digital_clock;
    QLabel *DateTime;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_save;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_print;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_mobileno;
    QLabel *label_5;
    QLineEdit *lineEdit_add;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_productcode;
    QLabel *label_8;
    QLineEdit *lineEdit_quantity;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_value;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *CreateBill)
    {
        if (CreateBill->objectName().isEmpty())
            CreateBill->setObjectName(QString::fromUtf8("CreateBill"));
        CreateBill->resize(1284, 668);
        CreateBill->setMinimumSize(QSize(1284, 668));
        CreateBill->setMaximumSize(QSize(1284, 668));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        CreateBill->setWindowIcon(icon);
        centralwidget = new QWidget(CreateBill);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-color: white\n"
";\n"
"}\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(25, 25, 25, 25);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(130, 130));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/logo/logo.png);"));

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 60pt \"Segoe UI\";\n"
"color:black;"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy);
        pushButton_exit->setMinimumSize(QSize(90, 35));
        pushButton_exit->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 0, 0);\n"
"color: white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"border: 1pz solid black;\n"
""));

        horizontalLayout->addWidget(pushButton_exit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_billno = new QLineEdit(centralwidget);
        lineEdit_billno->setObjectName(QString::fromUtf8("lineEdit_billno"));
        lineEdit_billno->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        horizontalLayout_2->addWidget(lineEdit_billno);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Digital_clock = new QLabel(centralwidget);
        Digital_clock->setObjectName(QString::fromUtf8("Digital_clock"));
        Digital_clock->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(Digital_clock);

        DateTime = new QLabel(centralwidget);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(DateTime);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;\n"
""));

        horizontalLayout_3->addWidget(pushButton_save);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        horizontalLayout_3->addWidget(pushButton_clear);

        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;\n"
""));

        horizontalLayout_3->addWidget(pushButton_delete);

        pushButton_print = new QPushButton(centralwidget);
        pushButton_print->setObjectName(QString::fromUtf8("pushButton_print"));
        pushButton_print->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;\n"
""));

        horizontalLayout_3->addWidget(pushButton_print);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 50, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit_mobileno = new QLineEdit(centralwidget);
        lineEdit_mobileno->setObjectName(QString::fromUtf8("lineEdit_mobileno"));
        lineEdit_mobileno->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_mobileno);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEdit_add = new QLineEdit(centralwidget);
        lineEdit_add->setObjectName(QString::fromUtf8("lineEdit_add"));
        lineEdit_add->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_add);


        horizontalLayout_4->addLayout(formLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_productcode = new QLineEdit(centralwidget);
        lineEdit_productcode->setObjectName(QString::fromUtf8("lineEdit_productcode"));
        lineEdit_productcode->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_productcode);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_quantity = new QLineEdit(centralwidget);
        lineEdit_quantity->setObjectName(QString::fromUtf8("lineEdit_quantity"));
        lineEdit_quantity->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px solid black;\n"
"border-radius: 3px;"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_quantity);


        horizontalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("border: 2px solid black"));

        verticalLayout_2->addWidget(tableView);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
""));

        verticalLayout_2->addWidget(label_2);

        label_value = new QLabel(centralwidget);
        label_value->setObjectName(QString::fromUtf8("label_value"));
        label_value->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 700 10pt \"Segoe UI\";\n"
"border:1px solid black;"));

        verticalLayout_2->addWidget(label_value);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        CreateBill->setCentralWidget(centralwidget);

        retranslateUi(CreateBill);

        QMetaObject::connectSlotsByName(CreateBill);
    } // setupUi

    void retranslateUi(QMainWindow *CreateBill)
    {
        CreateBill->setWindowTitle(QCoreApplication::translate("CreateBill", "Bill", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("CreateBill", "BillX", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("CreateBill", "EXIT", nullptr));
        label_3->setText(QCoreApplication::translate("CreateBill", "Bill Number :", nullptr));
        Digital_clock->setText(QCoreApplication::translate("CreateBill", "Clock", nullptr));
        DateTime->setText(QCoreApplication::translate("CreateBill", "Date And Time", nullptr));
        pushButton_save->setText(QCoreApplication::translate("CreateBill", "SAVE", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("CreateBill", "CLEAR", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("CreateBill", "DELETE", nullptr));
        pushButton_print->setText(QCoreApplication::translate("CreateBill", "PRINT", nullptr));
        label_6->setText(QCoreApplication::translate("CreateBill", "Mobile Number :", nullptr));
        label_5->setText(QCoreApplication::translate("CreateBill", "Address : ", nullptr));
        label_7->setText(QCoreApplication::translate("CreateBill", "Product Code :", nullptr));
        label_8->setText(QCoreApplication::translate("CreateBill", "Quantity : ", nullptr));
        label_2->setText(QCoreApplication::translate("CreateBill", "Price :", nullptr));
        label_value->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateBill: public Ui_CreateBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBILL_H
