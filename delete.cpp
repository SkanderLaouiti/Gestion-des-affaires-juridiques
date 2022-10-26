#include "delete.h"
#include "ui_delete.h"
#include "accuse.h"
#include <QLineEdit>
#include <QMessageBox>
#include "accuse.h"
#include "consult.h"

Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_supp_btn_clicked()
{
Accuse A1,A;
A1.setid((ui->Lsupp->text().toInt()));

bool test=A1.supprimer(A1.getid());
QMessageBox msgBox;

if(test)
{
    msgBox.setText("Suppression avec success");
    //ui->supprimer->setModel(A.afficher());
}
else
    msgBox.setText("Echec de la suppression");
    msgBox.exec();

}
