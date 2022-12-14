#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "campus.h"
#include "buildingmain.h"
#include "fitermanhall.h"
#include "murray.h"

#include<string>
#include <QPixmap>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
