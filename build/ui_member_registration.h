/********************************************************************************
** Form generated from reading UI file 'member_registration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBER_REGISTRATION_H
#define UI_MEMBER_REGISTRATION_H

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

class Ui_member_registration
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
    QPushButton *pushButton_register;
    QLabel *label;

    void setupUi(QDialog *member_registration)
    {
        if (member_registration->objectName().isEmpty())
            member_registration->setObjectName(QString::fromUtf8("member_registration"));
        member_registration->resize(454, 529);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        member_registration->setWindowIcon(icon);
        member_registration->setStyleSheet(QString::fromUtf8("background-color: white;"));
        groupBox = new QGroupBox(member_registration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 80, 311, 301));
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

        pushButton_register = new QPushButton(layoutWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"color:white;"));

        verticalLayout->addWidget(pushButton_register);

        label = new QLabel(member_registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 480, 63, 20));

        retranslateUi(member_registration);

        QMetaObject::connectSlotsByName(member_registration);
    } // setupUi

    void retranslateUi(QDialog *member_registration)
    {
        member_registration->setWindowTitle(QCoreApplication::translate("member_registration", "Register", nullptr));
        groupBox->setTitle(QCoreApplication::translate("member_registration", "MEMBER REGISTER", nullptr));
        label_2->setText(QCoreApplication::translate("member_registration", "First Name:       ", nullptr));
        label_3->setText(QCoreApplication::translate("member_registration", "Last Name:       ", nullptr));
        label_4->setText(QCoreApplication::translate("member_registration", "Phone Number:", nullptr));
        pushButton_register->setText(QCoreApplication::translate("member_registration", "REGISTER", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class member_registration: public Ui_member_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBER_REGISTRATION_H
