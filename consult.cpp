#include "consult.h"
#include "ui_consult.h"
#include "accuse.h"
#include <QMessageBox>
#include <QDialog>
#include <QFrame>
#include <QSqlQueryModel>

Consult::Consult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Consult)
{
    ui->setupUi(this);

}

Consult::~Consult()
{
    delete ui;
}



void Consult::on_afficher_acc_clicked()
{
    bool test=A.afficher();
    QMessageBox msgBox;

    if(test)
    {
        msgBox.setText("Affichage avec success");
       //ui->tab_acc->setModel(A.afficher());
    }
    else
        msgBox.setText("Echec de l'affichage ");
        msgBox.exec();
}
