#include <windows.h>
#include "LifeGame.h"


LifeGame::LifeGame(int w, int h) {

	W_ = w;
	H_ = h;
	Board_ = std::make_shared<Board>(w, h);
}


LifeGame::~LifeGame() {

}


void LifeGame::set(Board board) {

	for (int i = 0; i < board.H_; i++) {
		for (int j = 0; j < board.W_; j++) {
			Board_->currentState[i * W_ + j + W_ * H_ / 3] = board.currentState[i * board.W_ + j];
		}
	}
}


void  LifeGame::fresh() {

	for (int i = 0; i < H_; i++) {
		for (int j = 0; j < W_; j++) {
			Board_->nextState[i * W_ + j] = LiveorDie(i, j);
		}
	}

	for (int i = 0; i < H_; i++) {
		for (int j = 0; j < W_; j++) {
			Board_->currentState[i * W_ + j] = Board_->nextState[i * W_ + j];
		}
	}
}


int LifeGame::safeCount(int i, int j) {

	if (i < 0 or i >= H_) return 0;
	if (j < 0 or j >= W_) return 0;
	if (Board_->currentState[i * W_ + j]) return 1;
	else return 0;
}


int LifeGame::CountNeighbor(int i, int j) {

	int sum = -safeCount(i, j);

	for (int ii = i - 1; ii <= i + 1; ii++) {
		for (int jj = j - 1; jj <= j + 1; jj++) {
			sum += safeCount(ii, jj);
		}
	}

	return sum;
}


bool LifeGame::LiveorDie(int i, int j) {

	if (Board_->currentState[i * W_ + j]) {							// 如果当前细胞为存活状态
		if (CountNeighbor(i, j) < 2 or CountNeighbor(i, j) > 3) {	// 如果周围少于两个或多于三个活细胞，将其杀死
			return false;
		}
		else {
			return true;											// 否则保持存活状态
		}
	}
	else {															// 如果当前细胞为死亡状态
		if (CountNeighbor(i, j) == 3) {								// 如果周围有三个活细胞，将其复活
			return true;
		}
		else {
			return false;											// 否则保持死亡状态
		}
	}
}


void LifeGame::display(int cycle) {

	while (true) {
		system("cls");
		Board_->display();
		fresh();
		Sleep(cycle);
	}
}
