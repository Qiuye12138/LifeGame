#pragma once
class Board
{
public:
    Board(int h, int w);
    ~Board();
    void display();

private:
    bool* Handle_;
    int H_;
    int W_;
};
