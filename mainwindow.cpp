#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//##-------- Изменяемые параметры --------##
double mass = 0.005, timee = 0.0;
int gr1x = 0, gr1y = 0;

//##-------- Начальные параметры --------##
//#------ Стопер ------#
const int STx = 243, STy = 217;
//#------ Доп. груз ------#
const int GR3x = 261, GR3y = 130, GR3height = 7, GR3wight = 24;
const double GR3M = 0.005;
//#------ Первый груз ------#
const int GR1x = 258, GR1y = 137, GR1wight = 30, GR1height = 12;
//#------ Второй груз ------#
const int GR2x= 209, GR2y = 363, GR2wight = 30, GR2height = 12;
//#------ Нитка 1 ------#
const int L1x = 272, L1y = 38, L1wight = 2, L1height = 100;
//#------ Нитка 2 ------#
const int L2x = 223, L2y = 38, L2wight = 2, L2height = 325;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_start_clicked()
{

    timer = new QTimer();
    timer2 = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(DropGR1()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(DropGR3()));
    //connect(timer, SIGNAL(timeout()), this, SLOT(DropGR2()));

    timer->start(20 - mass*1000);//Чем больше масса, тем быстрее падает груз
    timer2->start(20 - mass*1000);

    ui->button_start->setDisabled(true);
}

void MainWindow::on_button_plus_clicked()
{
    bool test = ui->button_minus->isHidden();
    double* pmass = &mass;
    *pmass+=0.001;

    if(test) ui->button_minus->show();
    if(mass>=0.018) ui->button_plus->hide();
    ui->lcd_display_massa->display(*pmass);
    ui->gruz_3->setGeometry(ui->gruz_3->x(), ui->gruz_3->y()-2,ui->gruz_3->width(), ui->gruz_3->height()+2);
}


void MainWindow::on_button_minus_clicked()
{
    double* pmass = &mass;
    bool test = ui->button_plus->isHidden();
    *pmass-=0.001;
    if(test) ui->button_plus->show();
    if(mass<=0.001)
    {
        ui->button_minus->hide();
    }
    ui->lcd_display_massa->display(*pmass);
    ui->gruz_3->setGeometry(ui->gruz_3->x(), ui->gruz_3->y()+2,ui->gruz_3->width(), ui->gruz_3->height()-2);
}

void MainWindow::on_button_up_clicked()
{
    if(ui->stoper->y()>=ui->gruz_3->y()+ui->gruz_3->height()+ui->stoper->height())
    {
        ui->stoper->setGeometry(ui->stoper->x(),ui->stoper->y()-10, ui->stoper->width(), ui->stoper->height());
    }
}


void MainWindow::on_button_down_clicked()
{
    if(ui->stoper->y()<=317)
    {
        ui->stoper->setGeometry(ui->stoper->x(),ui->stoper->y()+10, ui->stoper->width(), ui->stoper->height());
    }
}


void MainWindow::on_button_reboot_clicked()
{
    //#------ Востановление стопера ------#
    ui->stoper->setGeometry(STx, STy, ui->stoper->width(), ui->stoper->height());
    //#------ Востановление доп. груза ------#
    ui->gruz_3->setGeometry(GR3x, GR3y, GR3wight, GR3height);
    double *pmass = &mass;
    *pmass = GR3M;
    ui->lcd_display_massa->display(*pmass);
    //#------ Востановление первого груза -----#
    ui->gruz_1->setGeometry(GR1x, GR1y, GR1wight, GR1height);
    //#------ Востановление второго груза -----#
    ui->gruz_2->setGeometry(GR2x, GR2y, GR2wight, GR2height);
    //#------ Востановление таймера ------#
    double *ptimer = &timee;
    *ptimer = 0.0;
    ui->lcd_display_time->display(*ptimer);
    //#------ Востановление первой нити ------#
    ui->bich_1_label->setGeometry(L1x, L1y, L1wight, L1height);
    //#------ Востановление второй нити ------#
    ui->bich_2_label->setGeometry(L2x, L2y, L2wight, L2height);
    //#------ Востановление поля ввода массы ------#
    ui->button_minus->show();
    ui->button_plus->show();


    ui->button_start->setDisabled(false);

    timer->blockSignals(true);
}

void MainWindow::DropGR1()
{
    int gx = ui->gruz_1->x(), gy = ui->gruz_1->y(), gwidth = ui->gruz_1->width(), gheight = ui->gruz_1->height();
    int lx = ui->bich_1_label->x(), ly = ui->bich_1_label->y(), lwidth = ui->bich_1_label->width(), lheight = ui->bich_1_label->height();

    int gx2 = ui->gruz_2->x(), gy2 = ui->gruz_2->y(), gwidth2 = ui->gruz_2->width(), gheight2 = ui->gruz_2->height();
    int lx2 = ui->bich_2_label->x(), ly2 = ui->bich_2_label->y(), lwidth2 = ui->bich_2_label->width(), lheight2 = ui->bich_2_label->height();

    ui->gruz_2->setGeometry(gx2, gy2-1,gwidth2, gheight2);
    ui->bich_2_label->setGeometry(lx2, ly2, lwidth2, lheight2-1);

    ui->gruz_1->setGeometry(gx, gy+1,gwidth, gheight);
    ui->bich_1_label->setGeometry(lx, ly, lwidth, lheight+1);

    double *ptime = &timee;
    *ptime+=100;
    ui->lcd_display_time->display(*ptime/1000);
    if(gy+GR1height+1>=ui->podstavka->y())
    {
        timer->blockSignals(true);
    }
}

void MainWindow::DropGR3()
{
    int gx = ui->gruz_3->x(), gy = ui->gruz_3->y(), gwidth = ui->gruz_3->width(), gheight = ui->gruz_3->height();
    ui->gruz_3->setGeometry(gx, gy+1, gwidth, gheight);
    if(gy+GR3height+1>=ui->stoper->y())
    {
        timer2->blockSignals(true);
    }
}

double MainWindow::Yskor()
{

}
