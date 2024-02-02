#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    double loppuhinta1 = as1.laskeKulutus(hinta);
    double loppuhinta2 = as2.laskeKulutus(hinta);

    return loppuhinta1+loppuhinta2+Kerros::laskeKulutus(1);
}
