/********************************************************************************
** Form generated from reading UI file 'employee_dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_DASHBOARD_H
#define UI_EMPLOYEE_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employee_dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_logo;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_register;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_viewaccount;
    QPushButton *pushButton_createbill;
    QPushButton *pushButton_inventory;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *employee_dashboard)
    {
        if (employee_dashboard->objectName().isEmpty())
            employee_dashboard->setObjectName(QString::fromUtf8("employee_dashboard"));
        employee_dashboard->resize(863, 600);
        employee_dashboard->setMinimumSize(QSize(863, 600));
        employee_dashboard->setMaximumSize(QSize(863, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        employee_dashboard->setWindowIcon(icon);
        centralwidget = new QWidget(employee_dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setMinimumSize(QSize(225, 225));
        label_logo->setStyleSheet(QString::fromUtf8("border-image:url(:/img/logo/logo.png);"));

        verticalLayout_2->addWidget(label_logo);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_register = new QPushButton(centralwidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setMinimumSize(QSize(0, 200));
        pushButton_register->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(pushButton_register, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        pushButton_viewaccount = new QPushButton(centralwidget);
        pushButton_viewaccount->setObjectName(QString::fromUtf8("pushButton_viewaccount"));
        pushButton_viewaccount->setMinimumSize(QSize(200, 200));
        pushButton_viewaccount->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(pushButton_viewaccount, 3, 2, 1, 1);

        pushButton_createbill = new QPushButton(centralwidget);
        pushButton_createbill->setObjectName(QString::fromUtf8("pushButton_createbill"));
        pushButton_createbill->setMinimumSize(QSize(200, 200));
        pushButton_createbill->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(pushButton_createbill, 1, 0, 1, 1);

        pushButton_inventory = new QPushButton(centralwidget);
        pushButton_inventory->setObjectName(QString::fromUtf8("pushButton_inventory"));
        pushButton_inventory->setMinimumSize(QSize(200, 200));
        pushButton_inventory->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(pushButton_inventory, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 45));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_4, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        employee_dashboard->setCentralWidget(centralwidget);

        retranslateUi(employee_dashboard);

        QMetaObject::connectSlotsByName(employee_dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *employee_dashboard)
    {
        employee_dashboard->setWindowTitle(QCoreApplication::translate("employee_dashboard", "Employee Dashboard", nullptr));
        label->setText(QCoreApplication::translate("employee_dashboard", "EMPLOYEE MODE", nullptr));
        label_logo->setText(QString());
        pushButton_register->setText(QCoreApplication::translate("employee_dashboard", "REGISTER", nullptr));
        pushButton_viewaccount->setText(QCoreApplication::translate("employee_dashboard", "VIEW ACCOUNT", nullptr));
        pushButton_createbill->setText(QCoreApplication::translate("employee_dashboard", "CREATE BILL", nullptr));
        pushButton_inventory->setText(QCoreApplication::translate("employee_dashboard", "INVENTORY", nullptr));
        pushButton->setText(QCoreApplication::translate("employee_dashboard", "Sign out ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employee_dashboard: public Ui_employee_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_DASHBOARD_H
