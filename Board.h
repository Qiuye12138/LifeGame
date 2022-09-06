#pragma once
#include <iostream>


class Board
{
public:
    Board(int w, int h);
    ~Board();
    void set(bool* board);
    void fresh();
    void display();
    int safeCount(int i, int j);
    int CountNeighbor(int i, int j);
    bool LiveorDie(int i, int j);

private:
    bool* currentState;
    bool* nextState;
    int H_;
    int W_;
};
