
#pragma once // DECK_H

#include "hand.h"
#include "genericplayer.h"


class Deck : public Hand
{
public:
    Deck();
    ~Deck(){}
    void Populate();//создает колоду
    void Shuffle();//тасует
    void Deal (Hand& aHand);//сдает 1 карту
    void AddltionalCards (GenericPlayer& aGenerlcPlayer);//раздает карты пока игрок хочет и модет их получать
};


