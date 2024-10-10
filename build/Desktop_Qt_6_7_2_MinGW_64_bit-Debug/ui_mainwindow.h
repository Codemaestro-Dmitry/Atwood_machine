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
#include <QtWidgets/QFrame>
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
    QFrame *line;
    QLabel *lineyka;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_20;
    QFrame *line_21;
    QFrame *line_22;
    QFrame *line_23;
    QFrame *line_24;
    QFrame *line_25;
    QFrame *line_26;
    QFrame *line_27;
    QFrame *line_28;
    QFrame *line_29;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QFrame *line_30;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 560);
        QFont font;
        font.setPointSize(7);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"	background-color: rgb(215, 215, 215);\n"
"	\n"
"	\n"
"	background-color: rgb(55, 0, 69);\n"
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
"	border: 2px "
                        "solid rgb(90, 90, 90);\n"
"border-radius: 2px;\n"
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
"	background-color: qlineargradient(spread:reflect,"
                        " x1:0.87, y1:0.534591, x2:0.119, y2:0.209818, stop:0.244318 rgba(0, 0, 0, 255), stop:0.636364 rgba(246, 191, 191, 255));\n"
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
"}\n"
"\n"
"#lineyka{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        podstavka = new QLabel(centralwidget);
        podstavka->setObjectName("podstavka");
        podstavka->setGeometry(QRect(68, 400, 361, 151));
        time_label = new QLabel(centralwidget);
        time_label->setObjectName("time_label");
        time_label->setGeometry(QRect(100, 424, 71, 16));
        QFont font1;
        font1.setPointSize(12);
        time_label->setFont(font1);
        massa_label = new QLabel(centralwidget);
        massa_label->setObjectName("massa_label");
        massa_label->setGeometry(QRect(248, 424, 61, 16));
        massa_label->setFont(font1);
        kilogram_label = new QLabel(centralwidget);
        kilogram_label->setObjectName("kilogram_label");
        kilogram_label->setGeometry(QRect(390, 490, 16, 16));
        kilogram_label->setFont(font1);
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
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        button_reboot->setFont(font2);
        button_reboot->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_3->addWidget(button_reboot);

        button_start = new QPushButton(gridLayoutWidget);
        button_start->setObjectName("button_start");
        QFont font3;
        font3.setBold(true);
        button_start->setFont(font3);
        button_start->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_3->addWidget(button_start);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        lcd_display_time = new QLCDNumber(gridLayoutWidget);
        lcd_display_time->setObjectName("lcd_display_time");
        lcd_display_time->setAutoFillBackground(false);
        lcd_display_time->setFrameShape(QFrame::Shape::Box);
        lcd_display_time->setLineWidth(1);
        lcd_display_time->setMidLineWidth(0);
        lcd_display_time->setSmallDecimalPoint(true);
        lcd_display_time->setDigitCount(5);
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
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        button_plus->setFont(font4);
        button_plus->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button_plus->setAutoDefault(false);
        button_plus->setFlat(false);

        horizontalLayout->addWidget(button_plus);

        button_minus = new QPushButton(gridLayoutWidget);
        button_minus->setObjectName("button_minus");
        button_minus->setFont(font4);
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
        bich_1_label->setGeometry(QRect(272, 38, 2, 86));
        bich_2_label = new QLabel(centralwidget);
        bich_2_label->setObjectName("bich_2_label");
        bich_2_label->setGeometry(QRect(223, 38, 2, 325));
        gruz_1 = new QLabel(centralwidget);
        gruz_1->setObjectName("gruz_1");
        gruz_1->setGeometry(QRect(258, 120, 30, 12));
        gruz_2 = new QLabel(centralwidget);
        gruz_2->setObjectName("gruz_2");
        gruz_2->setGeometry(QRect(209, 363, 30, 12));
        gruz_3 = new QLabel(centralwidget);
        gruz_3->setObjectName("gruz_3");
        gruz_3->setGeometry(QRect(261, 113, 24, 7));
        blok_visoti = new QLabel(centralwidget);
        blok_visoti->setObjectName("blok_visoti");
        blok_visoti->setGeometry(QRect(434, 400, 60, 151));
        button_up = new QPushButton(centralwidget);
        button_up->setObjectName("button_up");
        button_up->setGeometry(QRect(445, 428, 39, 41));
        button_up->setFont(font3);
        button_up->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button_up->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 42);\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"border-radius: 5px;"));
        button_down = new QPushButton(centralwidget);
        button_down->setObjectName("button_down");
        button_down->setGeometry(QRect(445, 486, 39, 41));
        QFont font5;
        font5.setPointSize(7);
        font5.setBold(true);
        button_down->setFont(font5);
        button_down->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        button_down->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 5, 7);\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"border-radius: 5px;"));
        stoper = new QLabel(centralwidget);
        stoper->setObjectName("stoper");
        stoper->setGeometry(QRect(243, 210, 49, 7));
        oskolesa = new QLabel(centralwidget);
        oskolesa->setObjectName("oskolesa");
        oskolesa->setGeometry(QRect(238, 26, 21, 21));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(314, 240, 26, 1));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        lineyka = new QLabel(centralwidget);
        lineyka->setObjectName("lineyka");
        lineyka->setGeometry(QRect(309, 109, 37, 293));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(325, 250, 15, 1));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(314, 260, 26, 1));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(325, 270, 15, 1));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(314, 280, 26, 1));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(325, 290, 15, 1));
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(314, 300, 26, 1));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(325, 310, 15, 1));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(314, 320, 26, 1));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(325, 330, 15, 1));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(314, 340, 26, 1));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        line_12 = new QFrame(centralwidget);
        line_12->setObjectName("line_12");
        line_12->setGeometry(QRect(325, 350, 15, 1));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);
        line_13 = new QFrame(centralwidget);
        line_13->setObjectName("line_13");
        line_13->setGeometry(QRect(325, 370, 15, 1));
        line_13->setFrameShape(QFrame::Shape::HLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);
        line_14 = new QFrame(centralwidget);
        line_14->setObjectName("line_14");
        line_14->setGeometry(QRect(314, 360, 26, 1));
        line_14->setFrameShape(QFrame::Shape::HLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);
        line_15 = new QFrame(centralwidget);
        line_15->setObjectName("line_15");
        line_15->setGeometry(QRect(314, 380, 26, 1));
        line_15->setFrameShape(QFrame::Shape::HLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);
        line_16 = new QFrame(centralwidget);
        line_16->setObjectName("line_16");
        line_16->setGeometry(QRect(325, 390, 15, 1));
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);
        line_17 = new QFrame(centralwidget);
        line_17->setObjectName("line_17");
        line_17->setGeometry(QRect(325, 230, 15, 1));
        line_17->setFrameShape(QFrame::Shape::HLine);
        line_17->setFrameShadow(QFrame::Shadow::Sunken);
        line_18 = new QFrame(centralwidget);
        line_18->setObjectName("line_18");
        line_18->setGeometry(QRect(314, 400, 26, 1));
        line_18->setFrameShape(QFrame::Shape::HLine);
        line_18->setFrameShadow(QFrame::Shadow::Sunken);
        line_19 = new QFrame(centralwidget);
        line_19->setObjectName("line_19");
        line_19->setGeometry(QRect(314, 220, 26, 1));
        line_19->setFrameShape(QFrame::Shape::HLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);
        line_20 = new QFrame(centralwidget);
        line_20->setObjectName("line_20");
        line_20->setGeometry(QRect(325, 210, 15, 1));
        line_20->setFrameShape(QFrame::Shape::HLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);
        line_21 = new QFrame(centralwidget);
        line_21->setObjectName("line_21");
        line_21->setGeometry(QRect(314, 200, 26, 1));
        line_21->setFrameShape(QFrame::Shape::HLine);
        line_21->setFrameShadow(QFrame::Shadow::Sunken);
        line_22 = new QFrame(centralwidget);
        line_22->setObjectName("line_22");
        line_22->setGeometry(QRect(325, 190, 15, 1));
        line_22->setFrameShape(QFrame::Shape::HLine);
        line_22->setFrameShadow(QFrame::Shadow::Sunken);
        line_23 = new QFrame(centralwidget);
        line_23->setObjectName("line_23");
        line_23->setGeometry(QRect(314, 180, 26, 1));
        line_23->setFrameShape(QFrame::Shape::HLine);
        line_23->setFrameShadow(QFrame::Shadow::Sunken);
        line_24 = new QFrame(centralwidget);
        line_24->setObjectName("line_24");
        line_24->setGeometry(QRect(325, 170, 15, 1));
        line_24->setFrameShape(QFrame::Shape::HLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);
        line_25 = new QFrame(centralwidget);
        line_25->setObjectName("line_25");
        line_25->setGeometry(QRect(314, 160, 26, 1));
        line_25->setFrameShape(QFrame::Shape::HLine);
        line_25->setFrameShadow(QFrame::Shadow::Sunken);
        line_26 = new QFrame(centralwidget);
        line_26->setObjectName("line_26");
        line_26->setGeometry(QRect(325, 150, 15, 1));
        line_26->setFrameShape(QFrame::Shape::HLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);
        line_27 = new QFrame(centralwidget);
        line_27->setObjectName("line_27");
        line_27->setGeometry(QRect(314, 140, 26, 1));
        line_27->setFrameShape(QFrame::Shape::HLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);
        line_28 = new QFrame(centralwidget);
        line_28->setObjectName("line_28");
        line_28->setGeometry(QRect(325, 130, 15, 1));
        line_28->setFrameShape(QFrame::Shape::HLine);
        line_28->setFrameShadow(QFrame::Shadow::Sunken);
        line_29 = new QFrame(centralwidget);
        line_29->setObjectName("line_29");
        line_29->setGeometry(QRect(314, 120, 26, 1));
        line_29->setFrameShape(QFrame::Shape::HLine);
        line_29->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(314, 387, 21, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(314, 107, 31, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(314, 369, 37, 12));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(314, 349, 37, 12));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(314, 329, 37, 12));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(314, 309, 37, 12));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(314, 289, 37, 12));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(314, 269, 37, 12));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(314, 249, 37, 12));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(314, 229, 37, 12));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(314, 209, 37, 12));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(314, 189, 37, 12));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(314, 169, 37, 12));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(314, 149, 37, 12));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(314, 129, 37, 12));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_30 = new QFrame(centralwidget);
        line_30->setObjectName("line_30");
        line_30->setGeometry(QRect(340, 120, 3, 281));
        line_30->setFrameShape(QFrame::Shape::VLine);
        line_30->setFrameShadow(QFrame::Shadow::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        lineyka->raise();
        still_label->raise();
        line->raise();
        bich_1_label->raise();
        bich_2_label->raise();
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
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        line_8->raise();
        line_9->raise();
        line_10->raise();
        line_11->raise();
        line_12->raise();
        line_13->raise();
        line_14->raise();
        line_15->raise();
        line_16->raise();
        line_17->raise();
        line_18->raise();
        line_19->raise();
        line_20->raise();
        line_21->raise();
        line_22->raise();
        line_23->raise();
        line_24->raise();
        line_25->raise();
        line_26->raise();
        line_27->raise();
        line_28->raise();
        line_29->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        line_30->raise();

        retranslateUi(MainWindow);

        button_reboot->setDefault(false);
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
        lineyka->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "0\321\201\320\274", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "140\321\201\320\274", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "10\321\201\320\274", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "20\321\201\320\274", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "30\321\201\320\274", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "40\321\201\320\274", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "50\321\201\320\274", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "60\321\201\320\274", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "70\321\201\320\274", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "80\321\201\320\274", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "90\321\201\320\274", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "100\321\201\320\274", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "110\321\201\320\274", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "120\321\201\320\274", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "130\321\201\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
