#pragma once
#include "Player.cpp"

class Tennis_player : public Player{
private:
    int score;

public:
    void print()const;
    int get_score()const;
    void set_score(int);
    int count_score()const;
};
