#include "player.h"

Player::Player()
{

}

Player::Player(const string &pName)
{
    Clear();
    m_Name = pName;
}

bool Player::IsHitting() const{
    while(1){
        cout << m_Name << ' ' << "do you need another card?: y/n" << endl;
        char a;
        cin >> a;
        if (a == 'y')
            return true;
        if (a == 'n')
            return false;
    }
}

void Player :: Win() const{
    cout << m_Name << " - wins!!!";
}

void Player :: Lose() const{
    cout << m_Name << " - lose!!!";
}

void Player :: Push() const{
    cout << m_Name << " - played in a draw!!!";
}
