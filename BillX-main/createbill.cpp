#include "createbill.h"
#include "ui_createbill.h"
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include "mainwindow.h"
#include "dashboard.h"

Dashboard *dashc;
employee_dashboard *dashe;

QString logdata2;
CreateBill::CreateBill(QWidget *parent, QString ld_2) :
    QMainWindow(parent),
    ui(new Ui::CreateBill)
{
    ui->setupUi(this);
    logdata2=ld_2;
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();

    QDate date=QDate::currentDate();
    QString datetext=date.toString();
    ui->DateTime->setText(datetext);
}
void CreateBill:: showTime()
{   
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    if ((time.second()%2)==0)
    {
        time_text[3]= ' ';
        time_text[8]= ' ';
    }
    ui->Digital_clock->setText(time_text);

}

CreateBill::~CreateBill()
{
    delete ui;
}

void CreateBill::on_pushButton_save_clicked()
{
    QString billno, mobileno, add, productid,item, rate, quantity, price, quan, q, discount, mno, dprice, pid;
    float pr, qu, dis=0, np;
    MainWindow conn;
    QString chbill="Y";

    conn.connectionStart();

    billno=ui->lineEdit_billno->text();
    add=ui->lineEdit_add->text();
    mobileno=ui->lineEdit_mobileno->text();
    productid=ui->lineEdit_productcode->text();
    quantity=ui->lineEdit_quantity->text();

    if(billno.isEmpty() || add.isEmpty() || mobileno.isEmpty() || productid.isEmpty() || quantity.isEmpty()){
        QMessageBox::critical(this,tr("Error"),tr("Values cannot be empty!"));

    }

    else{
        for (int i =0;i<billno.size();i++){
            if (!billno[i].isDigit()){chbill="X";}
        }
        for (int i=0;i<quantity.size(); i++){
            if(!quantity[i].isDigit()){chbill="X";}
        }
        front:
        if (chbill=="X"){QMessageBox::critical(this,tr("Error"),tr("Check your data!"));}
        else{
        QSqlQuery *logqry=new QSqlQuery(conn.mydb);

        QSqlQuery irqry, inqry, memqry;

        irqry.exec("SELECT productid, item, Price, Quantity FROM inventory WHERE productid='"+productid+"'");

        while(irqry.next()){
            pid = irqry.value(0).toString();
            item = irqry.value(1).toString();
            rate = irqry.value(2).toString();
            quan = irqry.value(3).toString();
            qDebug() << item << rate;
        }

        if (pid!=productid){chbill="X"; goto front;}

        qu = quan.toInt()-quantity.toInt();
        q=QString::number(qu);

        inqry.prepare("UPDATE inventory SET Quantity = '"+q+"' WHERE productid='"+productid+"'");

        pr=rate.toFloat()*quantity.toFloat();
        price=QString::number(pr);

        memqry.prepare("SELECT PhoneNumber FROM reg_database WHERE RegType='M'");
        memqry.exec();
        while(memqry.next()){
            mno = memqry.value(0).toString();
            if (mobileno==mno) dis=0.1*pr;
            qDebug()<<"Discount:"<<dis;
        }

        discount=QString::number(dis);
        np=pr-dis;
        dprice=QString::number(np);


        logqry->prepare("INSERT INTO billlog(billnumber, address, mobilenumber, productcode, item, rate, quantity, price, discount, newprice) "
                        "values('"+billno+"', '"+add+"','"+mobileno+"','"+productid+"','"+item+"','"+rate+"','"+quantity+"','"+price+"','"+discount+"','"+dprice+"')");
        if(logqry->exec()){
            if(inqry.exec()) qDebug()<<"query runs"; else qDebug()<<"query doesn't run";
            QMessageBox::information(this, tr("Save"), tr("Data Saved"));
        }
        else{
            qDebug()<<"Bill not saved";
            QMessageBox::critical(this, tr("Save"), tr("Not Saved, Check your Values"));
        }
        }
    }
    conn.connectionClose();
}

void CreateBill::on_pushButton_print_clicked()
{
    QString billno, price;
    total=0;

    billno=ui->lineEdit_billno->text();

    MainWindow conn;
    QSqlQueryModel *modal=new QSqlQueryModel();

    conn.connectionStart();
    QSqlQuery *billqry=new QSqlQuery(conn.mydb);

    billqry->prepare("SELECT productcode, item, rate, quantity, price, discount, newprice FROM billlog WHERE billnumber='"+billno+"'");
    billqry->exec();

    while (billqry->next()){
        price = billqry->value(6).toString();
        total=total+price.toFloat();
    }

    modal->setQuery(std::move(*billqry));

    ui->tableView->setModel(modal);

    ui->label_value->setText(QString::number(total));

    conn.connectionClose();
}

void CreateBill::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();

    MainWindow conn;

    conn.connectionStart();

    QSqlQuery bviewqry;

    bviewqry.prepare("SELECT * FROM billlog where productcode = '"+val+"'");
    if(bviewqry.exec()){
        while(bviewqry.next()){
            ui->lineEdit_mobileno->setText(bviewqry.value(2).toString());
            ui->lineEdit_add->setText(bviewqry.value(1).toString());
            ui->lineEdit_productcode->setText(bviewqry.value(3).toString());
            ui->lineEdit_quantity->setText(bviewqry.value(4).toString());
        }
    }

    conn.connectionClose();
}

void CreateBill::on_pushButton_exit_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox ::warning(this,"Exit","Do you want to exit ??",QMessageBox::Yes | QMessageBox::No);
    qDebug()<<logdata2;
            if (reply == QMessageBox::Yes) {
                if(logdata2.toUtf8()=="A"){
                    dashc=new Dashboard(this);
                    dashc->show();
                    hide();
                }
                else if(logdata2.toUtf8()=="E"){
                    dashe=new employee_dashboard(this);
                    dashe->show();

                }
            }
}

void CreateBill::on_pushButton_clear_clicked()
{
    ui->lineEdit_billno->clear();
    ui->lineEdit_mobileno->clear();
    ui->lineEdit_add->clear();
    ui->lineEdit_productcode->clear();
    ui->lineEdit_quantity->clear();
}

void CreateBill::on_pushButton_delete_clicked()
{
    QString productid;
    MainWindow conn;

    conn.connectionStart();
    productid=ui->lineEdit_productcode->text();

    QSqlQuery qry;
    qry.prepare("Delete from billlog where productcode='"+productid+"'");

    if (qry.exec()){
        QMessageBox::critical(this,tr("Delete"),tr("Deleted"));
        conn.connectionClose();
    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
        conn.connectionClose();
    }
}

