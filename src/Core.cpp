#include "../include/Core.h"
#include "../include/Board.h"

#include "../include/IsExistRule.h"
#include "../include/IndexBoundRule.h"
#include <iostream>

Core::Core() {
  view = new BoardView();
  board = new Board();
  pos = new Position();
  evaluation = Evaluation::getInstance(board);
  rule = new IndexBoundRule(new IsExistRule());

  board->initial();
  view->setBoard(board);
}

Core::~Core() {
  delete rule;
  board->destory();
  delete pos;
  delete board;
  delete view;
  std::cout<<"Close"<<std::endl;
}

int Core::startGame() {
  std::cout<<"Game Start"<<std::endl;
  bool flag = true;
  bool turn = true;
  int posX = -1;
  int posY = -1;
  while(flag) {
    std::cout<<"Input X : ";
    std::cin>>posX;
    std::cout<<"Input Y : ";
    std::cin>>posY;

    pos->setPosition(posX, posY);
    placeElement(pos, turn);

    view->showBoard();
    int val = evaluation->getEvaluateValue();
    std::cout<<"Evl : "<<val<<std::endl;

    if(val == 100 || val == -100) {
        flag = false;
    }

    turn = !turn;
  }
  return 0;
}

void Core::placeElement(Position* pos, bool turn) {
  try {
    if (rule->check(board, pos)) {
      board->placeElement(pos, turn);
    }
  } catch (const char* msg) {
    std::cout<<"Error Msg : "<<msg<<std::endl;
  }
}
