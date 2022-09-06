#pragma once
#include <iostream>
#include "Board.h"


class LifeGame
{
public:
    LifeGame(int w, int h);
    ~LifeGame();
    void set(bool* board);
    void display();

private:
    std::shared_ptr<Board> Board_;
    int W_;
    int H_;
};
