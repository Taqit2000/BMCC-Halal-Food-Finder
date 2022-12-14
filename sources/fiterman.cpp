#include "fiterman.h"
#include "ui_fiterman.h"
#include "campus.h"
#include "mainbuilding.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include <fstream>
#include <QString>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>

FiterMan::FiterMan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FiterMan)
{
    ui->setupUi(this);
    QPixmap BIC;
    BIC.load("C://Users/BeastPV//Documents//FinalProject//media//fiterman");
    ui->BIC->setPixmap(BIC);

    QPixmap sky;

    sky.load("C://Users/BeastPV//Documents//FinalProject//media//sky");
    ui->sky->setPixmap(sky);

}

void FiterMan::showLocations()
{
    QFile file ("C://Users//BeastPV//Documents//FinalProject//fiterman.txt");
    if(!file.open(QIODevice::ReadOnly))
    {QMessageBox::information(0,"info",file.errorString());}

    QTextStream in(&file);

    //ui->TextReader->setText(in.readAll());
    ui->TextRead->setText(in.readAll());
}

void FiterMan::on_GMaps_clicked()
{
    QString link="https://www.google.com/maps";
    QDesktopServices :: openUrl(QUrl(link));
}

FiterMan::~FiterMan()
{
    delete ui;
}



