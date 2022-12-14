#include "campus.h"
#include "mainbuilding.h"
#include "ui_mainbuilding.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include <fstream>
#include <QString>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>

using namespace std;

mainBuilding::mainBuilding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainBuilding)
{
    ui->setupUi(this);
    QPixmap backBic;
    backBic.load("C://Users/BeastPV//Documents//FinalProject//media//capture");
    //ui->backLabel->setPixmap(backBic.scaled(100,100,Qt :: KeepAspectRatio));
    ui->BackBic->setPixmap(backBic);



}


void mainBuilding::  showLocations()
{cout<< "this is mainbuilding"<<endl;
    QFile file ("C://Users//BeastPV//Documents//FinalProject//mainbuilding.txt");
    if(!file.open(QIODevice::ReadOnly))
    {QMessageBox::information(0,"info",file.errorString());}

    QTextStream in(&file);

    //ui->TextReader->setText(in.readAll());
    ui->TextRead->setText(in.readAll());


}

void mainBuilding::on_GMaps_clicked()
{
    QString link="https://www.google.com/maps";
    QDesktopServices :: openUrl(QUrl(link));
}

mainBuilding::~mainBuilding()
{
    delete ui;
}
