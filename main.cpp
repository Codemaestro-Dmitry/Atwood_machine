#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationName("Fedosov Dmitrii");
    a.setApplicationName("Test Application");
    a.setApplicationVersion("0.0.1");
    MainWindow w;
    w.resize(500, 560);
    w.show();
    return a.exec();
}
