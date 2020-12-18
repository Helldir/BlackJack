#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;

//Класс карта.

enum suit{
    diamonds = 1, hearts, spades, clubs
};

enum Rank{
    Ace = 1,
    Jack = 11,
    Queen,
    King,
    two = 2,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten
};

class Card
{
private:
    suit m_Suit;
    Rank m_Rank;
    bool c;
public:
    Card();
    ~Card(){}
    Card(int a, int b);
    void flip();//Переворачивает карту
    int getValue ();
    operator int();//перегрузка оператора статического приведения типа
    bool getFlip() const;
    friend ostream& operator<<(ostream& os, const Card& aCard);//Перегрузка оператора вывода для данного класса
};

#endif // CARD_H
