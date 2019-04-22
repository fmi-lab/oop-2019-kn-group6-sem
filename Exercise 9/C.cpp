#pragma once
#include "A.cpp"

class C : virtual public A{
private:
    int c;

public:
    C(int a = 20, int c = 21): A(a), c(c){
        std::cout<<"C()\n";
    }

    C& partial_copy(const C& other){
        std::cout<<"C::partial_copy()\n";
        if(this != &other){
            this->c = other.c;
        }
        return *this;
    }
};

