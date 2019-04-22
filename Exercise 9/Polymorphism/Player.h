#pragma once

class Player{
private:
    unsigned int id;

public:
    virtual void print()const;
    unsigned int get_id()const;
    void set_id(unsigned int);
    virtual int count_score()const;

};
