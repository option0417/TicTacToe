#include "../include/IBoard.h"
#include "../include/Element.h"
#include <iostream>

IBoard::IBoard() {}

IBoard::~IBoard() {}

void IBoard::placeElement(Position* pos, bool turn) {
    switch(turn) {
        case true:
            board[pos->getX()][pos->getY()]->setStatus(O);
            break;
        case false:
            board[pos->getX()][pos->getY()]->setStatus(X);
            break;
        default:
            std::cout<<"Catch error occur"<<std::endl;
    }
}

IElement* IBoard::getElement(Position* pos) {
    return board[pos->getX()][pos->getY()];
}

void IBoard::initial() {
    initProcess();
}

void IBoard::destory() {
    destProcess();
}
