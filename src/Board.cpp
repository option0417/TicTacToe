#include "../include/Board.h"
#include "../include/Element.h"
#include <iostream>

Board::Board() {}

Board::~Board() {}

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
