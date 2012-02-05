#ifndef IBOARD_H
#define IBOARD_H

#include "IElement.h"
#include "../common/Common.h"

class IBoard {
 public:
  IBoard();
  virtual ~IBoard();

  void placeElement(Position*, bool);
  IElement* getElement(Position*);

  void initial();
  void destory();
  virtual IBoard* clone() = 0;
 protected:
  IElement* board[3][3];

  virtual void initProcess() = 0;
  virtual void destProcess() = 0;
  //virtual bool checkRuleSet(int ,int );
 private:
};

#endif // IBOARD_H
