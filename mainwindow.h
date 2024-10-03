#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTime>
#include<QTimer>
#include<cmath>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_start_clicked();

    void on_button_plus_clicked();

    void on_button_minus_clicked();

    void on_button_up_clicked();

    void on_button_down_clicked();

    void on_button_reboot_clicked();

    void DropGR1();

    void DropGR3();


private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *timer2;
};
#endif // MAINWINDOW_H
