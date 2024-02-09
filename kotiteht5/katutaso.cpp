#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    as1 = new Asunto();
    as2 = new Asunto();
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    return as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta)+Kerros::laskeKulutus(hinta);
}
