#ifndef QRCODE_H
#define QRCODE_H
#include "accuse.h"
#include <QDialog>


namespace Ui {
class Qrcode;
}

class Qrcode : public QDialog
{
    Q_OBJECT

public:
    explicit Qrcode(QWidget *parent = nullptr);
    ~Qrcode();


private slots:



    void on_GetQR_clicked();

private:
    Ui::Qrcode *ui;
    Accuse A;

};

#endif // QRCODE_H
