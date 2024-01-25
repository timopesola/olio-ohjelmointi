#include "italianchef.h"

ItalianChef::ItalianChef()
{

}

ItalianChef::ItalianChef(string givenname, int annetutJauhot, int annettuVesi)
{
    name = givenname;
    cout << "Chef " << name << " konstruktori 1" << endl;
    vesi = annettuVesi;
    jauhot = annetutJauhot;

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " users jauhot = " << jauhot << endl;
    cout << "Chef " << name << " users vesi = " << vesi << endl;
}
