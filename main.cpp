#include <vector>
#include <iostream>
#include "Board.h"
#include "LifeGame.h"


// 滑翔机
Board Glider(3, 3, { 0, 0, 1, 1, 0, 1, 0, 1, 1 });

// 闪烁灯
Board Blinker(3, 3, { 0, 0, 0, 1, 1, 1, 0, 0, 0 });

// 开关引擎
Board SwitchEngine(6, 4, { 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1});


int main()
{
	LifeGame game0(25, 25);
	game0.set(SwitchEngine);
	game0.display();

	return 0;
}
