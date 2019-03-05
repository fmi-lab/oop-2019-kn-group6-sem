#pragma once
class Engine{
private:
    int cylinder_count;

public:
    Engine();
    Engine(int);
    Engine(const Engine&);
    Engine& operator=(const Engine&);
//    ~Engine();
};
