/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/Common.h"

Position::Position() : x(0), y(0) {}

Position::Position(int x, int y) : x(x), y(y) {}

void Position::setPosition(int x, int y) {
    setX(x);
    setY(y);
}

void Position::setX(int x) {
    this->x = x;
}

void Position::setY(int y) {
    this->y = y;
}

int Position::getX() {
    return x;
}

int Position::getY() {
    return y;
}
