#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* Kolmas;
};

#endif // KERROSTALO_H
