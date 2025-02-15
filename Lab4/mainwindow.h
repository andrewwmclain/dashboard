#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

#include "httpmanager.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void setCurrentTime();
    void processImage(QPixmap *);
    void processWeatherJson(QJsonObject *json);

    void on_imgDL_pushButton_clicked();
    void downloadFinished(QNetworkReply *reply);

    void changePic();

private:
    Ui::MainWindow *ui;
    QTimer* timer;
    QTimer* timer2;
    HTTPManager *httpManager;

    QString zip;

    QPixmap slidePic;
    size_t slideIndex;

};
#endif // MAINWINDOW_H
