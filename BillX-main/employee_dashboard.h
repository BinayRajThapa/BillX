#ifndef EMPLOYEE_DASHBOARD_H
#define EMPLOYEE_DASHBOARD_H

#include <QMainWindow>

#include "createbill.h"//class name is CreateBill
#include "inventory.h"// class name is Inventory
#include "member_registration.h"//class name is member_registration
#include "viewaccounts.h"//class name is ViewAccounts

namespace Ui {
class employee_dashboard;
}

class employee_dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit employee_dashboard(QWidget *parent = nullptr, QString eld = nullptr);
    ~employee_dashboard();

private slots:
    void on_pushButton_createbill_clicked();

    void on_pushButton_inventory_clicked();

    void on_pushButton_register_clicked();

    void on_pushButton_viewaccount_clicked();

    void on_pushButton_clicked();

private:
    Ui::employee_dashboard *ui;
    CreateBill *cb;
    Inventory *iv;
    member_registration *m_r;
    ViewAccounts *va;
};

#endif // EMPLOYEE_DASHBOARD_H
