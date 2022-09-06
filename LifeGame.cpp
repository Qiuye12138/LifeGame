#include <windows.h>
#include "LifeGame.h"


LifeGame::LifeGame(int w, int h) {

	W_ = w;
	H_ = h;
	Board_ = std::make_shared<Board>(w, h);
}


LifeGame::~LifeGame() {

}


void LifeGame::set(bool* board) {

	Board_->set(board);
}


void LifeGame::display() {

	while (true) {
		system("cls");
		Board_->display();
		Board_->fresh();
		Sleep(1000);
	}
}
