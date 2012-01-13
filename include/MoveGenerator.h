/*
 * ElementGenerator.h
 *
 *  Created on: 2012/1/6
 *      Author: option0417
 */

#ifndef MOVEGENERATOR_H_
#define MOVEGENERATOR_H_

#include "Common.h"
#include "IBoard.h"

class MoveGenerator {
public:
	MoveGenerator();
	~MoveGenerator();

	bool generate(IBoard*, bool);
	Position* getPosition();

private:
	Position* pos;
};

#endif /* MOVEGENERATOR_H_ */
