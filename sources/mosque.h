#ifndef MOSQUE_H
#define MOSQUE_H

#include <QDialog>

namespace Ui {
class mosque;
}

class mosque : public QDialog
{
    Q_OBJECT

public:
    explicit mosque(QWidget *parent = nullptr);
    void showLocations();
    ~mosque();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mosque *ui;
};

#endif // MOSQUE_H
