#include"engine.h"
#include<iostream>

using namespace std;

Engine::Engine(): cylinder_count(0){
    cout<<"Engine()\n";
}

Engine::Engine(int cylinder_count): cylinder_count(cylinder_count){
    cout<<"Engine(int)\n";
}

Engine::Engine(const Engine& other): cylinder_count(other.cylinder_count){
    cout<<"Engine(const Engine&)\n";
}

Engine& Engine::operator=(const Engine& other){
    cout<<"Engine::operator=\n";
    if(this != &other){
        cylinder_count = other.cylinder_count;
    }
    return *this;
}
