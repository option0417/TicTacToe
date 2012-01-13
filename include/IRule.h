#ifndef IRULE_H
#define IRULE_H

#include "IBoard.h"
#include "Common.h"

class IRule {
 public:
  IRule();
  IRule(IRule* );
  virtual ~IRule();

  void setRule(IRule* );
  virtual int check(int*);
  virtual bool check(IBoard*,Position*);

 protected:
  IRule* nextRule;
};

#endif // IRULE_H
