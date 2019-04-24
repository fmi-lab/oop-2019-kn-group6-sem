#include "TennisPlayer.cpp"
#include "FootballPlayer.cpp"

class Dynamic_caster{
private:
    size_t length;

public:
    Player* players[10];
    Dynamic_caster();
    Dynamic_caster(const Dynamic_caster& other);
//    ~Dynamic_caster();
//    Dynamic_caster& operator=(const Dynamic_caster& other);

    void add_player(const Player*);
};
