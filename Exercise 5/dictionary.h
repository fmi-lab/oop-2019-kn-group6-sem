#pragma once
#include"row.h"

class Dictionary{
private:
    row rows[500];
    unsigned int length;

public:
    Dictionary();
    Dictionary(const Dictionary&);
    ~Dictionary() = default;
    Dictionary& operator=(const Dictionary&);

    void add_row(const row& element);
    void print_dictionary() const;
};
