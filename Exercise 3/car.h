#pragma once
#include"engine.h"
class Car{
private:
    char* brand;
    int horse_power;
    double price;
    Engine engine;

public:
    Car();
    Car(char*, int, double, const Engine&);
    Car(const Car&);
    Car& operator=(const Car&);
    ~Car();
};
