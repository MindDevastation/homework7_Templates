#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "pair.h"

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


void MainWindow::on_Check_clicked()
{
    int index, index1;
    index = ui->inpOneChoose->currentIndex();
    index1 = ui->inpTwoChoose->currentIndex();
    if (index == tint){
        if(index1 == tint){
            Pairs<int, int> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tfloat){
            Pairs<int, float> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toFloat());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tdouble){
            Pairs<int, double> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toDouble());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tstring){
            Pairs<int, QString> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + pair.getValue1());
        }else if(index1 == tbool){
            Pairs<int, bool> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else {
            Pairs<int, int> pair(ui->inpOneEd->text().toInt(), 0);
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: ERROR");
        }
    }else if(index == tfloat){
        if(index1 == tint){
            Pairs<float, int> pair(ui->inpOneEd->text().toFloat(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tfloat){
            Pairs<float, float> pair(ui->inpOneEd->text().toFloat(), ui->inpTwoEd->text().toFloat());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tdouble){
            Pairs<float, double> pair(ui->inpOneEd->text().toFloat(), ui->inpTwoEd->text().toDouble());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tstring){
            Pairs<float, QString> pair(ui->inpOneEd->text().toFloat(), ui->inpTwoEd->text());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + pair.getValue1());
        }else if(index1 == tbool){
            Pairs<float, bool> pair(ui->inpOneEd->text().toFloat(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else {
            Pairs<float, int> pair(ui->inpOneEd->text().toFloat(), 0);
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: ERROR");
        }
    }else if(index == tdouble){
        if(index1 == tint){
            Pairs<double, int> pair(ui->inpOneEd->text().toDouble(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tfloat){
            Pairs<double, float> pair(ui->inpOneEd->text().toDouble(), ui->inpTwoEd->text().toFloat());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tdouble){
            Pairs<double, double> pair(ui->inpOneEd->text().toDouble(), ui->inpTwoEd->text().toDouble());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tstring){
            Pairs<double, QString> pair(ui->inpOneEd->text().toDouble(), ui->inpTwoEd->text());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + pair.getValue1());
        }else if(index1 == tbool){
            Pairs<double, bool> pair(ui->inpOneEd->text().toDouble(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else {
            Pairs<double, int> pair(ui->inpOneEd->text().toDouble(), 0);
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: ERROR");
        }
    }else if(index == tstring){
        if(index1 == tint){
            Pairs<QString, int> pair(ui->inpOneEd->text(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + pair.getValue());
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tfloat){
            Pairs<QString, float> pair(ui->inpOneEd->text(), ui->inpTwoEd->text().toFloat());
            ui->edit->setText("You Entered: " + pair.getValue());
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tdouble){
            Pairs<QString, double> pair(ui->inpOneEd->text(), ui->inpTwoEd->text().toDouble());
            ui->edit->setText("You Entered: " + pair.getValue());
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tstring){
            Pairs<QString, QString> pair(ui->inpOneEd->text(), ui->inpTwoEd->text());
            ui->edit->setText("You Entered: " + pair.getValue());
            ui->edit_2->setText("You Entered: " + pair.getValue1());
        }else if(index1 == tbool){
            Pairs<QString, bool> pair(ui->inpOneEd->text(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + pair.getValue());
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else {
            Pairs<QString, int> pair(ui->inpOneEd->text(), 0);
            ui->edit->setText("You Entered: " + pair.getValue());
            ui->edit_2->setText("You Entered: ERROR");
        }
    }else if (index == tbool){
        if(index1 == tint){
            Pairs<bool, int> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tfloat){
            Pairs<bool, float> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toFloat());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tdouble){
            Pairs<bool, double> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toDouble());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tstring){
            Pairs<bool, QString> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + pair.getValue1());
        }else if(index1 == tbool){
            Pairs<bool, bool> pair(ui->inpOneEd->text().toInt(), ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else {
            Pairs<bool, int> pair(ui->inpOneEd->text().toInt(), 0);
            ui->edit->setText("You Entered: " + QString::number(pair.getValue()));
            ui->edit_2->setText("You Entered: ERROR");
        }
    }else{
        if(index1 == tint){
            Pairs<int, int> pair(0, ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: ERROR");
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tfloat){
            Pairs<int, float> pair(0, ui->inpTwoEd->text().toFloat());
            ui->edit->setText("You Entered: ERROR");
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tdouble){
            Pairs<int, double> pair(0, ui->inpTwoEd->text().toDouble());
            ui->edit->setText("You Entered: ERROR");
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else if(index1 == tstring){
            Pairs<int, QString> pair(0, ui->inpTwoEd->text());
            ui->edit->setText("You Entered: ERROR");
            ui->edit_2->setText("You Entered: " + pair.getValue1());
        }else if(index1 == tbool){
            Pairs<int, bool> pair(0, ui->inpTwoEd->text().toInt());
            ui->edit->setText("You Entered: ERROR");
            ui->edit_2->setText("You Entered: " + QString::number(pair.getValue1()));
        }else {
            Pairs<int, int> pair(0, 0);
            ui->edit->setText("You Entered: ERROR");
            ui->edit_2->setText("You Entered: ERROR");
        }
    }
}

