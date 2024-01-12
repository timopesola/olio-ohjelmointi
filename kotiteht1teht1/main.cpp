#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number = 0;
    int guess = 0;
    bool guessed = 0;
    std::srand(time(NULL));
    number = std::rand() % 20 + 1;
    do
    {
        cout << "Arvaa luku: ";
        cin >> guess;
        if (guess > number)
        {
            cout << endl << "Luku on pienempi" << endl;
        }
        else if (guess < number)
        {
            cout << endl << "Luku on suurempi" << endl;
        }
        else if (guess == number)
        {
            cout << endl << "Oikea vastaus!" << endl;
            guessed = 1;
        }
    }
    while (guessed == 0);

    return 0;
}
