#include "mosque.h"
#include "ui_mosque.h"
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

mosque::mosque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mosque)
{
    ui->setupUi(this);
    QPixmap sky;

    sky.load("C://Users/BeastPV//Documents//FinalProject//media//mosque");
    ui->bic->setPixmap(sky);
}


void mosque :: showLocations()
{

    QFile file ("C://Users//BeastPV//Documents//FinalProject//mosque.txt");
    if(!file.open(QIODevice::ReadOnly))
    {QMessageBox::information(0,"info",file.errorString());}

    QTextStream in(&file);

    //ui->TextReader->setText(in.readAll());
    ui->textRead->setText(in.readAll());

}

void mosque::on_pushButton_clicked()
{    QString link="https://www.google.com/maps";
     QDesktopServices :: openUrl(QUrl(link));

}
mosque::~mosque()
{
    delete ui;
}



