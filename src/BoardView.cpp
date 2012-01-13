#include <iostream>
#include "../include/BoardView.h"

BoardView::BoardView() {
    board = 0;
    pos = new Position();
}

BoardView::~BoardView() {
    delete pos;
}

void BoardView::showBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            pos->setPosition(i, j);
            std::cout<<board->getElement(pos)->getStatus()<<" ";
        }
        std::cout<<std::endl;
    }
}

void BoardView::setBoard(IBoard* board) {
  this->board = board;
}
