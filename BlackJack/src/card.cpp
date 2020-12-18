#include "card.h"
//Конструктор по умолчанию
Card::Card()
{

}


Card::Card(int a, int b){
    switch (a)
    {
    case 1:
        m_Rank = Ace;
        break;
    case 2:
        m_Rank = two;
        break;
    case 3:
        m_Rank = three;
        break;
    case 4:
        m_Rank = four;
        break;
    case 5:
        m_Rank = five;
        break;
    case 6:
        m_Rank = six;
        break;
    case 7:
        m_Rank = seven;
        break;
    case 8:
        m_Rank = eight;
        break;
    case 9:
        m_Rank = nine;
        break;
    case 10:
        m_Rank = ten;
        break;
    case 11:
        m_Rank = Jack;
        break;
    case 12:
        m_Rank = Queen;
        break;
    case 13:
        m_Rank = King;
    }
    switch (b)
    {
    case 1:
        m_Suit = diamonds;
        break;
    case 2:
        m_Suit = hearts;
        break;
    case 3:
        m_Suit = spades;
        break;
    case 4:
        m_Suit = clubs;
        break;
    }
    c = 1;
}

void Card::flip()
{
    if(c == 0)
        c = 1;
    else
        c = 0;
}

int Card::getValue()
{
    int a = m_Rank;
    return a;
}

bool Card::getFlip() const{
    return c;
}

Card::operator int(){
    int a = m_Rank;
    return a;
}

ostream& operator<<(ostream& os, const Card& aCard){
    if (aCard.c == 1) {
        os << "Rank:" << '|' << aCard.m_Rank << '|' << "Suit" << '|' << aCard.m_Suit << '|' << endl;
    } else
        os << '|' << "XX" << '|' << endl;
    return os;
}
