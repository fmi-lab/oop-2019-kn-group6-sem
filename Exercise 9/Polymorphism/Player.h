#pragma once

class Player{
private:
    char* name;
    unsigned int id;

public:
    virtual void print()const;
    unsigned int get_id()const;
    void set_id(unsigned int);
    virtual int count_score()const;

    Player(const char* = "Player 1", unsigned int = 0);
    Player(const Player&);
    virtual ~Player();
    Player& operator=(const Player&);

};
