#include "genericplayer.h"

#ifndef HOUSE_H
#define HOUSE_H

//класс диллера
class House : public GenericPlayer
{
public:
    House();
    ~House(){}
    bool IsHitting() const;//проверка на необходимость добавления карты
    void FlipFirstCard();//переворачивает карту
};

#endif // HOUSE_H
