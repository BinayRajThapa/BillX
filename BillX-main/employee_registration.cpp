#include "employee_registration.h"
#include "ui_employee_registration.h"
#include "mainwindow.h"
#include <QMessageBox>

employee_registration::employee_registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee_registration)
{
    ui->setupUi(this);
}

employee_registration::~employee_registration()
{
    delete ui;
}

void employee_registration::on_pushButton_register_clicked()
{
    QString firstname,lastname,phonenumber,password,registrationtype;
    firstname = ui->lineEdit_firstname->text();
    lastname = ui->lineEdit_lastname->text();
    phonenumber = ui->lineEdit_phonenumber->text();
    password = ui->lineEdit_password->text();
    registrationtype='E';

    MainWindow conn;
    conn.connectionStart();

    if(ui->lineEdit_phonenumber->text().isEmpty() || ui->lineEdit_password->text().isEmpty() || ui->lineEdit_firstname->text().isEmpty() || ui->lineEdit_lastname->text().isEmpty()){
        QMessageBox::critical(this,tr("Register"),tr("Values cannot be empty!"));

        ui->lineEdit_phonenumber->clear();
        ui->lineEdit_password->clear();
        ui->lineEdit_firstname->clear();
        ui->lineEdit_lastname->clear();
    }
    else{
        for (int i =0;i<phonenumber.size();i++){
            if (phonenumber[i].isDigit()){}
            else{
                goto labeldetails;
            }

            if(phonenumber.size()<10 || phonenumber.size()>10){
                goto labeldetails;
            }

        }
        for (int i =0;i<firstname.size();i++){
            if (firstname[i].isDigit())
                goto labeldetails;
        }
        for (int i =0;i<lastname.size();i++){
            if (lastname[i].isDigit())
                goto labeldetails;
        }



    QSqlQuery pncheck;
    pncheck.exec("SELECT PhoneNumber FROM reg_database");
    while (pncheck.next()) {
           if(phonenumber==pncheck.value(0)){
               goto label_pn_repeated;

           }
       }

    QSqlQuery registerqry;
    registerqry.prepare("INSERT INTO reg_database (FirstName,LastName,PhoneNumber,Password,RegType) VALUES(:firstname, :lastname, :phonenumber, :password, :registrationtype)");
    registerqry.bindValue(":firstname", firstname);
    registerqry.bindValue(":lastname", lastname);
    registerqry.bindValue(":phonenumber", phonenumber);
    registerqry.bindValue(":password", password);
    registerqry.bindValue(":registrationtype", registrationtype);

    if (registerqry.exec()){
        QMessageBox::information(this,"Register","Successfully Registered!");
        conn.connectionClose();
        this->hide();
    }
    else{
         QMessageBox::critical(this,tr("Error"),registerqry.lastError().text());
    }
    }

    goto label1;

    labeldetails:
    QMessageBox::critical(this,tr("INFO"),tr("INVALID INFO"));
    ui->lineEdit_phonenumber->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_firstname->clear();
    ui->lineEdit_lastname->clear();
    goto label1;

    label_pn_repeated:
    QMessageBox::critical(this,tr("INFO"),tr("Phone Number Already in use!"));
    ui->lineEdit_phonenumber->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_firstname->clear();
    ui->lineEdit_lastname->clear();

    label1:
    ui->label->setText(" ");

}

