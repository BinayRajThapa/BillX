#include "cap.h"
#include "ui_cap.h"
#include "mainwindow.h"

#include <QMessageBox>

cap::cap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cap)
{
    ui->setupUi(this);
}

cap::~cap()
{
    delete ui;
}

void cap::on_pushButton_change_clicked()
{
    QString np,op;
    np=ui->lineEdit_np->text();
    op=ui->lineEdit_op->text();

    MainWindow conn;
    conn.connectionStart();

    QSqlQuery qry,qry2;
    qry.prepare("SELECT * FROM admin WHERE adminpassword ='"+op+"'");
    if (qry.exec()){
        int count = 0;

        while (qry.next()){
            count++;
        }

        if (count==1){
            //QMessageBox::information(this,"INFO","Password Matches");
            qry2.prepare("UPDATE admin SET adminpassword='"+np+"'");
            if (qry2.exec()){
                QMessageBox::information(this,"INFO","Password Changed!");

            }

            conn.connectionClose();
        }
        if (count>1){
            QMessageBox::information(this,"Register","Successfully Registered!");
        }
        if (count<1){
            QMessageBox::information(this,"INFO","Password Does not Match");
        }

        conn.connectionClose();
    }
}

