#include "card.h"
#include <vector>
#include <iostream>
#include <algorithm>

#ifndef HAND_H
#define HAND_H


using namespace std;
//класс, представляющий колоду кард
class Hand
{
protected:
    vector<Card*> m_Card;//вектор указателей на обьекты класса карта
public:
    Hand();
    ~Hand(){}
    void Add(Card* pCard);//добавляет карту в колоду
    void Clear();//очищает руку
    int GetTotal() const;//выводит сумму карт
};

#endif // HAND_H
