/*
 * AlphaBeta.h
 *
 *  Created on: 2012/1/6
 *      Author: option0417
 */

#ifndef ALPHABETA_H_
#define ALPHABETA_H_

#include "Evaluation.h"
#include "MoveGenerator.h"
#include "../domain/IBoard.h"
#include "../domain/IElement.h"
#include "../view/BoardView.h"

class AlphaBeta {
public:
	static AlphaBeta* getInstance(IBoard*);
	int runAlgorithm(int, int, int, bool);

private:
	AlphaBeta();
	virtual ~AlphaBeta();

	static AlphaBeta* instance;
	static IBoard* board;

	Evaluation* evaluation;
	MoveGenerator* moveGenerator;
	IElement* element;
	int alpha;
	int beta;
	int depth;
	int reward;

	BoardView* view;
};

#endif /* ALPHABETA_H_ */
