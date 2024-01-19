#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

Game::Game(int mN)
{
    maxNumber = mN;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game()
{
    cout << endl << "GAME DESTRUCTOR: object cleared from stack memory";
}

void Game::play()
{
    std::srand(time(NULL));
    randomNumber = std::rand() % maxNumber + 1;

    do
    {
        cout << "Arvaa luku valilta 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses += 1;
        if (playerGuess > randomNumber)
        {
            cout << endl << "Luku on pienempi" << endl;
        }
        else if (playerGuess < randomNumber)
        {
            cout << endl << "Luku on suurempi" << endl;
        }
        else if (playerGuess == randomNumber)
        {
            cout << endl << "Oikea vastaus!" << endl;
        }
    }
    while (playerGuess != randomNumber);
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
