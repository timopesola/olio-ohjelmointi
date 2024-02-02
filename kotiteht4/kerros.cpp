#include "kerros.h"
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double hinta)
{
    double loppuhinta1 = as1.laskeKulutus(hinta);
    double loppuhinta2 = as2.laskeKulutus(hinta);
    double loppuhinta3 = as3.laskeKulutus(hinta);
    double loppuhinta4 = as4.laskeKulutus(hinta);
    return loppuhinta1+loppuhinta2+loppuhinta3+loppuhinta4;
}
