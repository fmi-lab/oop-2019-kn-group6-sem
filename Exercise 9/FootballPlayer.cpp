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

