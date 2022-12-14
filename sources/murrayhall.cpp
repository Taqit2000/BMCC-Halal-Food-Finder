#include "campus.h"
#include "murrayhall.h"
#include "ui_murrayhall.h"
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

murrayhall::murrayhall(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::murrayhall)
{
    ui->setupUi(this);
    QPixmap BIC;
    BIC.load("C://Users/BeastPV//Documents//FinalProject//media//murray");
    ui->murraybic->setPixmap(BIC);
    QPixmap sky;

    sky.load("C://Users/BeastPV//Documents//FinalProject//media//sky");
    ui->sky->setPixmap(sky);

}

void murrayhall::  showLocations()
{cout<< "this is mainbuilding"<<endl;
    QFile file ("C://Users//BeastPV//Documents//FinalProject//murray.txt");
    if(!file.open(QIODevice::ReadOnly))
    {QMessageBox::information(0,"info",file.errorString());}

    QTextStream in(&file);

    //ui->TextReader->setText(in.readAll());
    ui->TextRead->setText(in.readAll());


}

void murrayhall::on_gmaps_clicked()
{
    QString link="https://www.google.com/maps";
    QDesktopServices :: openUrl(QUrl(link));
}

murrayhall::~murrayhall()
{
    delete ui;
}


