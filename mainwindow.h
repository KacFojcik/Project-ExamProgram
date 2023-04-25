#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void on_srednia_valueChanged(double arg1);

    void on_losuj_clicked();

    void on_oblicz_ocene_clicked();

    void on_kat1_plus_clicked();

    void on_kat1_minus_clicked();

    void on_kat2_plus_clicked();

    void on_kat2_minus_clicked();

    void on_kat3_plus_clicked();

    void on_kat3_minus_clicked();

    void on_zaw_plus_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
