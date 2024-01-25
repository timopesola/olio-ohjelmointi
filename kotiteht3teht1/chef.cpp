#include "chef.h"

Chef::Chef()
{

}

Chef::Chef(string givenname)
{
    name = givenname;
    cout << "\nChef " << name << " konstruktori 2" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}
