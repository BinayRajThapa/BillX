#ifndef CREATEBILL_H
#define CREATEBILL_H

#include <QMainWindow>
#include <string>


namespace Ui {
class CreateBill;
}

class CreateBill : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateBill(QWidget *parent = nullptr, QString ld_2=nullptr);
    ~CreateBill();

    int ival=0;
    float total=0;
    int iquantity=0;



private slots:

    void showTime();

    void on_pushButton_save_clicked();

    void on_pushButton_print_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_exit_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::CreateBill *ui;
};

#endif // CREATEBILL_H
