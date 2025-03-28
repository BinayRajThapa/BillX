#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "mainwindow.h"


MainWindow*dashd;

QString ld_;
Dashboard::Dashboard(QWidget *parent, QString ld) :
    QMainWindow(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    ld_=ld;
}

Dashboard::~Dashboard()
{
    delete ui;
}



void Dashboard::on_createbillbutton_clicked()
{
    cb= new CreateBill(this, ld_);
    cb->show();
    hide();
}


void Dashboard::on_inventorybutton_clicked()
{
    iv= new Inventory(this);
    iv->show();

}


void Dashboard::on_viewaccountbutton_clicked()
{
    va= new ViewAccounts(this);
    va->show();

}


void Dashboard::on_registerbutton_clicked()
{
    ra= new registerDialog(this);
    ra->show();
}


void Dashboard::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox ::warning(this,"Exit","Do you want to sign out ??",QMessageBox::Yes | QMessageBox::No);
            if (reply == QMessageBox::Yes) {
                dashd=new MainWindow(this);
                dashd->show();
                hide();
            }
}


void Dashboard::on_pushButton_cap_clicked()
{
    cp= new cap(this);
    cp->show();
}

