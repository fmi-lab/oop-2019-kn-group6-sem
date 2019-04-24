#pragma once
#include"FootballPlayer.h"

void Football_player::print()const{
    cout<<"id: "<<get_id()<<endl<<"goals: "<<goals<<endl;
}

int Football_player::get_goals()const{
    return goals;
}

void Football_player::set_goals(int goals){
    this->goals = goals;
}

int Football_player::count_score()const{
    return goals;
}

Football_player::Football_player(const char* name, unsigned int id, int goals): Player(name, id), goals(goals){}

Football_player::Football_player(const Football_player& other): Player(other), goals(goals){}

Football_player& Football_player::operator=(const Football_player& other){
    if(this != &other){
        this->Player::operator=(other);
        goals = other.goals;
    }
    return *this;
}

