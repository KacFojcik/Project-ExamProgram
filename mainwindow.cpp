#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "egzamin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->kat1_plus->setDisabled(1);
    ui->kat1_minus->setDisabled(1);
    ui->kat2_plus->setDisabled(1);
    ui->kat2_minus->setDisabled(1);
    ui->kat3_plus->setDisabled(1);
    ui->kat3_minus->setDisabled(1);
    ui->zaw_plus->setDisabled(1);
    ui->pushButton_8->setDisabled(1);

    ui->kat1->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->kat2->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->kat3->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->zaw->setButtonSymbols(QAbstractSpinBox::NoButtons);
}


MainWindow::~MainWindow()
{
    delete ui;
}
 Egzamin egz1;
 int dodatkowe=egz1.getDodatkowe();

void MainWindow::on_srednia_valueChanged(double arg1)
{

    egz1.setSrednia(arg1);
    egz1.licz_dodatkowe();

    ui->dod_pyt->setNum(egz1.getDodatkowe());

    if(egz1.getDodatkowe()>0)
    {
        ui->kat1_plus->setDisabled(0);
        ui->kat1_minus->setDisabled(0);
        ui->kat2_plus->setDisabled(0);
        ui->kat2_minus->setDisabled(0);
        ui->kat3_plus->setDisabled(0);
        ui->kat3_minus->setDisabled(0);
        ui->zaw_plus->setDisabled(0);
        ui->pushButton_8->setDisabled(0);
    }

}

void MainWindow::on_losuj_clicked()
{
    ui->pyt1_lab->clear();
    ui->pyt2_lab->clear();
    ui->pyt3_lab->clear();
    ui->textBrowser_4->clear();

    int p1 = (ui->kat1->value())+1;
    int p2 = (ui->kat2->value())+1;
    int p3 = (ui->kat3->value())+1;
    int pz = (ui->zaw->value())+2;

    Egzamin egz1;

    egz1.losuj_pyt(1,11,p1);
    for(int i=0; i<p1; i++ )
    {
    ui->pyt1_lab->append(egz1.getPyt1(egz1.getLos1(i)));
    }
    egz1.losuj_pyt(2,11,p2);
     for(int i=0; i<p2; i++ )
     {
    ui->pyt2_lab->append(egz1.getPyt2(egz1.getLos2(i)));
     }
    egz1.losuj_pyt(3,11,p3);
     for(int i=0; i<p3; i++ )
     {
    ui->pyt3_lab->append(egz1.getPyt3(egz1.getLos3(i)));
     }
    egz1.losuj_pyt(4,20,pz);
     for(int i=0; i<pz; i++ )
     {
    ui->textBrowser_4->append(egz1.getPytzaw(egz1.getLoszaw(i)));
     }
}


void MainWindow::on_oblicz_ocene_clicked()
{
    Egzamin egz1;
    egz1.setPytpod(ui->pyt1_ok->isChecked(),ui->pyt2_ok->isChecked(),ui->pyt3_ok->isChecked());
    egz1.oblicz_ocene_p();

    egz1.setPytzaw(ui->pytz1_ok->isChecked(),ui->pytz1_half->isChecked(),ui->pytz2_ok->isChecked(), ui->pytz2_half->isChecked());
    egz1.oblicz_ocene_z();
    ui->ocena_wynik->setNum(egz1.getOcena());
}




void MainWindow::on_kat1_plus_clicked()
{
    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();

    if(suma==egz1.getDodatkowe())
    {
        ui->kat1_plus->setDisabled(1);
        ui->kat2_plus->setDisabled(1);
        ui->kat3_plus->setDisabled(1);
        ui->zaw_plus->setDisabled(1);
    }
    if(!ui->kat1_minus->isEnabled())
        ui->kat1_minus->setEnabled(1);
}


void MainWindow::on_kat1_minus_clicked()
{

    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();
    if(suma<egz1.getDodatkowe())
    {
        ui->kat1_plus->setEnabled(1);
        ui->kat2_plus->setEnabled(1);
        ui->kat3_plus->setEnabled(1);
        ui->zaw_plus->setEnabled(1);
    }

}


void MainWindow::on_kat2_plus_clicked()
{
    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();

    if(suma==egz1.getDodatkowe())
    {
        ui->kat1_plus->setDisabled(1);
        ui->kat2_plus->setDisabled(1);
        ui->kat3_plus->setDisabled(1);
        ui->zaw_plus->setDisabled(1);
    }
    if(!ui->kat2_minus->isEnabled())
        ui->kat2_minus->setEnabled(1);
}


void MainWindow::on_kat2_minus_clicked()
{

    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();
    if(suma<egz1.getDodatkowe())
    {
        ui->kat1_plus->setEnabled(1);
        ui->kat2_plus->setEnabled(1);
        ui->kat3_plus->setEnabled(1);
        ui->zaw_plus->setEnabled(1);
    }

}


void MainWindow::on_kat3_plus_clicked()
{
    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();

    if(suma==egz1.getDodatkowe())
    {
        ui->kat1_plus->setDisabled(1);
        ui->kat2_plus->setDisabled(1);
        ui->kat3_plus->setDisabled(1);
        ui->zaw_plus->setDisabled(1);
    }
    if(!ui->kat3_minus->isEnabled())
        ui->kat3_minus->setEnabled(1);
}


void MainWindow::on_kat3_minus_clicked()
{

    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();
    if(suma<egz1.getDodatkowe())
    {
        ui->kat1_plus->setEnabled(1);
        ui->kat2_plus->setEnabled(1);
        ui->kat3_plus->setEnabled(1);
        ui->zaw_plus->setEnabled(1);
    }
}


void MainWindow::on_zaw_plus_clicked()
{
    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();

    if(suma==egz1.getDodatkowe())
    {
        ui->kat1_plus->setDisabled(1);
        ui->kat2_plus->setDisabled(1);
        ui->kat3_plus->setDisabled(1);
        ui->zaw_plus->setDisabled(1);
    }
    if(!ui->kat2_minus->isEnabled())
        ui->kat2_minus->setEnabled(1);
}


void MainWindow::on_pushButton_8_clicked()
{

    int suma = ui->kat1->value()+ui->kat2->value()+ui->kat3->value()+ui->zaw->value();
    if(suma<egz1.getDodatkowe())
    {
        ui->kat1_plus->setEnabled(1);
        ui->kat2_plus->setEnabled(1);
        ui->kat3_plus->setEnabled(1);
        ui->zaw_plus->setEnabled(1);
    }
}

