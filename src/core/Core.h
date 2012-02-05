#ifndef CORE_H
#define CORE_H

#include "../domain/IBoard.h"
#include "../view/BoardView.h"
#include "../ai/Evaluation.h"
#include "../ruleset/IRule.h"
#include "../common/Common.h"

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
