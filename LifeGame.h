#pragma once
#include <iostream>
#include "Board.h"


class LifeGame
{
public:
    LifeGame(int w, int h);
    ~LifeGame();

    void set(Board board);
    int safeCount(int i, int j);
    int CountNeighbor(int i, int j);
    bool LiveorDie(int i, int j);
    void fresh();
    void display(int cycle = 300);

private:
    std::shared_ptr<Board> Board_;
    int W_;
    int H_;
};
