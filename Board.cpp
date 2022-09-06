#include "Board.h"


Board::Board(int w, int h) {
	W_ = w;
	H_ = h;
	currentState = new bool[w * h]();
	nextState = new bool[w * h]();;
}


Board::~Board() {
	delete[] currentState;
	delete[] nextState;
}


void  Board::set(bool* board) {
	for (int i = 0; i < W_; i++) {
		for (int j = 0; j < H_; j++) {
			currentState[i * W_ + j] = board[i * H_ + j];
		}
	}
}


int Board::safeCount(int i, int j) {

	if (i < 0 or i >= W_) return 0;
	if (j < 0 or j >= H_) return 0;
	if (currentState[i * W_ + j]) return 1;
	else return 0;
}


int Board::CountNeighbor(int i, int j) {

	int sum = -safeCount(i, j);

	for (int ii = i - 1; ii <= i + 1; ii++) {
		for (int jj = j - 1; jj <= j + 1; jj++) {
			sum += safeCount(ii, jj);
		}
	}

	return sum;
}


bool Board::LiveorDie(int i, int j) {
	if (currentState[i * W_ + j]) {										// �����ǰϸ��Ϊ���״̬
		if (CountNeighbor(i, j) < 2 or CountNeighbor(i, j) > 3) {	// �����Χ�������������������ϸ��������ɱ��
			return false;
		}
		else {
			return true;											// ���򱣳ִ��״̬
		}
	}
	else {															// �����ǰϸ��Ϊ����״̬
		if (CountNeighbor(i, j) == 3) {								// �����Χ��������ϸ�������临��
			return true;
		}
		else {
			return false;											// ���򱣳�����״̬
		}
	}
}


void  Board::fresh() {

	for (int i = 0; i < W_; i++) {
		for (int j = 0; j < H_; j++) {
			nextState[i * W_ + j] = LiveorDie(i, j);
		}
	}

	for (int i = 0; i < W_; i++) {
		for (int j = 0; j < H_; j++) {
			currentState[i * W_ + j] = nextState[i * W_ + j];
		}
	}

}


void Board::display() {

	for (int i = 0; i < W_; i++) {
		for (int j = 0; j < H_; j++) {
			if (currentState[i * W_ + j]) {
				std::cout << "��";
			}
			else {
				std::cout << "��";
			}
		}
		std::cout << std::endl;
	}
}
