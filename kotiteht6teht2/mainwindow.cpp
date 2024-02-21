#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
    operand = 0;
    connect(ui->N0, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N1, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N2, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N3, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N4, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N5, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N6, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N7, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N8, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N9, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));

    connect(ui->clear, SIGNAL(clicked(bool)), this, SLOT(clearAndEnterClickHandler()));
    connect(ui->enter, SIGNAL(clicked(bool)), this, SLOT(clearAndEnterClickHandler()));

    connect(ui->add, SIGNAL(clicked(bool)), this, SLOT(addSubMulDivClickHandler()));
    connect(ui->sub, SIGNAL(clicked(bool)), this, SLOT(addSubMulDivClickHandler()));
    connect(ui->mul, SIGNAL(clicked(bool)), this, SLOT(addSubMulDivClickHandler()));
    connect(ui->div, SIGNAL(clicked(bool)), this, SLOT(addSubMulDivClickHandler()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    qDebug() << "Button number:" << name.back();
    if (state == 1)
    {
        number1 = number1+name.back();
        ui->num1->setText(number1);
    }

    if (state == 2)
    {
        number2 = number2+name.back();
        ui->num2->setText(number2);
    }
    qDebug() << "Number 1:" << number1;
    qDebug() << Qt::endl << "Number 2:" << number2;
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    if (name == "enter")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();

        switch(operand)
        {
        case 1:
            result = n1+n2;
            ui->result->setText(QString::number(result));
            break;
        case 2:
            result = n1-n2;
            ui->result->setText(QString::number(result));
            break;
        case 3:
            result = n1*n2;
            ui->result->setText(QString::number(result));
            break;
        case 4:
            result = n1/n2;
            ui->result->setText(QString::number(result));
            break;
        }

    }

    if (name == "clear")
    {
        state = 1;
        number1 = "";
        number2 = "";
        MainWindow::resetLineEdits();
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;

    if (name == "add")
    {
        operand = 1;
    }

    if (name == "sub")
    {
        operand = 2;
    }

    if (name == "mul")
    {
        operand = 3;
    }

    if (name == "div")
    {
        operand = 4;
    }
    state = 2;
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
}
