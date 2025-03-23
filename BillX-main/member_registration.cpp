#include "member_registration.h"
#include "ui_member_registration.h"
#include "mainwindow.h"
#include <QMessageBox>

member_registration::member_registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::member_registration)
{
    ui->setupUi(this);
}

member_registration::~member_registration()
{
    delete ui;
}

void member_registration::on_pushButton_register_clicked()
{
    QString firstname,lastname,phonenumber,registrationtype;
    firstname = ui->lineEdit_firstname->text();
    lastname = ui->lineEdit_lastname->text();
    phonenumber = ui->lineEdit_phonenumber->text();
    registrationtype='M';

    MainWindow conn;
    conn.connectionStart();

    if(ui->lineEdit_phonenumber->text().isEmpty() || ui->lineEdit_firstname->text().isEmpty() || ui->lineEdit_lastname->text().isEmpty()){
        QMessageBox::critical(this,tr("Register"),tr("Values cannot be empty!"));

        ui->lineEdit_phonenumber->clear();
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
            if (firstname[i].isDigit()){
                goto labeldetails;
            }
        }
        for (int i =0;i<lastname.size();i++){
            if (lastname[i].isDigit()){
                goto labeldetails;
            }
        }

    QSqlQuery pncheck;
    pncheck.exec("SELECT PhoneNumber FROM reg_database");
    while (pncheck.next()) {
           if(phonenumber==pncheck.value(0)){
               goto label_pn_repeated;

           }
       }

    QSqlQuery registerqry;
    registerqry.prepare("INSERT INTO reg_database (FirstName,LastName,PhoneNumber,Password,RegType) VALUES(:firstname, :lastname, :phonenumber, :password, :radiobuttonvalue)");
    registerqry.bindValue(":firstname", firstname);
    registerqry.bindValue(":lastname", lastname);
    registerqry.bindValue(":phonenumber", phonenumber);
    registerqry.bindValue(":password", NULL);
    registerqry.bindValue(":radiobuttonvalue", registrationtype);

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
    ui->lineEdit_firstname->clear();
    ui->lineEdit_lastname->clear();
    goto label1;

    label_pn_repeated:
    QMessageBox::critical(this,tr("INFO"),tr("Phone Number Already in use!"));
    ui->lineEdit_phonenumber->clear();
    ui->lineEdit_firstname->clear();
    ui->lineEdit_lastname->clear();

    label1:
    ui->label->setText(" ");
}

