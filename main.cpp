#include <vector>
#include <iostream>
#include "Board.h"
#include "LifeGame.h"


// 滑翔机
Board Glider(3, 3, { 0, 0, 1, 1, 0, 1, 0, 1, 1 });

// 闪烁灯
Board Blinker(3, 3, { 0, 0, 0, 1, 1, 1, 0, 0, 0 });

Board SwitchEngine(6, 4, {  0, 1, 0, 1, 0, 0,
							1, 0, 0, 0, 0, 0,
							0, 1, 0, 0, 1, 0,
							0, 0, 0, 1, 1, 1});


int main()
{
	LifeGame game0(25, 25);
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 6; j++) {
	//		if (SwitchEngine.currentState[i * 6 + j]) {
	//			std::cout << "■";
	//		}
	//		else {
	//			std::cout << "□";
	//		}
	//	}
	//	std::cout << std::endl;
	//}
	game0.set(Glider);
	game0.display();

	return 0;
}
