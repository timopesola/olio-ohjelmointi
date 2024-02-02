#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Kerrostalo Kerrostalo1;
    cout << "Kerrostalon kulutus, = " << Kerrostalo1.laskeKulutus(1) << endl;
    return 0;
}
