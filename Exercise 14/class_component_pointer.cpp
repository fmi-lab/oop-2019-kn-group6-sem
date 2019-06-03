#include<iostream>
using namespace std;

class A{
private:
    int x;

public:
    int y;
    A(int x = 0, int y = 0):x(x),y(y){}

    void set_x(int x){
        this->x = x;
    }

    int get_x()const{
        return x;
    }
};

int main(){
    A a(1, 10);
    int A::*ptr_y = &A::y;

    cout<<a.*ptr_y<<endl;

    int (A::*ptr_get_x)()const = A::get_x;

    cout<<(a.*ptr_get_x)()<<endl;

    void (A::*ptr_set_x)(int) = A::set_x;

    (a.*ptr_set_x)(20);

    cout<<(a.*ptr_get_x)()<<endl;
}
