#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QTimeZone>
#include <QJsonObject>
#include <QJsonArray>

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

    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));

    zip = "98119";

    ui->zipCode_lineEdit->setText(zip);

    QPalette groupBoxPalette = ui->groupBox->palette();
    groupBoxPalette.setColor(QPalette::Window, QColor(31,64,104));
    ui->groupBox->setAutoFillBackground(true);
    ui->groupBox->setPalette(groupBoxPalette);

    QPalette groupBox2Palette = ui->groupBox_2->palette();
    groupBox2Palette.setColor(QPalette::Window, QColor(31,64,104));
    ui->groupBox_2->setAutoFillBackground(true);
    ui->groupBox_2->setPalette(groupBox2Palette);
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

    if(hour.toInt() < 12){
        ui->greeting_label->setText("Good Morning, Andrew");
    }else if(hour.toInt() < 18){
        ui->greeting_label->setText("Good Afternoon, Andrew");
    }else if(hour.toInt() < 24){
        ui->greeting_label->setText("Good Evening, Andrew");
    }
}

void MainWindow::processImage(QPixmap *image)
{
    ui->imgDisplay_label->setPixmap(*image);
}


void MainWindow::processWeatherJson(QJsonObject *json)
{
    qDebug() << "Json ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
    QString icon = json->value("weather").toArray()[0].toObject()["icon"].toString();
    double temp = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();
    double humidity = json->value("main").toObject()["humidity"].toDouble();

    qDebug() << weather;
    qDebug() << weatherDesc;
    qDebug() << temp;
    qDebug() << temp_min;
    qDebug() << temp_max;

    ui->temperature_label->setText(QString::number(temp) + "°F");
    ui->high_label_2->setText(QString::number(temp_max) + "°F");
    ui->low_label_2->setText(QString::number(temp_min) + "°F");
    ui->condition_label->setText(weatherDesc);
    ui->humidity_label_2->setText(QString::number(humidity) + "%");


    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &MainWindow::downloadFinished);
    const QUrl url = QUrl("http://openweathermap.org/img/wn/" + icon + "@2x.png");
    QNetworkRequest request(url);
    nam->get(request);

    /*
     * {
     * "coord":{"lon":-122.36,"lat":47.64},
     * "weather":[{"id":803,"main":"Clouds","description":"broken clouds","icon":"04d"}],
     * "base":"stations",
     * "main":{"temp":59.09,"feels_like":54.9,"temp_min":57,"temp_max":61,"pressure":1016,"humidity":62},
     * "visibility":16093,
     * "wind":{"speed":5.82},
     * "clouds":{"all":75},
     * "dt":1589485083,
     * "sys":{"type":1,"id":3417,"country":"US","sunrise":1589459546,"sunset":1589513958},
     * "timezone":-25200,"id":0,"name":"Seattle","cod":200}
     * */
}


void MainWindow::on_imgDL_pushButton_clicked()
{
    zip = ui->zipCode_lineEdit->text();
    qDebug() << zip;
    httpManager->sendImageRequest(zip);
    httpManager->sendWeatherRequest(zip);
}

void MainWindow::downloadFinished(QNetworkReply *reply)
{
    QPixmap pm;
    pm.loadFromData(reply->readAll());
    ui->weatherIcon_label->setPixmap(pm);
}



