#include <vector>
#include "player.h"
#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    cout << "\t\tWelcome to Blackjack!\n\n";
    //запрашиваем количество игроков
    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7)
    {
        cout << "How many players? (1 - 7): ";
        cin >> numPlayers;
    }
    //запрашиваем имена игроков
    vector<string> names;
    string name;
    for (int i = 0; i < numPlayers; ++i)
    {
        cout << "Enter player name: ";
        cin >> name;
        names.push_back(name);
    }
    cout << endl;

    // игровой цикл
    Game aGame(names);// создаем класс с игроками
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.Play();//начинаем игру
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;
    }
    return 0;
}
