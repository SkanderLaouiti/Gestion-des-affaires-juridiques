#ifndef CONSULT_H
#define CONSULT_H
#include "accuse.h"
#include <QDialog>

namespace Ui {
class Consult;
}

class Consult : public QDialog
{
    Q_OBJECT

public:
    explicit Consult(QWidget *parent = nullptr);
    ~Consult();

        Accuse A;


private slots:


        void on_afficher_acc_clicked();

private:
    Ui::Consult *ui;
};

#endif // CONSULT_H
