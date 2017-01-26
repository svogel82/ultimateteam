#include "ultimateteam.h"
#include "ui_ultimateteam.h"
#include <QString>
#include <QPixmap>
#include <QLineEdit>

ultimateteam::ultimateteam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ultimateteam)
{


    ui->setupUi(this);
    QPixmap pix("/Users/sebastianvogel/Desktop/fifa17.jpg");
    ui->labelpix->setPixmap(pix);


}

ultimateteam::~ultimateteam()
{
    delete ui;
}

void ultimateteam::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {



            ui->lineEdit->setEnabled(true);
            ui->lineEdit->setInputMask("DD");
            ui->lineEdit_2->setEnabled(true);
            ui->lineEdit_2->setInputMask("DD");
            ui->lineEdit_3->setEnabled(true);
            ui->lineEdit_4->setEnabled(true);
            ui->lineEdit_5->setEnabled(true);
            ui->lineEdit_6->setEnabled(true);
            ui->lineEdit_7->setEnabled(true);
            ui->lineEdit_8->setEnabled(true);
            ui->lineEdit_9->setEnabled(true);
            ui->lineEdit_10->setEnabled(true);
            ui->lineEdit_11->setEnabled(true);
            ui->lineEdit_12->setEnabled(true);
            ui->lineEdit_13->setEnabled(true);
            ui->lineEdit_14->setEnabled(true);
            ui->lineEdit_15->setEnabled(true);
            ui->lineEdit_16->setEnabled(true);
            ui->lineEdit_17->setEnabled(true);
            ui->lineEdit_18->setEnabled(true);
            ui->calc->setEnabled(true);

}

}




void ultimateteam::on_calc_clicked()
{

    QString player1 =  ui->lineEdit->text();
        QString player2 =  ui->lineEdit_2->text();
        QString player3 =  ui->lineEdit_3->text();
        QString player4 =  ui->lineEdit_4->text();
        QString player5 =  ui->lineEdit_5->text();
        QString player6 =  ui->lineEdit_6->text();
        QString player7 =  ui->lineEdit_7->text();
        QString player8 =  ui->lineEdit_8->text();
        QString player9 =  ui->lineEdit_9->text();
        QString player10 =  ui->lineEdit_10->text();
        QString player11 =  ui->lineEdit_11->text();
        QString player12 =  ui->lineEdit_12->text();
        QString player13 =  ui->lineEdit_13->text();
        QString player14 =  ui->lineEdit_14->text();
        QString player15 =  ui->lineEdit_15->text();
        QString player16 =  ui->lineEdit_16->text();
        QString player17 =  ui->lineEdit_17->text();
        QString player18 =  ui->lineEdit_18->text();


        int spieler = player1.toInt();
        int spieler_1 = player2.toInt();
        int spieler_2 = player3.toInt();
        int spieler_3 = player4.toInt();
        int spieler_4 = player5.toInt();
        int spieler_5 = player6.toInt();
        int spieler_6 = player7.toInt();
        int spieler_7 = player8.toInt();
        int spieler_8 = player9.toInt();
        int spieler_9 = player10.toInt();
        int spieler_10 = player11.toInt();
        int spieler_11 = player12.toInt();
        int spieler_12 = player13.toInt();
        int spieler_13 = player14.toInt();
        int spieler_14 = player15.toInt();
        int spieler_15 = player16.toInt();
        int spieler_16 = player17.toInt();
        int spieler_17 = player18.toInt();





        int total = (spieler + spieler_1+ spieler_2+ spieler_3+ spieler_4+ spieler_5+ spieler_6+ spieler_7+ spieler_8+ spieler_9+ spieler_10+ spieler_11+ spieler_12+ spieler_13+ spieler_14+ spieler_15+ spieler_16+ spieler_17)/18;

        QString qStr = QString::number(total);

        ui->total->setText(qStr);



}
