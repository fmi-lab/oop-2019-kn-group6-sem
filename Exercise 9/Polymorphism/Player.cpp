#pragma once
#include "Player.h"
#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

void Player::print()const
{
    cout<<"id: "<<id<<endl;
}

unsigned int Player::get_id()const
{
    return id;
}

void Player::set_id(unsigned int id)
{
    this->id = id;
}

int Player::count_score()const
{
    return 0;
}


Player::Player(const char* name, unsigned int id): id(id)
{
    cout<<"Player()\n";
    this->name = new char[strlen(name) + 1];
    assert(this->name);
    strcpy(this->name, name);
}

Player::Player(const Player& other): id(other.id)
{
    this->name = new char[strlen(other.name) + 1];
    assert(this->name);
    strcpy(this->name, other.name);
}

Player::~Player()
{
    cout<<"~Player()\n";
    delete[] name;
    name = NULL;
}

Player& Player::operator=(const Player& other)
{
    if(this != &other)

    {
        delete[] name;
        name = NULL;
        id = other.id;
    }
    return *this;
}
