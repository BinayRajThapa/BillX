/********************************************************************************
** Form generated from reading UI file 'cap.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAP_H
#define UI_CAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_cap
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_op;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_np;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_change;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *cap)
    {
        if (cap->objectName().isEmpty())
            cap->setObjectName(QString::fromUtf8("cap"));
        cap->resize(300, 300);
        cap->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cap->setWindowIcon(icon);
        cap->setStyleSheet(QString::fromUtf8("background:white;\n"
""));
        verticalLayout_2 = new QVBoxLayout(cap);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 15);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(cap);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(cap);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_op = new QLineEdit(cap);
        lineEdit_op->setObjectName(QString::fromUtf8("lineEdit_op"));

        horizontalLayout->addWidget(lineEdit_op);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(cap);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_np = new QLineEdit(cap);
        lineEdit_np->setObjectName(QString::fromUtf8("lineEdit_np"));

        horizontalLayout_2->addWidget(lineEdit_np);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_change = new QPushButton(cap);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setStyleSheet(QString::fromUtf8("background-color: rgb(18,10,131);\n"
"color:white;"));

        horizontalLayout_3->addWidget(pushButton_change);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(cap);

        QMetaObject::connectSlotsByName(cap);
    } // setupUi

    void retranslateUi(QDialog *cap)
    {
        cap->setWindowTitle(QCoreApplication::translate("cap", "BillX", nullptr));
        label->setText(QCoreApplication::translate("cap", "                       CHANGE PASSWORD", nullptr));
        label_2->setText(QCoreApplication::translate("cap", "Old Password: ", nullptr));
        label_3->setText(QCoreApplication::translate("cap", "New Password:", nullptr));
        pushButton_change->setText(QCoreApplication::translate("cap", "CHANGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cap: public Ui_cap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAP_H
