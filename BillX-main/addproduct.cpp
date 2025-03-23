#include "addproduct.h"
#include "ui_addproduct.h"
#include "mainwindow.h"
#include "inventory.h"
#include<QMessageBox>

Addproduct::Addproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addproduct)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);
}

Addproduct::~Addproduct()
{
    delete ui;
}


void Addproduct::on_pushButton_cancel_clicked()
{
    this->hide();
}


void Addproduct::on_pushButton_addproduct_clicked()
{
        QString productid,name,price,quantity;
        productid = ui->lineEdit_productid->text();
        name = ui->lineEdit_name->text();
        price = ui->lineEdit_price->text();
        quantity = ui->lineEdit_quantity->text();

        MainWindow conn;
        conn.connectionStart();

        if(ui->lineEdit_productid->text().isEmpty() || ui->lineEdit_name->text().isEmpty() || ui->lineEdit_price->text().isEmpty() || ui->lineEdit_quantity->text().isEmpty()){
            QMessageBox::critical(this,tr("Register"),tr("Values cannot be empty!"));

            ui->lineEdit_productid->clear();
            ui->lineEdit_name->clear();
            ui->lineEdit_price->clear();
            ui->lineEdit_quantity->clear();
        }
        else{
            for (int i =0;i<price.size();i++){
                if (price[i].isDigit()){}
                else{
                    goto labeldetails;
                }
            }
            for (int i =0;i<quantity.size();i++){
                if (quantity[i].isDigit()){}
                else{
                    goto labeldetails;
                }
            }
            for (int i =0;i<name.size();i++){
                if (name[i].isDigit())
                    goto labeldetails;
            }

        QSqlQuery pidcheck;
        pidcheck.exec("SELECT productid FROM inventory");
        while (pidcheck.next()) {
               if(productid==pidcheck.value(0)){
                   goto label_pn_repeated;

               }
           }

        QSqlQuery addqry;
        addqry.prepare("INSERT INTO inventory VALUES ('"+productid+"',:a,'"+price+"','"+quantity+"')");
        addqry.bindValue(":a",name);

        if (addqry.exec()){
            QMessageBox::information(this,"Add","Successfully Added!");
            conn.connectionClose();
            this->hide();
        }
        else{
             QMessageBox::critical(this,tr("Error"),addqry.lastError().text());
        }
        }

        goto label1;

        labeldetails:
        QMessageBox::critical(this,tr("INFO"),tr("INVALID INFO"));
        ui->lineEdit_productid->clear();
        ui->lineEdit_name->clear();
        ui->lineEdit_price->clear();
        ui->lineEdit_quantity->clear();
        goto label1;

        label_pn_repeated:
        QMessageBox::critical(this,tr("INFO"),tr("ProductID Already in use!"));
        ui->lineEdit_productid->clear();
        ui->lineEdit_name->clear();
        ui->lineEdit_price->clear();
        ui->lineEdit_quantity->clear();

        label1:
        ui->label->setText(" ");

}

