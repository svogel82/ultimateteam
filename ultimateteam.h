#ifndef ULTIMATETEAM_H
#define ULTIMATETEAM_H

#include <QMainWindow>

namespace Ui {
class ultimateteam;
}

class ultimateteam : public QMainWindow
{
    Q_OBJECT

public:
    explicit ultimateteam(QWidget *parent = 0);
    ~ultimateteam();

private slots:
    void on_pushButton_clicked();


    void on_calc_clicked();

private:
    Ui::ultimateteam *ui;
};

#endif // ULTIMATETEAM_H
