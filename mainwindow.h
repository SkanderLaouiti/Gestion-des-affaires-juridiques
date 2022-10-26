#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//Test Git
#include <QMainWindow>
#include <dialog.h>
#include <delete.h>
#include <consult.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_ADD_ACC_clicked();

    void on_DELETE_ACC_clicked();

    void on_List_ACC_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *d;
    Delete *dl;
    Consult *cl;
};
#endif // MAINWINDOW_H
