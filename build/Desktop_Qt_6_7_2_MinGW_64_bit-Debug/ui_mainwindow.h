/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *podstavka;
    QLabel *time_label;
    QLabel *massa_label;
    QLabel *kilogram_label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_reboot;
    QPushButton *button_start;
    QLCDNumber *lcd_display_time;
    QLCDNumber *lcd_display_massa;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_plus;
    QPushButton *button_minus;
    QLabel *still_label;
    QLabel *block_label;
    QLabel *bich_1_label;
    QLabel *bich_2_label;
    QLabel *gruz_1;
    QLabel *gruz_2;
    QLabel *gruz_3;
    QLabel *blok_visoti;
    QPushButton *button_up;
    QPushButton *button_down;
    QLabel *stoper;
    QLabel *oskolesa;
    QLabel *valuehei;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 560);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"	\n"
"	background-color: rgb(215, 215, 215);\n"
"}\n"
"#podstavka{\n"
"	background-color: rgb(161, 161, 161);\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	border-radius: 10px;\n"
"	border-width: 4px;\n"
"}\n"
"#blok_visoti{\n"
"	background-color: rgb(161, 161, 161);\n"
"	border: 2px solid rgb(0, 0, 0);\n"
"	border-radius: 10px;\n"
"	border-width: 4px;\n"
"}\n"
"\n"
"\n"
"#lcd_display_time {\n"
"    background-color: rgb(30, 50, 30);\n"
"     color: rgb(0, 255, 0);\n"
"     border: 3px solid rgb(90, 90, 90);\n"
"    border-radius: 2px;\n"
"    }\n"
"#lcd_display_massa {\n"
"    background-color: rgb(30, 50, 30);\n"
"     color: rgb(0, 255, 0);\n"
"     border: 3px solid rgb(90, 90, 90);\n"
"    border-radius: 2px;\n"
"    }\n"
"\n"
"#button_start{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border: 2px solid rgb(90, 90, 90);\n"
"border-radius: 2px;\n"
"color:white;\n"
"}\n"
"#button_reboot\n"
"{\n"
"	background-color: rgb(54, 54, 54);\n"
"	border: 2px solid rgb(90, 90, 90);\n"
"border-radius: 2px"
                        ";\n"
"color:white;\n"
"}\n"
"#button_plus{\n"
"background-color: rgb(54, 54, 54);\n"
"	border: 2px solid rgb(90, 90, 90);\n"
"border-radius: 2px;\n"
"color:white;\n"
"}\n"
"#button_minus{\n"
"background-color: rgb(54, 54, 54);\n"
"	border: 2px solid rgb(90, 90, 90);\n"
"border-radius: 2px;\n"
"color:white;\n"
"}\n"
"#still_label{\n"
"	background-color: qlineargradient(spread:reflect, x1:0.131182, y1:0.153909, x2:0.676, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"#block_label{\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-radius: 25px;\n"
"}\n"
"#bich_1_label{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"#bich_2_label{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"#gruz_1{\n"
"	background-color: qlineargradient(spread:reflect, x1:0.87, y1:0.534591, x2:0.119, y2:0.209818, stop:0.244318 rgba(0, 0, 0, 255), stop:0.636364 rgba(246, 191, 191, 255));\n"
"}\n"
"#gruz_2{\n"
"	background-color: qlineargradient(spread:reflect, x1:0.87, y1:0.534591, x2:0.119, y2:0.209818,"
                        " stop:0.244318 rgba(0, 0, 0, 255), stop:0.636364 rgba(246, 191, 191, 255));\n"
"}\n"
"#gruz_3{\n"
"	background-color: rgb(222, 0, 0);\n"
"}\n"
"\n"
"#stoper{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"#oskolesa{\n"
"	background-color: rgb(111, 111, 111);\n"
"	border-radius:10px;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        podstavka = new QLabel(centralwidget);
        podstavka->setObjectName("podstavka");
        podstavka->setGeometry(QRect(68, 400, 361, 151));
        time_label = new QLabel(centralwidget);
        time_label->setObjectName("time_label");
        time_label->setGeometry(QRect(100, 424, 71, 16));
        QFont font;
        font.setPointSize(12);
        time_label->setFont(font);
        massa_label = new QLabel(centralwidget);
        massa_label->setObjectName("massa_label");
        massa_label->setGeometry(QRect(248, 424, 61, 16));
        massa_label->setFont(font);
        kilogram_label = new QLabel(centralwidget);
        kilogram_label->setObjectName("kilogram_label");
        kilogram_label->setGeometry(QRect(390, 490, 16, 16));
        kilogram_label->setFont(font);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(98, 440, 291, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        button_reboot = new QPushButton(gridLayoutWidget);
        button_reboot->setObjectName("button_reboot");
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        button_reboot->setFont(font1);
        button_reboot->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_3->addWidget(button_reboot);

        button_start = new QPushButton(gridLayoutWidget);
        button_start->setObjectName("button_start");
        QFont font2;
        font2.setBold(true);
        button_start->setFont(font2);
        button_start->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_3->addWidget(button_start);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        lcd_display_time = new QLCDNumber(gridLayoutWidget);
        lcd_display_time->setObjectName("lcd_display_time");
        lcd_display_time->setAutoFillBackground(false);
        lcd_display_time->setFrameShape(QFrame::Shape::Box);
        lcd_display_time->setLineWidth(1);
        lcd_display_time->setMidLineWidth(0);
        lcd_display_time->setDigitCount(8);
        lcd_display_time->setMode(QLCDNumber::Mode::Dec);
        lcd_display_time->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcd_display_time->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(lcd_display_time, 0, 0, 1, 1);

        lcd_display_massa = new QLCDNumber(gridLayoutWidget);
        lcd_display_massa->setObjectName("lcd_display_massa");
        lcd_display_massa->setDigitCount(8);
        lcd_display_massa->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcd_display_massa->setProperty("value", QVariant(0.005000000000000));

        gridLayout->addWidget(lcd_display_massa, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        button_plus = new QPushButton(gridLayoutWidget);
        button_plus->setObjectName("button_plus");
        button_plus->setEnabled(true);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        button_plus->setFont(font3);
        button_plus->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button_plus->setAutoDefault(false);
        button_plus->setFlat(false);

        horizontalLayout->addWidget(button_plus);

        button_minus = new QPushButton(gridLayoutWidget);
        button_minus->setObjectName("button_minus");
        button_minus->setFont(font3);
        button_minus->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout->addWidget(button_minus);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        still_label = new QLabel(centralwidget);
        still_label->setObjectName("still_label");
        still_label->setGeometry(QRect(243, 57, 11, 343));
        block_label = new QLabel(centralwidget);
        block_label->setObjectName("block_label");
        block_label->setGeometry(QRect(223, 10, 51, 51));
        bich_1_label = new QLabel(centralwidget);
        bich_1_label->setObjectName("bich_1_label");
        bich_1_label->setGeometry(QRect(272, 38, 2, 100));
        bich_2_label = new QLabel(centralwidget);
        bich_2_label->setObjectName("bich_2_label");
        bich_2_label->setGeometry(QRect(223, 38, 2, 325));
        gruz_1 = new QLabel(centralwidget);
        gruz_1->setObjectName("gruz_1");
        gruz_1->setGeometry(QRect(258, 137, 30, 12));
        gruz_2 = new QLabel(centralwidget);
        gruz_2->setObjectName("gruz_2");
        gruz_2->setGeometry(QRect(209, 363, 30, 12));
        gruz_3 = new QLabel(centralwidget);
        gruz_3->setObjectName("gruz_3");
        gruz_3->setGeometry(QRect(261, 130, 24, 7));
        blok_visoti = new QLabel(centralwidget);
        blok_visoti->setObjectName("blok_visoti");
        blok_visoti->setGeometry(QRect(434, 400, 60, 151));
        button_up = new QPushButton(centralwidget);
        button_up->setObjectName("button_up");
        button_up->setGeometry(QRect(445, 428, 39, 41));
        button_up->setFont(font2);
        button_up->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button_up->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 42);\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"border-radius: 5px;"));
        button_down = new QPushButton(centralwidget);
        button_down->setObjectName("button_down");
        button_down->setGeometry(QRect(445, 486, 39, 41));
        QFont font4;
        font4.setPointSize(7);
        font4.setBold(true);
        button_down->setFont(font4);
        button_down->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button_down->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 5, 7);\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"border-radius: 5px;"));
        stoper = new QLabel(centralwidget);
        stoper->setObjectName("stoper");
        stoper->setGeometry(QRect(243, 217, 49, 7));
        oskolesa = new QLabel(centralwidget);
        oskolesa->setObjectName("oskolesa");
        oskolesa->setGeometry(QRect(238, 26, 21, 21));
        valuehei = new QLabel(centralwidget);
        valuehei->setObjectName("valuehei");
        valuehei->setGeometry(QRect(370, 50, 37, 12));
        MainWindow->setCentralWidget(centralwidget);
        bich_1_label->raise();
        bich_2_label->raise();
        still_label->raise();
        podstavka->raise();
        time_label->raise();
        massa_label->raise();
        kilogram_label->raise();
        gridLayoutWidget->raise();
        block_label->raise();
        gruz_1->raise();
        gruz_2->raise();
        gruz_3->raise();
        blok_visoti->raise();
        button_up->raise();
        button_down->raise();
        stoper->raise();
        oskolesa->raise();
        valuehei->raise();

        retranslateUi(MainWindow);

        button_plus->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        podstavka->setText(QString());
        time_label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\240\320\225\320\234\320\257:", nullptr));
        massa_label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\220\320\241\320\241\320\220:", nullptr));
        kilogram_label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\223", nullptr));
        button_reboot->setText(QCoreApplication::translate("MainWindow", "\320\241\320\221\320\240\320\236\320\241", nullptr));
        button_start->setText(QCoreApplication::translate("MainWindow", "\320\237\320\243\320\241\320\232", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        still_label->setText(QString());
        block_label->setText(QString());
        bich_1_label->setText(QString());
        bich_2_label->setText(QString());
        gruz_1->setText(QString());
        gruz_2->setText(QString());
        gruz_3->setText(QString());
        blok_visoti->setText(QString());
        button_up->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        button_down->setText(QCoreApplication::translate("MainWindow", "DOWN", nullptr));
        stoper->setText(QString());
        oskolesa->setText(QString());
        valuehei->setText(QCoreApplication::translate("MainWindow", "Value:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
