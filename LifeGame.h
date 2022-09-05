#pragma once
#include <iostream>



class LifeGame
{
public:
    LifeGame(int h, int w);
    ~LifeGame();
    void display();

private:
    bool* Handle_;
    int H_;
    int W_;
};
