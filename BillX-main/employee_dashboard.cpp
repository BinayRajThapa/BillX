#include "employee_dashboard.h"
#include "ui_employee_dashboard.h"
#include<QMessageBox>

#include "mainwindow.h"


MainWindow*dashde;

QString eld_;
employee_dashboard::employee_dashboard(QWidget *parent, QString eld) :
    QMainWindow(parent),
    ui(new Ui::employee_dashboard)
{
    ui->setupUi(this);
    eld_=eld;
}

employee_dashboard::~employee_dashboard()
{
    delete ui;
}

void employee_dashboard::on_pushButton_createbill_clicked()
{
    cb= new CreateBill(this, eld_);
    cb->show();
    hide();

}


void employee_dashboard::on_pushButton_inventory_clicked()
{
    iv= new Inventory(this);
    iv->show();
    //hide();

}


void employee_dashboard::on_pushButton_register_clicked()
{
    m_r= new member_registration(this);
    m_r->show();

}


void employee_dashboard::on_pushButton_viewaccount_clicked()
{
    va= new ViewAccounts(this);
    va->show();
    //hide();

}


void employee_dashboard::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox ::warning(this,"Exit","Do you want to sign out ??",QMessageBox::Yes | QMessageBox::No);
            if (reply == QMessageBox::Yes) {
                dashde=new MainWindow(this);
                dashde->show();
                hide();
            }
}

