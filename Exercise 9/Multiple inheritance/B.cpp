#pragma once
#include "A.cpp"

class B : virtual public A{
private:
    int b;

public:
    B(int a = 10, int b = 11): A(a), b(b){
        std::cout<<"B()\n";
    }
    B& partial_copy(const B& other){
        std::cout<<"B::partial_copy()\n";
        if(this != &other){
            this->b = other.b;
        }
        return *this;
    }
};
