#include "Board.h"


Board::Board(int h, int w) {
	H_ = h;
	W_ = w;
	Handle_ = new bool[h * w]();
}


Board::~Board() {
	delete[] Handle_;
}


void Board::display() {
	for (int i = 0; i < W_; i++) {
		for (int j = 0; j < H_; j++) {
			if (Handle_[i*H_ + j]) {
				std::cout << 'X';
			}
			else {
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
}
