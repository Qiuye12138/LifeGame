#include "Board.h"


Board::Board(int w, int h) {

	W_ = w;
	H_ = h;
	currentState = new bool[w * h]();
	nextState = new bool[w * h]();
}


Board::Board(int w, int h, std::vector<bool> board) {

	W_ = w;
	H_ = h;
	currentState = new bool[w * h]();
	nextState = new bool[w * h]();
	set(board);
}


Board::~Board() {

	delete[] currentState;
	delete[] nextState;
}


void Board::set(std::vector<bool> board) {

	for (int i = 0; i < H_; i++) {
		for (int j = 0; j < W_; j++) {
			currentState[i * W_ + j] = board[i * W_ + j];
		}
	}
}


void Board::display() {

	for (int i = 0; i < H_; i++) {
		for (int j = 0; j < W_; j++) {
			if (currentState[i * W_ + j]) {
				std::cout << "¡ö";
			}
			else {
				std::cout << "¡õ";
			}
		}
		std::cout << std::endl;
	}
}
