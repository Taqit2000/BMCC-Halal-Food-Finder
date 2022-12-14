#include "cheapeats.h"
#include "ui_cheapeats.h"
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

cheapEats::cheapEats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cheapEats)
{
    ui->setupUi(this);
    QPixmap sky;

    sky.load("C://Users/BeastPV//Documents//FinalProject//media//bmcc logo");
    ui->logo->setPixmap(sky);
}

void cheapEats :: showLocations()
{

    QFile file ("C://Users//BeastPV//Documents//FinalProject//cheap.txt");
    if(!file.open(QIODevice::ReadOnly))
    {QMessageBox::information(0,"info",file.errorString());}

    QTextStream in(&file);

    //ui->TextReader->setText(in.readAll());
    ui->textRead->setText(in.readAll());
}



cheapEats::~cheapEats()
{
    delete ui;
}
