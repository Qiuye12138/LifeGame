#pragma once
#include <vector>
#include <iostream>


class Board
{
public:
    Board(int w, int h);
    Board(int w, int h, std::vector<bool> board);
    ~Board();
    void set(std::vector<bool> board);

    bool* currentState;
    bool* nextState;
    int H_;
    int W_;
};
