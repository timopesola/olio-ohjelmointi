#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQtimer = new QTimer();

    player1Time = 0;
    player2Time = 0;
    currentPlayer = 1;
    gameTime = 0;

    connect(pQtimer, SIGNAL(timeout()), this, SLOT(timeout()));

    connect(ui->btnStart, SIGNAL(clicked(bool)), this, SLOT(startAndStopClickHandler()));
    connect(ui->btnStop, SIGNAL(clicked(bool)), this, SLOT(startAndStopClickHandler()));

    connect(ui->btn120, SIGNAL(clicked(bool)), this, SLOT(playtimeClickHandler()));
    connect(ui->btn5, SIGNAL(clicked(bool)), this, SLOT(playtimeClickHandler()));

    connect(ui->btnSwitch1, SIGNAL(clicked(bool)), this, SLOT(switchClickHandler()));
    connect(ui->btnSwitch2, SIGNAL(clicked(bool)), this, SLOT(switchClickHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQtimer;
}

void MainWindow::timeout()
{
    if (currentPlayer == 1)
    {
        player1Time -= gameTime/100;
        MainWindow::updateProgressBar();
    }

    if (currentPlayer == 2)
    {
        player2Time -= gameTime/100;
        MainWindow::updateProgressBar();
    }
    if (ui->progressBar1->value() == 0)
    {
        pQtimer->stop();
        MainWindow::setGameInfoText("Player 2 WON!!", 16);
    }
    if (ui->progressBar2->value() == 0)
    {
        pQtimer->stop();
        MainWindow::setGameInfoText("Player 1 WON!!", 16);
    }
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1)
    {
        ui->progressBar1->setValue(player1Time/(gameTime/100));
    }

    if (currentPlayer == 2)
    {
        ui->progressBar2->setValue(player2Time/(gameTime/100));
    }
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    QFont f( "Tahoma", fontSize, QFont::Bold);
    ui->labelStatus->setFont(f);
    ui->labelStatus->setText(text);
}

void MainWindow::startAndStopClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if (name == "btnStart")
    {
        if (ui->labelStatus->text() == "ready to play" || ui->labelStatus->text() == "New game via start button")
        {
            currentPlayer = 1;
            player1Time = gameTime;
            player2Time = gameTime;
            ui->progressBar1->setValue(100);
            ui->progressBar2->setValue(100);
            pQtimer->start(gameTime);
            MainWindow::setGameInfoText("Game ongoing", 16);
        }
    }

    if (name == "btnStop")
    {
        if (ui->labelStatus->text() == "Game ongoing" || ui->labelStatus->text() == "Player 1 WON!!" || ui->labelStatus->text() == "Player 2 WON!!")
        {
            pQtimer->stop();
            ui->progressBar1->setValue(0);
            ui->progressBar2->setValue(0);
            MainWindow::setGameInfoText("New game via start button", 15);
        }
    }
}

void MainWindow::playtimeClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if (ui->labelStatus->text() != "Game ongoing" && ui->labelStatus->text() != "Player 1 WON!!" && ui->labelStatus->text() != "Player 2 WON!!")
    {
        qDebug() << "Aikanappia" << name << "painettu";
        if (name == "btn120")
        {
            gameTime = 1200;
        }

        if (name == "btn5")
        {
            gameTime = 3000;
        }
        ui->progressBar1->setValue(100);
        ui->progressBar2->setValue(100);
        MainWindow::setGameInfoText("ready to play", 16);
    }
}

void MainWindow::switchClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Switch-nappia" << name << "painettu";
    if (ui->labelStatus->text() == "Game ongoing")
    {
        if (name == "btnSwitch1")
        {
            currentPlayer = 2;
        }

        if (name == "btnSwitch2")
        {
            currentPlayer = 1;
        }
    }
}
