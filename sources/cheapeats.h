#ifndef CHEAPEATS_H
#define CHEAPEATS_H

#include <QDialog>

namespace Ui {
class cheapEats;
}

class cheapEats : public QDialog
{
    Q_OBJECT

public:
    explicit cheapEats(QWidget *parent = nullptr);
    void showLocations();
    ~cheapEats();

private:
    Ui::cheapEats *ui;
};

#endif // CHEAPEATS_H
