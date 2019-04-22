#pragma once
#include<iostream>

class A{
private:
    int a;

public:
    int get_a()const{
        return a;
    }
    A(int a = 0): a(a){
        std::cout<<"A()\n";
    }

    A& operator=(const A& other){
        std::cout<<"A::operator=()\n";
        if(this != &other){
            this->a = other.a;
        }
        return *this;
    }
};
