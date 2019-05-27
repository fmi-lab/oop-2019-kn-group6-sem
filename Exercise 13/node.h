#pragma once
#include<vector>

using namespace std;

template <typename T>
struct node{
    T value;
    vector<node*> children;

    node<T>();
    node<T>(T);
    node<T>(const node&);
    ~node<T>();
    node<T>& operator=(const node&);

    void print()const;
    void add_child(const node&);

};


