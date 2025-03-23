/********************************************************************************
** Form generated from reading UI file 'viewaccounts.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWACCOUNTS_H
#define UI_VIEWACCOUNTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAccounts
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView_employee;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView_member;
    QPushButton *pushButton;

    void setupUi(QMainWindow *ViewAccounts)
    {
        if (ViewAccounts->objectName().isEmpty())
            ViewAccounts->setObjectName(QString::fromUtf8("ViewAccounts"));
        ViewAccounts->resize(800, 600);
        ViewAccounts->setMinimumSize(QSize(800, 600));
        ViewAccounts->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewAccounts->setWindowIcon(icon);
        centralwidget = new QWidget(ViewAccounts);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-color: white;\n"
"}"));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 90, 761, 481));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 10, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 10, 5, -1);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: black;"));

        verticalLayout->addWidget(label);

        tableView_employee = new QTableView(horizontalLayoutWidget_2);
        tableView_employee->setObjectName(QString::fromUtf8("tableView_employee"));
        tableView_employee->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tableView_employee);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 10, 5, -1);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: black;"));

        verticalLayout_2->addWidget(label_2);

        tableView_member = new QTableView(horizontalLayoutWidget_2);
        tableView_member->setObjectName(QString::fromUtf8("tableView_member"));
        tableView_member->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(tableView_member);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(652, 30, 90, 45));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 14, 38);\n"
"font: 700 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid black;\n"
""));
        ViewAccounts->setCentralWidget(centralwidget);

        retranslateUi(ViewAccounts);

        QMetaObject::connectSlotsByName(ViewAccounts);
    } // setupUi

    void retranslateUi(QMainWindow *ViewAccounts)
    {
        ViewAccounts->setWindowTitle(QCoreApplication::translate("ViewAccounts", "View Accounts", nullptr));
        label->setText(QCoreApplication::translate("ViewAccounts", "EMPLOYEE", nullptr));
        label_2->setText(QCoreApplication::translate("ViewAccounts", "MEMBER", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewAccounts", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAccounts: public Ui_ViewAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWACCOUNTS_H
