#pragma once
#include "Person.h"
#include<iostream>
#include<cstring>
#include<cassert>

Person::Person(const char* name, const char* EGN, unsigned int age): age(age)
{
    std::cout<<"Person(...)\n";
    this->name = new char[strlen(name) + 1];
    assert(this->name);
    strcpy(this->name, name);
    strcpy(this->EGN, EGN);
}

Person::Person(const Person& other): age(other.age)
{
    std::cout<<"Person(const Person&)\n";
    this->name = new char[strlen(other.name) + 1];
    assert(this->name);
    strcpy(this->name, other.name);
    strcpy(this->EGN, other.EGN);
}

Person::~Person()
{
    std::cout<<"~Person()\n";
    if(this->name)
    {
        delete[] name;
    }
}

Person& Person::operator=(const Person& other)
{
    std::cout<<"Person::operator=\n";
    if(this != &other)
    {
        if(this->name)
        {
            delete[] name;
        }

        this->name = new char[strlen(other.name) + 1];
        assert(this->name);
        strcpy(this->name, other.name);
        strcpy(this->EGN, other.EGN);
        age = other.age;
    }
}

void Person::print_person() const{
    std::cout<<"name: "<<name<<std::endl;
    std::cout<<"EGN: "<<EGN<<std::endl;
    std::cout<<"age: "<<age<<std::endl;
}

//int main() {
//    Person p1("Pesho", "0123456789", 20);
//}











