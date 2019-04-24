#pragma once
#include "Player.cpp"

class Tennis_player : public Player{
private:
    char* nickname;
    int score;

public:
    void print()const;
    int get_score()const;
    void set_score(int);
    int count_score()const;

    Tennis_player(const char* = "Tennis Player", unsigned int = 0, const char* = "Nickname", int = 0);
    Tennis_player(const Tennis_player& other);
    ~Tennis_player();
    Tennis_player& operator=(const Tennis_player& other);
};
