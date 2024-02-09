#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Kerrostalo* Kerrostalo1;
    Kerrostalo1 = new Kerrostalo();
    cout << "Kerrostalon kulutus, = " << Kerrostalo1->laskeKulutus(1) << endl;
    delete Kerrostalo1;
    return 0;
}
