#include"car.h"
#include"engine.cpp"
#include<iostream>
#include<cstring>
#include<cassert>

Car::Car(): horse_power(0), price(0), engine(0){
    brand = new char[1];
    assert(brand);
    brand[0] = '\0';
//    horse_power = 0;
//    price = 0.0;
//    engine = *(new Engine(0)); ///engine = Engine(0);
}

Car::Car(char* brand, int horse_power, double price, const Engine& engine): horse_power(horse_power), price(price), engine(engine){
    this->brand = new char[strlen(brand) + 1];
    assert(this->brand);
    strcpy(this->brand, brand);
//    this->horse_power = horse_power;
//    this->price = price;
//    this->engine = engine;
}

Car::Car(const Car& other): horse_power(other.horse_power), price(other.price), engine(other.engine){
    brand = new char[strlen(other.brand) + 1];
    assert(brand);
    strcpy(brand, other.brand);
//    horse_power = other.horse_power;
//    price = other.price;
//    engine = other.engine;
}

Car& Car::operator=(const Car& other){
    if(this != &other){
        if(brand != NULL){
            delete [] brand;
        }
        brand = new char[strlen(other.brand) + 1];
        assert(brand);
        strcpy(brand, other.brand);
        horse_power = other.horse_power;
        price = other.price;
        engine = other.engine;
    }
    return *this;
}

Car::~Car(){
    if(brand != NULL){
        delete [] brand;
    }
}

int main(){
    Engine e1(4);
    Car c1, c2("renault", 80, 12000, e1);
    c1 = c2;
    Car c3(c1);
}

