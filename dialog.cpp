#include "dialog.h"
#include "ui_dialog.h"
#include "accuse.h"
#include <string>
#include <QLineEdit>
#include <QLabel>
#include <QDate>
#include <QIntValidator>
#include <QMessageBox>
//Test Git
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->Lid->setValidator(new QIntValidator(0,99999999,this));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_add__acc_clicked()
{
    int id=ui->Lid->text().toInt();
    QString name=ui->Lname->text();
    QString lastname=ui->Llastname->text();
    QDate Date_B=ui->LDate_B->date();
    Date_B.toString("mm/dd/yyyy");
    QString gender=ui->Gender->currentText();
    QString acc_cause=ui->Lacc_cause->text();
    QDate Date_S=ui->LDate_S->date();
    Date_S.toString("mm/dd/yyyy");


   Accuse A(id,name,lastname,gender,Date_B,acc_cause,Date_S);

   bool test=A.Ajouter();
   QMessageBox msgBox;

   if(test)
   {
       msgBox.setText("Ajout avec success");
      //ui->Add_Accused->setModel(A.afficher());
   }
   else
       msgBox.setText("Echec de l'ajout ");
       msgBox.exec();


}
