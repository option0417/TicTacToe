/*
 * AlphaBeta.cpp
 *
 *  Created on: 2012/1/6
 *      Author: option0417
 */

#include "../include/AlphaBeta.h"
#include <iostream>

using namespace std;

AlphaBeta* AlphaBeta::instance = 0;
IBoard* AlphaBeta::board = 0;

AlphaBeta::AlphaBeta() {
	evaluation = Evaluation::getInstance(AlphaBeta::board);
	moveGenerator = new MoveGenerator();
	alpha = -1000;
	beta = 1000;

	view = new BoardView();
	view->setBoard(AlphaBeta::board);
}

AlphaBeta::~AlphaBeta() {}

AlphaBeta* AlphaBeta::getInstance(IBoard* iboard) {
	if (AlphaBeta::instance == 0) {
		AlphaBeta::board = iboard->clone();
		AlphaBeta::instance = new AlphaBeta();
	}
	return instance;
}

int AlphaBeta::runAlgorithm(int alpha, int beta, int depth, bool turn) {
	if (depth == 0) {
		return evaluation->getEvaluateValue();
	} else {
		this->alpha = alpha;
		this->beta = beta;

		while (moveGenerator->generate(board, turn) &&
				(evaluation->getEvaluateValue() < 100 ||
				evaluation->getEvaluateValue() > -100)) {
			view->showBoard();
			reward = this->runAlgorithm(this->alpha, this->beta, (depth - 1), (!turn));
			cout<<"Reward :" <<reward<<endl;

			cout<<"Before"<<endl;
			cout<<"alpha : "<<this->alpha<<", "<<"beta : "<<this->beta<<endl;
			if (turn) {
				cout<<"Turn : "<<turn<<endl;
				if (reward > this->alpha) {
					this->alpha = reward;
				}

				if (this->alpha > this->beta) {
					return this->alpha;
				}
			} else {
				cout<<"Turn : "<<turn<<endl;
				if (reward < this->beta) {
					this->beta = reward;
				}

				if (this->beta < this->alpha) {
					return this->beta;
				}
			}
			cout<<"After"<<endl;
			cout<<"alpha : "<<this->alpha<<", "<<"beta : "<<this->beta<<endl;
		}

		return turn ? this->alpha : this->beta;
	}
}
