#include "asunto.h"
#include <iostream>

using namespace std;


Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukkaat, int nelioMaara)
{
    asukasMaara = asukkaat;
    neliot = nelioMaara;
    cout << "Asunto maaritetty asukkaita= " << asukasMaara << " nelioita= " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    return hinta*asukasMaara*neliot;
}
