#include "Board.h"
#include "Element.h"
#include <iostream>

Board::Board() {
}

Board::~Board() {
}

void Board::initProcess() {
    int id = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = new Element(id, DEFAULT);
            id++;
        }
    }
}

void Board::destProcess() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            delete board[i][j];
        }
    }
}



IBoard* Board::clone() {
	IBoard* cloneBoard = new Board();
	cloneBoard->initial();

	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			if (this->board[x][y]->getStatus() == O) {
				cloneBoard->placeElement(new Position(x,y), true);
			} else if (this->board[x][y]->getStatus() == X) {
				cloneBoard->placeElement(new Position(x,y), false);
			}
		}
	}

	return cloneBoard;
}
