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



void MainWindow::on_spinexam_valueChanged()
{
    ui->spinexam->value();
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);


}


void MainWindow::on_spin1_valueChanged()
{
    ui->spin1->value();
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);
}
void MainWindow::on_spin2_valueChanged()
{
    ui->spin2->value();
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);
}
void MainWindow::on_spin3_valueChanged()
{
    ui->spinexam->value();
    ui->lcd_sessional->display(0);
    ui->lcd_total->display(0);
}

void MainWindow::on_compute_clicked()
{
    int spinexam = ui->spinexam->value();
    int spin1 = ui->spin1->value();
    int spin2 = ui->spin2->value();
    int spin3 = ui->spin3->value();
    int total = qRound((double)((spin1+spin2+spin3)/3)*0.4+(spinexam*0.6));
if (spinexam<4)
    {
    ui->spinexam->setStyleSheet("color:red");
    }
    ui->lcd_sessional->display(qRound((double)(((spin1+spin2+spin3)/3))));
if (total>4)
{
    ui->lcd_total->display(total);
}
else
{
    ui->lcd_total->setStyleSheet({"color:red"});
    ui->lcd_total->display(total);
}

}
