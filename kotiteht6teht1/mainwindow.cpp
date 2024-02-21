#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textCount->setText(QString::number(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_butCount_clicked()
{
    count += 1;
    ui->textCount->setText(QString::number(count));
}


void MainWindow::on_butReset_clicked()
{
    count = 0;
    ui->textCount->setText(QString::number(count));
}

