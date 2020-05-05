#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimeZone>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer)
{
    ui->setupUi(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    setCurrentTime();
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCurrentTime()
{
    QTime time = QTime::currentTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    QDateTime nyTime(QDate::currentDate(), QTime::currentTime(), QTimeZone("America/New_York"));
//    nyTime.setTimeZone(QTimeZone("America/New_York"));
    QString nyHour = nyTime.toString("hh");
    QString nyMinute = nyTime.toString("mm");
    QString nySecond = nyTime.toString("ss");

    ui->currentHours_LCDNumber->display(hour);
    ui->currentMinutes_LCDNumber->display(minute);
    ui->currentSeconds_LCDNumber->display(second);

    ui->nyHours_LCDNumber_2->display(nyHour);
    ui->nyMinutes_LCDNumber_2->display(nyMinute);
    ui->nySeconds_LCDNumber_2->display(nySecond);

}



