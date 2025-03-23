#ifndef CAP_H
#define CAP_H

#include <QDialog>

namespace Ui {
class cap;
}

class cap : public QDialog
{
    Q_OBJECT

public:
    explicit cap(QWidget *parent = nullptr);
    ~cap();

private slots:
    void on_pushButton_change_clicked();

private:
    Ui::cap *ui;
};

#endif // CAP_H
