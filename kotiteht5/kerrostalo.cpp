#include "kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    Kolmas = new Kerros();
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    Kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete Kolmas;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    return eka->laskeKulutus(hinta)+toka->laskeKulutus(hinta)+Kolmas->laskeKulutus(hinta);
}
