#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimeZone>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer)
    , httpManager(new HTTPManager)
{
    ui->setupUi(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    setCurrentTime();
    timer->start(1000);

    connect(httpManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    zip = "98119";

    ui->zipCode_lineEdit->setText(zip);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCurrentTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    QTimeZone londonTimeZone("Europe/London");
    QDateTime londonTime = time.toTimeZone(londonTimeZone);
    QString londonHour = londonTime.toString("hh");
    QString londonMinute = londonTime.toString("mm");
    QString londonSecond = londonTime.toString("ss");

    QTimeZone nyTimeZone("America/New_York");
    QDateTime nyTime = time.toTimeZone(nyTimeZone);
    QString nyHour = nyTime.toString("hh");
    QString nyMinute = nyTime.toString("mm");
    QString nySecond = nyTime.toString("ss");

    QTimeZone tokyoTimeZone("Asia/Tokyo");
    QDateTime tokyoTime = time.toTimeZone(tokyoTimeZone);
    QString tokyoHour = tokyoTime.toString("hh");
    QString tokyoMinute = tokyoTime.toString("mm");
    QString tokyoSecond = tokyoTime.toString("ss");

    ui->currentHours_LCDNumber->display(hour);
    ui->currentMinutes_LCDNumber->display(minute);
    ui->currentSeconds_LCDNumber->display(second);

    ui->londonHours_LCDNumber_4->display(londonHour);
    ui->londonMinutes_LCDNumber_4->display(londonMinute);
    ui->londonSeconds_LCDNumber_4->display(londonSecond);

    ui->nyHours_LCDNumber_2->display(nyHour);
    ui->nyMinutes_LCDNumber_2->display(nyMinute);
    ui->nySeconds_LCDNumber_2->display(nySecond);

    ui->tokyoHours_LCDNumber_3->display(tokyoHour);
    ui->tokyoMinutes_LCDNumber_3->display(tokyoMinute);
    ui->tokyoSeconds_LCDNumber_3->display(tokyoSecond);

}

void MainWindow::processImage(QPixmap *image)
{
    ui->imgDisplay_label->setPixmap(*image);
}


void MainWindow::on_imgDL_pushButton_clicked()
{
    zip = ui->zipCode_lineEdit->text();
    qDebug() << zip;
    httpManager->sendImageRequest(zip);
}



