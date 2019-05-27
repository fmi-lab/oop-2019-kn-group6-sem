#include "node.cpp"
using namespace std;

int main(){
    node<int> n1(1), n2(2), n3(3), n4(4), n5(5);
    n2.add_child(n4);
    n2.add_child(n5);
    n1.add_child(n2);
    n1.add_child(n3);

//    node<int> n10(n1);

//    n10.print();

    node<int> n10(10);

    n10 = n1;

}
