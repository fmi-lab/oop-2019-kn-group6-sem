#pragma once
#include "Player.h"
#include<iostream>
using namespace std;

void Player::print()const{
    cout<<"id: "<<id<<endl;
}

unsigned int Player::get_id()const{
    return id;
}

void Player::set_id(unsigned int id){
    this->id = id;
}

int Player::count_score()const{
    return 0;
}
