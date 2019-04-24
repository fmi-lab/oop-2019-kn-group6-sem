///The advantage of using a dynamic_cast is that we do not need to change the classes of the objects we are working with.

#include "../Exercise 9/Polymorphism/TennisPlayer.cpp"
#include "../Exercise 9/Polymorphism/FootballPlayer.cpp"

class Dynamic_caster{
private:
    size_t length;

public:
    Player* players[10];
    Dynamic_caster();
    Dynamic_caster(const Dynamic_caster& other);

///    Implement the following:
///    ~Dynamic_caster();
///    Dynamic_caster& operator=(const Dynamic_caster& other);
///    const Player* operator[](size_t position) const;
///    Player operator[](size_t position);
///    void remove_from(size_t position);
///    bool empty() const;

    void add_player(const Player*);
};
