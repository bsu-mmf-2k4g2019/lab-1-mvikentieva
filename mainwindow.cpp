#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinexam->setRange(1,10);
    ui->spin1->setRange(1,10);
    ui->spin2->setRange(1,10);
    ui->spin3->setRange(1,10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

    int spinexam , spin1, spin2, spin3;

void MainWindow::on_spinexam_valueChanged(int arg1)
{
    spinexam=arg1;
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);

}


void MainWindow::on_spin1_valueChanged(int arg1)
{
    spin1=arg1;
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);
}
void MainWindow::on_spin2_valueChanged(int arg1)
{
    spin2=arg1;
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);
}
void MainWindow::on_spin3_valueChanged(int arg1)
{
    spin3=arg1;
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);
}

void MainWindow::on_compute_clicked()
{

    ui->lcd_sessional->display(qRound((double)(spin1+spin2+spin3)/3));
    ui->lcd_total->display(qRound((double)((spin1+spin2+spin3)/3)*0.4+spinexam*0.6));

}
