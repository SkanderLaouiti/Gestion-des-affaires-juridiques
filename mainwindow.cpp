#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog.h>
#include "accuse.h"
#include <QIntValidator>
#include <QMessageBox>
#include "consult.h"

//Test Git

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ADD_ACC_clicked()
{


        d=new Dialog(this);
        d->show();
       // hide();
}


void MainWindow::on_DELETE_ACC_clicked()
{
    dl=new Delete(this);
    dl->show();

   // hide();
}

void MainWindow::on_List_ACC_clicked()
{
    cl=new Consult(this);
    cl->show();

  //  hide();
}
