#ifndef BOARD_H
#define BOARD_H

#include "IBoard.h"

class Board : public IBoard {
 public:
  Board();
  virtual ~Board();

 protected:
  virtual void initProcess();
  virtual void destProcess();
};

#endif // BOARD_H
