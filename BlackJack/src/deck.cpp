#include "deck.h"


using namespace std;

Deck::Deck()
{
    m_Card.reserve(52);
    Populate();
}

void Deck::Populate()
{
    Clear();
        // создает стандартную колоду
        for (int s = 1; s <= 13; ++s)
        {
            for (int r = 1; r <= 4; ++r)
            {
                Add(new Card(s, r));
            }
        }
}
// тасует колоду
void Deck::Shuffle()
{
    random_shuffle(m_Card.begin(), m_Card.end());
}
// сдает одну карту
void Deck::Deal(Hand& aHand)
{
    if (!m_Card.empty())
    {
        aHand.Add(m_Card.back());
        m_Card.pop_back();
    }
    else
    {
        cout << "Out of cards. Unable to deal.";
    }
}

// продолжает раздавать карты до тех пор, пока у игрока не случается
// перебор или пока он хочет взять еще одну карту
void Deck::AddltionalCards (GenericPlayer& aGenericPlayer)
{
    cout << endl;
    while (!(aGenericPlayer.IsBoosted()) && aGenericPlayer.IsHitting())
    {
        Deal(aGenericPlayer);
        cout << aGenericPlayer << endl;

        if (aGenericPlayer.IsBoosted())
        {
            aGenericPlayer.Bust();
        }
    }
}
