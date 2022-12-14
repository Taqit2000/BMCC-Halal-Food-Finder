#ifndef MURRAYHALL_H
#define MURRAYHALL_H

#include <QDialog>

namespace Ui {
class murrayhall;
}

class murrayhall : public QDialog
{
    Q_OBJECT

public:
    explicit murrayhall(QWidget *parent = nullptr);
    void showLocations();
    ~murrayhall();

private slots:
    void on_gmaps_clicked();

private:
    Ui::murrayhall *ui;
};

#endif // MURRAYHALL_H
