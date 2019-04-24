#pragma once
#include"TennisPlayer.h"

void Tennis_player::print()const
{
    cout<<"id: "<<get_id()<<endl<<"score: "<<score<<endl;
}

int Tennis_player::get_score()const
{
    return score;
}

void Tennis_player::set_score(int score)
{
    this->score = score;
}

int Tennis_player::count_score()const
{
    return score;
}

Tennis_player::Tennis_player(const char* name, unsigned int height, const char* nickname, int score): Player(name, height), score(score)
{
    cout<<"Tennis_player()\n";
    this->nickname = new char[strlen(nickname) + 1];
    assert(this->nickname);
    strcpy(this->nickname, nickname);
}

Tennis_player::Tennis_player(const Tennis_player& other): Player(other), score(other.score)
{
    this->nickname = new char[strlen(other.nickname) + 1];
    assert(this->nickname);
    strcpy(this->nickname, other.nickname);
}

Tennis_player::~Tennis_player()
{
    cout<<"~Tennis_player()\n";
    delete[] nickname;
    nickname = NULL;
}

Tennis_player& Tennis_player::operator=(const Tennis_player& other)
{
    if(this != &other)
    {
        this->Player::operator=(other);
        delete[] nickname;
        nickname = new char[strlen(other.nickname) + 1];
        assert(this->nickname);
        strcpy(this->nickname, other.nickname);
    }
}

