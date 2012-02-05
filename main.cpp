#include <cstdlib>
#include <iostream>
#include "src/core/Core.h"
#include "gtest/gtest.h"
#include "src/domain/Board.h"
#include "src/ai/AlphaBeta.h"

using namespace std;

int main(int argc, char **argv) {
	//testing::InitGoogleTest(&argc, argv);
    //RUN_ALL_TESTS();

//	Core *core = new Core();
//	core->startGame();
//	delete core;

	Board* board = new Board();
	board->initial();

	AlphaBeta *ab = AlphaBeta::getInstance(board);

	int depth = -1;
	cout<<"Depth : ";
	cin>>depth;
	cout<<"Value : "<<ab->runAlgorithm(-1000, 1000, depth, true);

	return 0;
}
