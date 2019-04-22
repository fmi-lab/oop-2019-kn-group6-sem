#pragma once
#include "B.cpp"
#include "C.cpp"

class BC : public B, public C{
private:
    int bc;

public:
    BC(int a = 30, int b = 31, int c = 32, int bc = 33): A(a), B(10, b), C(20, c), bc(bc){
        std::cout<<"BC()\n";
    }
    BC& operator=(const BC& other){
        std::cout<<"BC::operator=()\n";
        if(this != &other){
            this->A::operator=(other);
            this->B::partial_copy(other);
            this->C::partial_copy(other);
        }
    }
};
