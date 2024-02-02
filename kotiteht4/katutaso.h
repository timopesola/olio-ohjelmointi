#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);
    Asunto as1;
    Asunto as2;

};

#endif // KATUTASO_H
