#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (!connectionStart())
        ui -> loginstatus -> setText("Database Fail");
    else
        ui -> loginstatus -> setText("Database Connected");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginbutton_clicked()
{
    QString phonenumber, password;
    phonenumber = ui->lineEdit_phonenumber->text();
    password = ui->lineEdit_password->text();

    if(!connectionStart()){
        qDebug()<<"Failed to open database";
        return;
    }

    connectionStart();

    QSqlQuery login_e_qry,login_a_qry;
    if(ui->radioButton_employee->isChecked()){
        logintype_employee();
        login_e_qry.prepare("SELECT * FROM reg_database WHERE RegType = 'E' and PhoneNumber ='"+phonenumber+"' and password ='"+password+"'");
        if (login_e_qry.exec()){
            int count = 0;
            while (login_e_qry.next()){
                count++;
            }
            if (count==1){
                ui->loginstatus->setText("Correct Username and Password");
                connectionClose();
                logdata="E";
                this -> hide();
                e_dboard = new employee_dashboard(this, logdata);
                e_dboard -> show();
            }
            if (count>1)
                ui->loginstatus->setText("Duplicate Username and Password");
            if (count<1)
                QMessageBox::critical(this,"","Incorrect Phone Number or Password");
            connectionClose();
        }
    }
    else if(ui->radioButton_admin->isChecked()){
        logintype_admin();
        login_a_qry.prepare("SELECT * FROM admin WHERE adminid ='"+phonenumber+"' and adminpassword ='"+password+"'");
        if(login_a_qry.exec()){
            int count = 0;
            while (login_a_qry.next()){
                count++;
            }
            if (count==1){
                ui->loginstatus->setText("Correct Username and Password");
                connectionClose();
                logdata="A";
                this -> hide();
                dboard = new Dashboard(this, logdata);
                dboard -> show();
            }
            if (count>1)
                ui->loginstatus->setText("Duplicate Username and Password");
            if (count<1)
                QMessageBox::critical(this,"","Incorrect Phone Number or Password");
            connectionClose();
        }
    }
    else{
        QMessageBox::critical(this,"","Login Type not Selected");

    }
}

