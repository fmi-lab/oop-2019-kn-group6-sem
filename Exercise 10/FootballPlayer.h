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

    Football_player(const char* = "Football Player", unsigned int = 0, int = 0);
    Football_player(const Football_player&);
    Football_player& operator=(const Football_player&);
};
