#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string givenname, int jauhot, int vesi);
    string getName();
    void makePasta();
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
