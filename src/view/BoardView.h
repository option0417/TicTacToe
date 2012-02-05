#ifndef BOARDVIEW_H
#define BOARDVIEW_H

#include "../domain/IBoard.h"
#include "../common/Common.h"

class BoardView {
 public:
  BoardView();
  virtual ~BoardView();

  // View operation
  void showBoard();
  void setBoard(IBoard*);
 private:
  IBoard* board;
  Position* pos;
};

#endif // BOARDVIEW_H
