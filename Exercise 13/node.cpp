#pragma once
#include"node.h"
#include<iostream>
template<typename T>
node<T>::node() {}

template<typename T>
node<T>::node(T value):value(value) {}

template<typename T>
node<T>::~node()
{
    for(int i = 0; i<children.size(); i++)
    {
        cout<<"~node("<<children[i]->value<<")"<<endl;
        children[i]->~node();
        delete children[i];
    }
    children.clear();
}

template<typename T>
node<T>::node(const node& other):value(other.value)
{
    for(int i = 0; i<other.children.size(); i++)
    {
        children.push_back(new node(*other.children[i]));
    }
}

template<typename T>
node<T>& node<T>::operator=(const node& other){
    if(this != &other){
        this -> ~node();
        value = other.value;
        for(int i = 0; i<other.children.size(); i++){
            children.push_back(new node(*other.children[i]));
        }
    }
    return *this;
}


template<typename T>
void node<T>::print()const
{
    cout<<value<<endl;
    for(int i = 0; i<children.size(); i++)
    {
        children[i]->print();
    }
}

template<typename T>
void node<T>::add_child(const node& child){
        children.push_back(new node(child));
}























