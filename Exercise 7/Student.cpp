#pragma once
#include "Student.h"
#include "Person.cpp"

Student::Student(const char* name, const char* EGN, unsigned int age, unsigned int fn): Person(name, EGN, age), fn(fn){
    std::cout<<"Student(...)\n";
}
Student::Student(const Student& other): Person(other), fn(other.fn){
    std::cout<<"Student(const Student&)\n";
}
Student::~Student(){
    std::cout<<"~Student()\n";
///    this->~Person(); //calls automatically
}
Student& Student::operator=(const Student& other){
    std::cout<<"Student::operator=\n";
    if(this != &other){
        this->Person::operator=(other);
        fn = other.fn;
    }
}
