#include "TennisPlayer.cpp"
#include "FootballPlayer.cpp"

using namespace std;

int main(){
    Player p1;
    Tennis_player t1;

    Player* p_p1 = new Tennis_player();
    delete p_p1;

    Tennis_player t2;
    t2 = t1;

    Football_player f1;
    Football_player f2;
    f2 = f1;
}
