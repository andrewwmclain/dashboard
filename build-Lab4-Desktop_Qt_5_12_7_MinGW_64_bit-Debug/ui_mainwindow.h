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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QLabel *label;
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 25, 350, 100));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
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
        label->setText(QApplication::translate("MainWindow", "Good Morning, Andrew!", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "London", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "New York", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Tokyo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
