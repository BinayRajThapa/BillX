/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

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

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QPushButton *pushButton_cap;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QPushButton *viewaccountbutton;
    QPushButton *registerbutton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *inventorybutton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *createbillbutton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->setEnabled(true);
        Dashboard->resize(877, 600);
        Dashboard->setMinimumSize(QSize(863, 600));
        Dashboard->setMaximumSize(QSize(877, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dashboard->setWindowIcon(icon);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-color: rgb(158, 158, 158);\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: black;\n"
"border: 1px;\n"
"border-radius: 3px;"));

        verticalLayout_4->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(225, 225));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/logo/logo.png);"));

        verticalLayout_4->addWidget(label);

        pushButton_cap = new QPushButton(centralwidget);
        pushButton_cap->setObjectName(QString::fromUtf8("pushButton_cap"));

        verticalLayout_4->addWidget(pushButton_cap);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);

        viewaccountbutton = new QPushButton(centralwidget);
        viewaccountbutton->setObjectName(QString::fromUtf8("viewaccountbutton"));
        viewaccountbutton->setMinimumSize(QSize(200, 200));
        viewaccountbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(viewaccountbutton, 4, 0, 1, 1);

        registerbutton = new QPushButton(centralwidget);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setMinimumSize(QSize(200, 200));
        registerbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(registerbutton, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        inventorybutton = new QPushButton(centralwidget);
        inventorybutton->setObjectName(QString::fromUtf8("inventorybutton"));
        inventorybutton->setMinimumSize(QSize(200, 200));
        inventorybutton->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(inventorybutton, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        createbillbutton = new QPushButton(centralwidget);
        createbillbutton->setObjectName(QString::fromUtf8("createbillbutton"));
        createbillbutton->setMinimumSize(QSize(200, 200));
        createbillbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        gridLayout->addWidget(createbillbutton, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 45));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px;\n"
"border-radius: 3px;"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Dashboard->setCentralWidget(centralwidget);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Admin Dashboard", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "ADMIN MODE", nullptr));
        label->setText(QString());
        pushButton_cap->setText(QCoreApplication::translate("Dashboard", "Change Admin Password", nullptr));
        viewaccountbutton->setText(QCoreApplication::translate("Dashboard", "VIEW ACCOUNTS", nullptr));
        registerbutton->setText(QCoreApplication::translate("Dashboard", "REGISTER ACCOUNT", nullptr));
        inventorybutton->setText(QCoreApplication::translate("Dashboard", "INVENTORY", nullptr));
        createbillbutton->setText(QCoreApplication::translate("Dashboard", "CREATE BILL", nullptr));
        pushButton->setText(QCoreApplication::translate("Dashboard", "Sign out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
