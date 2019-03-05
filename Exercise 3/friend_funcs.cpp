#include<iostream>
using namespace std;

class B;

class A{
private:
    double x;

public:
    friend double sum_A_B(const A&, const B&);
};

class B{
private:
    int y;
    char c;

public:
    friend double sum_A_B(const A&, const B&);
};

double sum_A_B(const A& a, const B& b){
    return a.x + b.y;
}

int main(){
    A a;
    B b;
    cout<<sum_A_B(a, b);

}
