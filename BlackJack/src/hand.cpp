#include "hand.h"

Hand::Hand()
{
    Card NewCard;
    Card *newCard = &NewCard;
    m_Card.push_back(newCard);
}

void Hand::Add(Card* pCard){
    m_Card.push_back(pCard);
}

void Hand::Clear(){
    m_Card.clear();
}


int Hand::GetTotal() const {
    int Total = 0;
    vector<Card*>::const_iterator iter;
    for (iter = m_Card.begin(); iter != m_Card.end(); iter++){
        if((**iter).getFlip())
        {
            Total += (**iter).getValue();
        }
    }
    return Total;
}
