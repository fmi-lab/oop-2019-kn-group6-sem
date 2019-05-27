#pragma once
#include"node.cpp"

template <typename T>
class Tree{
private:
    node<T>* root;

public:
    Tree();
    Tree(const Tree&);

};
