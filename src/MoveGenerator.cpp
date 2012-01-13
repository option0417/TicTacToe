/*
 * ElementGenerator.cpp
 *
 *  Created on: 2012/1/6
 *      Author: option0417
 */

#include "../include/MoveGenerator.h"
#include <iostream>
using namespace std;

MoveGenerator::MoveGenerator() : pos(0) {}
MoveGenerator::~MoveGenerator() {}

bool MoveGenerator::generate(IBoard* board, bool turn) {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			pos = new Position(x, y);
			if (board->getElement(pos)->getStatus() == DEFAULT) {
				board->placeElement(pos, turn);
				cout<<"X : "<<pos->getX()
					<<" ,"<<"Y : "<<pos->getY()
					<<" ,"<<"Turn : "<<turn<<endl;
				return true;
			}
		}
	}
	return false;
}

Position* MoveGenerator::getPosition() {
	return pos;
}
