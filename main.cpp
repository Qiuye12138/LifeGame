#include <iostream>
#include "LifeGame.h"


int main()
{
    LifeGame game0(7, 7);
    bool* test = new bool[7*7]( 0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 1, 0, 0,
                                0, 0, 1, 0, 1, 0, 0,
                                0, 0, 0, 1, 1, 0, 0,
                                0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0, 0, 0,
                                0, 0, 0, 0, 0, 0, 0) ;
    game0.set(test);
    game0.display();
    delete [] test;

    return 0;
}
