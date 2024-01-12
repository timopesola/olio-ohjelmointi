#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);
int maxnum = 0;

int main()
{
    cout << "Anna korkein mahdollinen etsittava luku: ";
    cin >> maxnum;
    cout << endl << game(maxnum) << " oli arvaustesi maara" << endl;

    return 0;
}

int game(int maxnum)
{
    int number = 0;
    int guess = 0;
    bool guessed = 0;
    int guesses = 0;
    std::srand(time(NULL));
    number = std::rand() % maxnum + 1;

    do
    {
        cout << "Arvaa luku: ";
        cin >> guess;
        if (guess > number)
        {
            cout << endl << "Luku on pienempi" << endl;
            guesses += 1;
        }
        else if (guess < number)
        {
            cout << endl << "Luku on suurempi" << endl;
            guesses += 1;
        }
        else if (guess == number)
        {
            cout << endl << "Oikea vastaus!" << endl;
            guesses += 1;
            guessed = 1;
        }
    }
    while (guessed == 0);
    return guesses;
}
