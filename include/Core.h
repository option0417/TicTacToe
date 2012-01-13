#ifndef CORE_H
#define CORE_H

#include "IBoard.h"
#include "BoardView.h"
#include "Evaluation.h"
#include "IRule.h"
#include "Common.h"

class Core
{
 public:
  Core();
  ~Core();

  int startGame();
  bool checkGame();
  void placeElement(Position*, bool);
 private:
  BoardView* view;
  IBoard* board;
  Position* pos;
  Evaluation* evaluation;
  IRule* rule;
};

#endif // CORE_H
