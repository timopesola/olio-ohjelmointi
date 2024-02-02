#include "kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    Kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double hinta)
{
    double loppuhinta1 = eka.laskeKulutus(hinta);
    double loppuhinta2 = toka.laskeKulutus(hinta);
    double loppuhinta3 = Kolmas.laskeKulutus(hinta);
    return loppuhinta1+loppuhinta2+loppuhinta3;
}
