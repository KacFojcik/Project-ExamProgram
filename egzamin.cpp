#include "egzamin.h"

Egzamin::Egzamin()
{

}

void Egzamin::oblicz_ocene_p()
{
    if(m_pyt1 && m_pyt2 && m_pyt3)
        m_ocena=3.0;
    else
        m_ocena=2.0;
}

void Egzamin::oblicz_ocene_z()
{
    if(m_ocena==3)
    {
        if(m_pytz1_half)
            m_ocena=m_ocena+0.5;
        else if(m_pytz1_ok)
            m_ocena=m_ocena+1.0;
        if(m_pytz2_half)
            m_ocena=m_ocena+0.5;
        else if (m_pytz2_ok)
            m_ocena=m_ocena+1.0;
    }
}

void Egzamin::losuj_pyt(int lista, int zakres, int ile)
{
    int *wylosowane = new int[ile+1];
    bool losowanie_ok;
    int ile_wylosowano=0;
    random_device srng; mt19937 rng;
    rng.seed(srng());
    uniform_int_distribution<int> uniDistInt(0, zakres);
    for (int i=1; i<=ile; i++)
    {
        do
        {
    int liczba = uniDistInt(rng);
    losowanie_ok=true;
    for(int j=1; j<=ile_wylosowano; j++)
    {
        if (liczba==wylosowane[j])
            losowanie_ok=false;
    }
    if(losowanie_ok==true)
    {
        ile_wylosowano++;
        wylosowane[ile_wylosowano] = liczba;
    switch (lista)
    {
    case 1:
        m_los1.append(liczba);
        break;
    case 2:
        m_los2.append(liczba);
        break;
    case 3:
        m_los3.append(liczba);
        break;
    case 4:
        m_loszaw.append(liczba);
        break;
    }
    }
        }while(losowanie_ok!=true);
    }
    delete [] wylosowane;
}

void Egzamin::licz_dodatkowe()
{
    int dodatkowe;
    double temp = m_srednia - 3.0;

    dodatkowe = temp/0.5;

    if(dodatkowe>=0)
        m_dodatkowe=dodatkowe;

}
/*
 void Test2()
{
    Egzamin test2;
    QList<int> lista;
    test2.losuj_pyt(lista, 2, 9);
    QList<int>::iterator iter = lista.begin();
    while (iter != lista.end())
    qDebug() << *iter++ << " ";
}
*/

/*
 * void Test()
{
    Egzamin test;
     double srednia = 4.2;
     test.setSrednia(srednia);
     test.licz_dodatkowe();
     int oczekiwane = 2;

     if(test.getDodatkowe()==oczekiwane)
         qDebug() << "OK";
     else
         qDebug() << "BLAD";
}
*/
