#include "mainwindow.h"

#include <QApplication>
#include "egzamin.cpp"
int main(int argc, char *argv[])
{
    //Test();
    //Test2();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
