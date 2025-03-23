/********************************************************************************
** Form generated from reading UI file 'employee_registration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_REGISTRATION_H
#define UI_EMPLOYEE_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employee_registration
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_firstname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_lastname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_phonenumber;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_register;
    QLabel *label;

    void setupUi(QDialog *employee_registration)
    {
        if (employee_registration->objectName().isEmpty())
            employee_registration->setObjectName(QString::fromUtf8("employee_registration"));
        employee_registration->resize(407, 486);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        employee_registration->setWindowIcon(icon);
        employee_registration->setStyleSheet(QString::fromUtf8("background-color: white;"));
        groupBox = new QGroupBox(employee_registration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 70, 311, 301));
        groupBox->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color:black;"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 261, 249));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_firstname = new QLineEdit(layoutWidget);
        lineEdit_firstname->setObjectName(QString::fromUtf8("lineEdit_firstname"));
        lineEdit_firstname->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout->addWidget(lineEdit_firstname);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_lastname = new QLineEdit(layoutWidget);
        lineEdit_lastname->setObjectName(QString::fromUtf8("lineEdit_lastname"));
        lineEdit_lastname->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout_2->addWidget(lineEdit_lastname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_phonenumber = new QLineEdit(layoutWidget);
        lineEdit_phonenumber->setObjectName(QString::fromUtf8("lineEdit_phonenumber"));
        lineEdit_phonenumber->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout_3->addWidget(lineEdit_phonenumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: white;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_register = new QPushButton(layoutWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setStyleSheet(QString::fromUtf8("background-color:rgb(18,10,131);\n"
"color:white;"));

        verticalLayout->addWidget(pushButton_register);

        label = new QLabel(employee_registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 430, 63, 20));

        retranslateUi(employee_registration);

        QMetaObject::connectSlotsByName(employee_registration);
    } // setupUi

    void retranslateUi(QDialog *employee_registration)
    {
        employee_registration->setWindowTitle(QCoreApplication::translate("employee_registration", "Register", nullptr));
        groupBox->setTitle(QCoreApplication::translate("employee_registration", "EMPLOYEE REGISTER", nullptr));
        label_2->setText(QCoreApplication::translate("employee_registration", "First Name:       ", nullptr));
        label_3->setText(QCoreApplication::translate("employee_registration", "Last Name:       ", nullptr));
        label_4->setText(QCoreApplication::translate("employee_registration", "Phone Number:", nullptr));
        label_5->setText(QCoreApplication::translate("employee_registration", "Password:         ", nullptr));
        pushButton_register->setText(QCoreApplication::translate("employee_registration", "REGISTER", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class employee_registration: public Ui_employee_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_REGISTRATION_H
