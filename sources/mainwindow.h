#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "./ui_mainwindow.h"
#include "campus.h"
#include "buildingmain.h"
#include "fitermanhall.h"
#include "murray.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BuildingMain_clicked();

    void on_Fiterman_clicked();

    void on_Murray_clicked();



    void on_cheapEats_clicked();

    void on_mosque_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
