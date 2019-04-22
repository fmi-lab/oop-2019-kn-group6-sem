#pragma once
#include"TennisPlayer.h"

void Tennis_player::print()const{
    cout<<"id: "<<get_id()<<endl<<"score: "<<score<<endl;
}

int Tennis_player::get_score()const{
    return score;
}

void Tennis_player::set_score(int score){
    this->score = score;
}

int Tennis_player::count_score()const{
    return score;
}
