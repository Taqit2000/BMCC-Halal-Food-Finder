#ifndef FITERMAN_H
#define FITERMAN_H

#include <QDialog>

namespace Ui {
class FiterMan;
}

class FiterMan : public QDialog
{
    Q_OBJECT

public:
    explicit FiterMan(QWidget *parent = nullptr);
     void showLocations();
    ~FiterMan();

private slots:
     //void on_pushButton_clicked();

     void on_GMaps_clicked();

private:
    Ui::FiterMan *ui;
};

#endif // FITERMAN_H
