#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>

namespace Ui {
class Addproduct;
}

class Addproduct : public QDialog
{
    Q_OBJECT

public:
    explicit Addproduct(QWidget *parent = nullptr);
    ~Addproduct();

private slots:


    void on_pushButton_addproduct_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::Addproduct *ui;
};

#endif // ADDPRODUCT_H
