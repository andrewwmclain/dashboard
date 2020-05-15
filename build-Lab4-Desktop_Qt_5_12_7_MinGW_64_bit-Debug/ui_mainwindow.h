/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLCDNumber *currentHours_LCDNumber;
    QLCDNumber *currentSeconds_LCDNumber;
    QLCDNumber *currentMinutes_LCDNumber;
    QLabel *greeting_label;
    QLCDNumber *nyHours_LCDNumber_2;
    QLCDNumber *nyMinutes_LCDNumber_2;
    QLCDNumber *nySeconds_LCDNumber_2;
    QLCDNumber *tokyoHours_LCDNumber_3;
    QLCDNumber *tokyoSeconds_LCDNumber_3;
    QLCDNumber *tokyoMinutes_LCDNumber_3;
    QLCDNumber *londonHours_LCDNumber_4;
    QLCDNumber *londonSeconds_LCDNumber_4;
    QLCDNumber *londonMinutes_LCDNumber_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *imgDL_pushButton;
    QLineEdit *zipCode_lineEdit;
    QLabel *zipCode_label;
    QGroupBox *groupBox;
    QLabel *imgDisplay_label;
    QGroupBox *groupBox_2;
    QLabel *temperature_label;
    QLabel *weatherIcon_label;
    QLabel *high_label;
    QLabel *low_label;
    QLabel *high_label_2;
    QLabel *low_label_2;
    QLabel *condition_label;
    QLabel *humidity_label;
    QLabel *humidity_label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 540);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        currentHours_LCDNumber = new QLCDNumber(centralwidget);
        currentHours_LCDNumber->setObjectName(QString::fromUtf8("currentHours_LCDNumber"));
        currentHours_LCDNumber->setGeometry(QRect(460, 50, 50, 50));
        currentHours_LCDNumber->setDigitCount(2);
        currentHours_LCDNumber->setProperty("value", QVariant(22.000000000000000));
        currentSeconds_LCDNumber = new QLCDNumber(centralwidget);
        currentSeconds_LCDNumber->setObjectName(QString::fromUtf8("currentSeconds_LCDNumber"));
        currentSeconds_LCDNumber->setGeometry(QRect(590, 70, 30, 30));
        currentSeconds_LCDNumber->setDigitCount(2);
        currentSeconds_LCDNumber->setProperty("value", QVariant(22.000000000000000));
        currentMinutes_LCDNumber = new QLCDNumber(centralwidget);
        currentMinutes_LCDNumber->setObjectName(QString::fromUtf8("currentMinutes_LCDNumber"));
        currentMinutes_LCDNumber->setGeometry(QRect(525, 50, 50, 50));
        currentMinutes_LCDNumber->setDigitCount(2);
        currentMinutes_LCDNumber->setProperty("value", QVariant(22.000000000000000));
        greeting_label = new QLabel(centralwidget);
        greeting_label->setObjectName(QString::fromUtf8("greeting_label"));
        greeting_label->setGeometry(QRect(25, 20, 350, 60));
        QFont font;
        font.setPointSize(18);
        greeting_label->setFont(font);
        nyHours_LCDNumber_2 = new QLCDNumber(centralwidget);
        nyHours_LCDNumber_2->setObjectName(QString::fromUtf8("nyHours_LCDNumber_2"));
        nyHours_LCDNumber_2->setGeometry(QRect(480, 130, 30, 30));
        nyHours_LCDNumber_2->setDigitCount(2);
        nyHours_LCDNumber_2->setProperty("value", QVariant(22.000000000000000));
        nyMinutes_LCDNumber_2 = new QLCDNumber(centralwidget);
        nyMinutes_LCDNumber_2->setObjectName(QString::fromUtf8("nyMinutes_LCDNumber_2"));
        nyMinutes_LCDNumber_2->setGeometry(QRect(520, 130, 30, 30));
        nyMinutes_LCDNumber_2->setDigitCount(2);
        nyMinutes_LCDNumber_2->setProperty("value", QVariant(22.000000000000000));
        nySeconds_LCDNumber_2 = new QLCDNumber(centralwidget);
        nySeconds_LCDNumber_2->setObjectName(QString::fromUtf8("nySeconds_LCDNumber_2"));
        nySeconds_LCDNumber_2->setGeometry(QRect(560, 140, 18, 18));
        nySeconds_LCDNumber_2->setDigitCount(2);
        nySeconds_LCDNumber_2->setProperty("value", QVariant(22.000000000000000));
        tokyoHours_LCDNumber_3 = new QLCDNumber(centralwidget);
        tokyoHours_LCDNumber_3->setObjectName(QString::fromUtf8("tokyoHours_LCDNumber_3"));
        tokyoHours_LCDNumber_3->setGeometry(QRect(610, 130, 30, 30));
        tokyoHours_LCDNumber_3->setDigitCount(2);
        tokyoHours_LCDNumber_3->setProperty("value", QVariant(22.000000000000000));
        tokyoSeconds_LCDNumber_3 = new QLCDNumber(centralwidget);
        tokyoSeconds_LCDNumber_3->setObjectName(QString::fromUtf8("tokyoSeconds_LCDNumber_3"));
        tokyoSeconds_LCDNumber_3->setGeometry(QRect(690, 140, 18, 18));
        tokyoSeconds_LCDNumber_3->setDigitCount(2);
        tokyoSeconds_LCDNumber_3->setProperty("value", QVariant(22.000000000000000));
        tokyoMinutes_LCDNumber_3 = new QLCDNumber(centralwidget);
        tokyoMinutes_LCDNumber_3->setObjectName(QString::fromUtf8("tokyoMinutes_LCDNumber_3"));
        tokyoMinutes_LCDNumber_3->setGeometry(QRect(650, 130, 30, 30));
        tokyoMinutes_LCDNumber_3->setDigitCount(2);
        tokyoMinutes_LCDNumber_3->setProperty("value", QVariant(22.000000000000000));
        londonHours_LCDNumber_4 = new QLCDNumber(centralwidget);
        londonHours_LCDNumber_4->setObjectName(QString::fromUtf8("londonHours_LCDNumber_4"));
        londonHours_LCDNumber_4->setGeometry(QRect(360, 130, 30, 30));
        londonHours_LCDNumber_4->setDigitCount(2);
        londonHours_LCDNumber_4->setProperty("value", QVariant(22.000000000000000));
        londonSeconds_LCDNumber_4 = new QLCDNumber(centralwidget);
        londonSeconds_LCDNumber_4->setObjectName(QString::fromUtf8("londonSeconds_LCDNumber_4"));
        londonSeconds_LCDNumber_4->setGeometry(QRect(440, 140, 18, 18));
        londonSeconds_LCDNumber_4->setDigitCount(2);
        londonSeconds_LCDNumber_4->setProperty("value", QVariant(22.000000000000000));
        londonMinutes_LCDNumber_4 = new QLCDNumber(centralwidget);
        londonMinutes_LCDNumber_4->setObjectName(QString::fromUtf8("londonMinutes_LCDNumber_4"));
        londonMinutes_LCDNumber_4->setGeometry(QRect(400, 130, 30, 30));
        londonMinutes_LCDNumber_4->setDigitCount(2);
        londonMinutes_LCDNumber_4->setProperty("value", QVariant(22.000000000000000));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 110, 71, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 110, 71, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(620, 110, 71, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 10, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);
        imgDL_pushButton = new QPushButton(centralwidget);
        imgDL_pushButton->setObjectName(QString::fromUtf8("imgDL_pushButton"));
        imgDL_pushButton->setGeometry(QRect(960, 40, 90, 30));
        imgDL_pushButton->setFont(font1);
        zipCode_lineEdit = new QLineEdit(centralwidget);
        zipCode_lineEdit->setObjectName(QString::fromUtf8("zipCode_lineEdit"));
        zipCode_lineEdit->setGeometry(QRect(800, 40, 150, 30));
        zipCode_label = new QLabel(centralwidget);
        zipCode_label->setObjectName(QString::fromUtf8("zipCode_label"));
        zipCode_label->setGeometry(QRect(710, 40, 85, 30));
        zipCode_label->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 180, 320, 290));
        imgDisplay_label = new QLabel(groupBox);
        imgDisplay_label->setObjectName(QString::fromUtf8("imgDisplay_label"));
        imgDisplay_label->setGeometry(QRect(10, 40, 281, 241));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 180, 330, 290));
        groupBox_2->setStyleSheet(QString::fromUtf8("groupBox_2{\n"
"	background-color: #1f4068;\n"
"}"));
        temperature_label = new QLabel(groupBox_2);
        temperature_label->setObjectName(QString::fromUtf8("temperature_label"));
        temperature_label->setGeometry(QRect(10, 30, 130, 81));
        QFont font2;
        font2.setPointSize(25);
        temperature_label->setFont(font2);
        temperature_label->setAlignment(Qt::AlignCenter);
        weatherIcon_label = new QLabel(groupBox_2);
        weatherIcon_label->setObjectName(QString::fromUtf8("weatherIcon_label"));
        weatherIcon_label->setGeometry(QRect(160, 30, 120, 81));
        high_label = new QLabel(groupBox_2);
        high_label->setObjectName(QString::fromUtf8("high_label"));
        high_label->setGeometry(QRect(10, 140, 65, 51));
        QFont font3;
        font3.setPointSize(12);
        high_label->setFont(font3);
        low_label = new QLabel(groupBox_2);
        low_label->setObjectName(QString::fromUtf8("low_label"));
        low_label->setGeometry(QRect(10, 210, 65, 51));
        low_label->setFont(font3);
        high_label_2 = new QLabel(groupBox_2);
        high_label_2->setObjectName(QString::fromUtf8("high_label_2"));
        high_label_2->setGeometry(QRect(90, 140, 65, 51));
        high_label_2->setFont(font3);
        low_label_2 = new QLabel(groupBox_2);
        low_label_2->setObjectName(QString::fromUtf8("low_label_2"));
        low_label_2->setGeometry(QRect(90, 210, 65, 51));
        low_label_2->setFont(font3);
        condition_label = new QLabel(groupBox_2);
        condition_label->setObjectName(QString::fromUtf8("condition_label"));
        condition_label->setGeometry(QRect(180, 140, 85, 51));
        condition_label->setFont(font3);
        humidity_label = new QLabel(groupBox_2);
        humidity_label->setObjectName(QString::fromUtf8("humidity_label"));
        humidity_label->setGeometry(QRect(180, 220, 75, 31));
        QFont font4;
        font4.setPointSize(9);
        humidity_label->setFont(font4);
        humidity_label_2 = new QLabel(groupBox_2);
        humidity_label_2->setObjectName(QString::fromUtf8("humidity_label_2"));
        humidity_label_2->setGeometry(QRect(270, 220, 51, 31));
        humidity_label_2->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        greeting_label->setText(QApplication::translate("MainWindow", "Good Morning, Andrew!", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "London", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "New York", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Tokyo", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Current Time:", nullptr));
        imgDL_pushButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        zipCode_label->setText(QApplication::translate("MainWindow", "Zip Code:", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Maps", nullptr));
        imgDisplay_label->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Weather", nullptr));
        temperature_label->setText(QString());
        weatherIcon_label->setText(QString());
        high_label->setText(QApplication::translate("MainWindow", "High: ", nullptr));
        low_label->setText(QApplication::translate("MainWindow", "Low:", nullptr));
        high_label_2->setText(QString());
        low_label_2->setText(QString());
        condition_label->setText(QString());
        humidity_label->setText(QApplication::translate("MainWindow", "Humidity:", nullptr));
        humidity_label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
