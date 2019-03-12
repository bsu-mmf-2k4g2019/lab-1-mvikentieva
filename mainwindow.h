#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGlobal>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_spinexam_valueChanged(int arg1);

    void on_spin1_valueChanged(int arg1);

    void on_spin2_valueChanged(int arg1);

    void on_spin3_valueChanged(int arg1);

    void on_compute_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
