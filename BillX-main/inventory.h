#ifndef INVENTORY_H
#define INVENTORY_H
#include "edit.h"
#include <QMainWindow>
#include"addproduct.h"

namespace Ui {
class Inventory;
}

class Inventory : public QMainWindow
{
    Q_OBJECT

public:
    Edit *e;
    Addproduct *a;
    explicit Inventory(QWidget *parent = nullptr);
    ~Inventory();

private slots:
    void on_pushButton_2_clicked();

    void on_searchbutton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushbutton_addproduct_clicked();


private:
    Ui::Inventory *ui;
};

#endif // INVENTORY_H
