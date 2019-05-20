#include "DynamicCaster.cpp"

int main(){
    Player p1;
    Tennis_player t1;
    Football_player f1;

    Player* pp = &p1;
    Tennis_player* pt= &t1;
    Football_player* pf = &f1;

    Dynamic_caster dc;

    dc.add_player(pp);
    dc.add_player(pf);
    dc.add_player(pt);
    cout<<(&f1 == dc.players[1])<<endl; /// A check that the object pointed to in dc is a copy of the one the pointer pf is pointing to.

    for(int i = 0; i<3; i++){
        dc.players[i]->print();
    }

    Dynamic_caster dc2(dc);

    cout<<(dc.players[1] == dc2.players[1])<<endl; /// A check that the objects pointed to in dc2 are copies of the ones pointed to in dc.




}
