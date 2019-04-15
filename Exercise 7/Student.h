#pragma once
#include "Person.h"

class Student : public Person {
private:
    unsigned int fn;

public:
    Student(const char* = "Player1", const char* = "0000000000", unsigned int = 0, unsigned int = 0);
    Student(const Student&);
    ~Student();
    Student& operator=(const Student& other);
    unsigned int get_fn() const;
};
