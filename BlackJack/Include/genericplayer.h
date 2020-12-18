#include "hand.h"

#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

//абстрактный класс игрока
class GenericPlayer : public Hand
{
protected:
    string m_Name;
public:
    GenericPlayer();
    virtual bool IsHitting() const = 0;//виртуальная функция, запрашивающая у пользователя, хочет ли он получить карту
    bool IsBoosted() const;//проверка на перебор
    void Bust() const;//вывод сообщения о переборе
    friend ostream& operator<<(ostream& os, GenericPlayer& aPlayer);//перегрузка оператора вывода для данного класса и наследных
};

#endif // GENERICPLAYER_H
