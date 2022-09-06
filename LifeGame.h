#pragma once
#include <iostream>
#include "Board.h"


class LifeGame
{
public:
    LifeGame(int h, int w);
    ~LifeGame();
    void display();

private:
    std::shared_ptr<Board> Board_;
    int H_;
    int W_;
};
