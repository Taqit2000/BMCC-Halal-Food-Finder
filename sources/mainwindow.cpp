#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "campus.h"
#include "mainbuilding.h"
#include "fiterman.h"
#include "murrayhall.h"
#include "cheapeats.h"
#include "mosque.h"
#include<string>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->Title->setText("<b>BMCC students Halal Food Finder<b>");
   // QFont font = ui->Title->font();
  //  font.setPointSize(15);
   // ui->Title->setFont(font);
    QPixmap backBic;
    backBic.load("C://Users/BeastPV//Documents//FinalProject//media//backgroundBicture");
    //ui->backLabel->setPixmap(backBic.scaled(100,100,Qt :: KeepAspectRatio));
    ui->backLabel->setPixmap(backBic);

    QPixmap HalalBic;
     HalalBic.load("C://Users/BeastPV//Documents//FinalProject//media//halal");
     ui->HalalBic->setPixmap(HalalBic);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BuildingMain_clicked()
{
    mainBuilding b;


        b.setModal(true);
        b.showLocations();


       b.exec();
}


void MainWindow::on_Fiterman_clicked()
{
    FiterMan f;
    f.setModal(true);
    f.showLocations();
    f.exec();


}


void MainWindow::on_Murray_clicked()
{
    murrayhall m;
    m.setModal(true);
    m.showLocations();
    m.exec();
}


void MainWindow::on_cheapEats_clicked()
{
    cheapEats c;
    c.setModal(true);
    c.showLocations();
    c.exec();
}


void MainWindow::on_mosque_clicked()
{
    mosque m;
    m.setModal(true);
    m.showLocations();
    m.exec();
}

