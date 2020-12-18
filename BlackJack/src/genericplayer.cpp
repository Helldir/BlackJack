#include "genericplayer.h"

GenericPlayer::GenericPlayer()
{

}

bool GenericPlayer::IsBoosted() const
{
    if(GetTotal() > 21)
    {
        Bust();
        return true;
    } else {
        return false;
    }
}

void GenericPlayer::Bust() const
{
    cout << m_Name << " Is bust!!!" << endl;
}

ostream& operator<<(ostream& os, GenericPlayer& aPlayer){
    os <<  aPlayer.m_Name << ": " << endl;
    vector<Card*>::iterator iter;
    for (iter= aPlayer.m_Card.begin(); iter != aPlayer.m_Card.end(); iter++)
    {
        os << (**iter) << " ";
    }
    os << "Total: " << aPlayer.GetTotal() << endl;
    return os;
}

