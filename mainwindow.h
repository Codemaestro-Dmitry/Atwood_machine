#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/*
 * Заголовочный файл, в котором подключаются все необходимые библиотеки и
 * описываются прототипы классов и функций.
*/
#include <QMainWindow>
#include<QTime>
#include<QTimer>
#include<cmath>

QT_BEGIN_NAMESPACE
namespace Ui { //Использвоание пространства имен Ui
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow //Прототип класса, который наследует функционал класса QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); //Прототип конструктора
    ~MainWindow();                         //Прототип деструктора

private slots:
    void on_button_start_clicked(); //Прототип функции для кнопки "старт"

    void on_button_plus_clicked(); //Прототип функции для кнопки "Увеличение массы"

    void on_button_minus_clicked(); //Прототип функции для кнопки "Уменьшение массы"

    void on_button_up_clicked(); //Прототип функции для кнопки "Поднять"

    void on_button_down_clicked(); //Прототив функции для кнопки "Опустить"

    void on_button_reboot_clicked(); //Прототип функции для кнопки "Перезапуск установки"

    void DropGR1(); //Прототип функции, в которой описано движение груза_1 (и груза_2)

    void DropGR3(); //Прототип функции, в которой описано движение перевеса


private:
    Ui::MainWindow *ui; //Создание объекта на основе класса MainWindow
    QTimer *timer; //Создание объекта класса QTimer. Отвечает за обновление позиции грузов
    QTimer *timer2;//
};
#endif // MAINWINDOW_H
