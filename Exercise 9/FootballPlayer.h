#pragma once
#include "Player.cpp"

class Football_player : public Player{
private:
    int goals;

public:
    void print()const;
    int get_goals()const;
    void set_goals(int);
    int count_score()const;
};
