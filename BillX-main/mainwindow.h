#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <string>

#include "dashboard.h"
#include "employee_dashboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    QString logdata;
    bool connectionStart(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("D:/Project/BillX-main/Database/data1.db");

        if (!mydb.open()){
            qDebug() << ("Database Fail");
            return false;
        }
        else{
            qDebug() << ("Database Connected");
            return true;
        }
    }

    QString logintype;
    void logintype_admin(){
        logintype="admin";
    };
    void logintype_employee(){
        logintype="employee";
    };

    void connectionClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_loginbutton_clicked();

private:
    Ui::MainWindow *ui;

    Dashboard *dboard;
    employee_dashboard *e_dboard;
};
#endif // MAINWINDOW_H
