#ifndef ASUNTO_H
#define ASUNTO_H


class Asunto
{
public:
    Asunto();
    ~Asunto();
    void maarita(int,int);
    double laskeKulutus(double);
    int asukasMaara = 0;
    int neliot = 0;
};

#endif // ASUNTO_H
