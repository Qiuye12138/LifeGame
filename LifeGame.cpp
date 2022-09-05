#include "LifeGame.h"



LifeGame::LifeGame(int h, int w) {
	H_ = h;
	W_ = w;
	Handle_ = new bool[h * w]();
}


LifeGame::~LifeGame() {
	delete[] Handle_;
}


void LifeGame::display() {
	for (int i = 0; i < W_; i++) {
		for (int j = 0; j < H_; j++) {
			if (Handle_[i][j]) {
				std::cout << 'X' << std::endl;
			}
			else {
				std::cout << ' ' << std::endl;
			}
		}
	}
}
