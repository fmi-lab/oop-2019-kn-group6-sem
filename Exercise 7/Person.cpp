#include "Person.h"
#include<iostream>
#include<cstring>
#include<cassert>

Person::Person(const char* name, const char* EGN, unsigned int age): age(age)
{
    this->name = new char[strlen(name) + 1];
    assert(this->name);
    strcpy(this->name, name);
    strcpy(this->EGN, EGN);
}

Person::Person(const Person& other): age(other.age)
{
    this->name = new char[strlen(other.name) + 1];
    assert(this->name);
    strcpy(this->name, other.name);
    strcpy(this->EGN, other.EGN);
}

Person::~Person()
{
    if(this->name)
    {
        delete[] name;
    }
}

Person& Person::operator=(const Person& other)
{
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

int main() {
    Person p1("Pesho", "0123456789", 20);
}











