#include "house.h"

House::House()
{
    Clear();
    m_Name = "House";
}
// реализация виртуальной функции, в которой проверяется условие,
// если у дилера меньше или набрано 16 очков, необходимо взять карту
bool House::IsHitting() const
{
     if (GetTotal() <= 16)
     {
     return true;
     } else {
     return false;
    }
}

void House::FlipFirstCard()
{
    vector<Card*>::iterator it;
    it = m_Card.begin();
    (**it).flip();
}
