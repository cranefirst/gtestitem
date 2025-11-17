#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("lineEdit");
    ui->label_2->setText("date");
    ui->label_3->setText("phone");
    ui->label_4->setText("Identification");

}

MainWindow::~MainWindow()
{
    delete ui;
}

