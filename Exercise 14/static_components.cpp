#include<iostream>
using namespace std;

class A{
private:
    static int x;
    unsigned int uid;
public:
    A(){
        x++;
        uid = x;
    }
    static int get_static_x(){
        return x;
    }

    static void set_static_x(A* a, int y){
        A::x = y;
        cout<<a->x<<endl;
    }

    static void increment(){
        x++;
    }

};

int A::x = 0;

int main(){
//    cout<<A::x<<endl;
//    A a1;
//    cout<<a1.x<<endl;
//    A a2;
//    a2.x = 20;
//    cout<<a1.x<<endl;

    A a1, a2, a3, a4, a5;
    A::set_static_x(&a1, 10);
    cout<<A::get_static_x()<<endl;

    A::increment();

    cout<<A::get_static_x()<<endl;

}
