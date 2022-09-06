#include "LifeGame.h"



LifeGame::LifeGame(int h, int w) {
	H_ = h;
	W_ = w;
	Board_ = std::make_shared<Board>(h, w);
}


LifeGame::~LifeGame() {

}


void LifeGame::display() {
	Board_->display();
}
