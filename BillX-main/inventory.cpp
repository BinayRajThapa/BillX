#include "inventory.h"
#include "mainwindow.h"
#include "ui_inventory.h"
#include "edit.h"
#include "dashboard.h"
#include<QMessageBox>

Dashboard *dashi;



Inventory::Inventory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inventory)
{
    ui->setupUi(this);
    MainWindow conn;
        QSqlQueryModel *inven= new QSqlQueryModel();


        conn.connectionStart();
        QSqlQuery *invenqry=new QSqlQuery(conn.mydb);


        invenqry->prepare("SELECT * from inventory");


        invenqry->exec();
        inven->setQuery(*invenqry);


        ui->tableView->setModel(inven);

        conn.connectionClose();
        ui->search->setPlaceholderText("ID/Name");


            QPixmap pix("D:/Project/BillX-main/logo/logo/logo");
            ui->logo->setPixmap(pix.scaled(90,90,Qt::KeepAspectRatio));

            QIcon icon2;
                    icon2.addFile(QString::fromUtf8("D:/Project/BillX-main/logo/search.png"), QSize(), QIcon::Normal, QIcon::Off);
                    ui->searchbutton->setIcon(icon2);
                    ui->searchbutton->setIconSize(QSize(20, 20));

}

Inventory::~Inventory()
{
    delete ui;
}

void Inventory::on_pushButton_2_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select * from inventory");

    qry -> exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    qry->clear();

    conn.connectionClose();
    qDebug() <<(modal->rowCount());
}


void Inventory::on_searchbutton_clicked()
{
    MainWindow conn;
    QString name;
    name=ui->search->text();
    QSqlQueryModel * modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);

    qry->prepare("select * from inventory where item='"+name+"' or productid='"+name+"'");

    qry -> exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    qry->clear();

    conn.connectionClose();
    qDebug() <<(modal->rowCount());

}



void Inventory::on_pushButton_3_clicked()
{
    /*Edit dialog;
       dialog.setModal(true);
       dialog.exec();*/
    e = new Edit();
    e->show();
}


void Inventory::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox ::warning(this,"Exit","Do you want to exit ??",QMessageBox::Yes | QMessageBox::No);
            if (reply == QMessageBox::Yes) {
                //dashi=new Dashboard(this);
                //dashi->show();
                hide();
            }
}


void Inventory::on_pushbutton_addproduct_clicked()
{
    a = new Addproduct();
        a->show();
}




