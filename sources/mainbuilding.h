#ifndef MAINBUILDING_H
#define MAINBUILDING_H
#include "campus.h"
#include <QDialog>

namespace Ui {
class mainBuilding;
}

class mainBuilding : public QDialog
{
    Q_OBJECT

public:
    explicit mainBuilding(QWidget *parent = nullptr);
    void showLocations();
    ~mainBuilding();

private slots:
    //void on_GMaps_clicked();

    void on_GMaps_clicked();

private:
    Ui::mainBuilding *ui;
};

#endif // MAINBUILDING_H
