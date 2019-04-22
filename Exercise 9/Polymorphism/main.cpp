#include "FootballPlayer.cpp"
#include "TennisPlayer.cpp"

int main(){
    Player* player_arr[5];
    Player p1, p2;
    Tennis_player t1;
    Football_player f1, f2;

    p1.set_id(1);
    p2.set_id(2);
    t1.set_id(11);
    t1.set_score(21);
    f1.set_id(21);
    f2.set_id(22);
    f1.set_goals(15);
    f2.set_goals(16);

    player_arr[0] = &p1;
    player_arr[1] = &f1;
    player_arr[2] = &t1;
    player_arr[3] = &f2;
    player_arr[4] = &p2;

    for(int i = 0; i<5; i++){
        player_arr[i]->print();
    }

    int total_score = 0;
    for(int i = 0; i<5; i++){
        total_score += player_arr[i]->count_score();
    }

    cout<<"Average score: "<<(double)total_score/5<<endl;

    player_arr[1]->Player::print();

}
