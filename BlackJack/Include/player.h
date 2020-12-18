#include <genericplayer.h>

#ifndef PLAYER_H
#define PLAYER_H

//класс игрока
class Player : public GenericPlayer
{
public:
    Player();
    ~Player(){}
    Player(const string &pName);
    bool IsHitting() const;//реализация виртуальной функции, запрашивающей у игрока, желает ли он получить карту.
    void Win() const;//выводит сообщение о победе
    void Lose() const;// выводит сообщение о поражении
    void Push() const;// выводит сообщение о ничьей
};

#endif // PLAYER_H
