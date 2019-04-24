#include "DynamicCaster.h"
#include <iostream>

Dynamic_caster::Dynamic_caster(): length(0) {}

Dynamic_caster::Dynamic_caster(const Dynamic_caster& other): length(other.length)
{
    const Player* p;
    const Tennis_player* t;
    const Football_player* f;
    for(int i = 0; i<length; i++)
    {
        if(p = dynamic_cast<const Player*>(other.players[i]))
        {
            players[i] = new Player(*p);
        }

        if(t = dynamic_cast<const Tennis_player*>(other.players[i]))
        {
            players[i] = new Tennis_player(*t);
        }
        else if (f = dynamic_cast<const Football_player*>(other.players[i]))
        {
            players[i] = new Football_player(*f);
        }
    }
}

void Dynamic_caster::add_player(const Player* player)
{
    const Player* p;
    const Tennis_player* t;
    const Football_player* f;
    if(p = dynamic_cast<const Player*>(player))
        {
            players[length] = new Player(*p);
        }

        if(t = dynamic_cast<const Tennis_player*>(player))
        {
            players[length] = new Tennis_player(*t);
        }
        else if (f = dynamic_cast<const Football_player*>(player))
        {
            players[length] = new Football_player(*f);
        }
    length ++;
}

