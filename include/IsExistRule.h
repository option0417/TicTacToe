#ifndef ISEXISTRULE_H
#define ISEXISTRULE_H

#include "IRule.h"

class IsExistRule : public IRule {
 public:
  IsExistRule();
  IsExistRule(IRule* );
  virtual ~IsExistRule();

  virtual bool check(IBoard* , Position*);
};

#endif // ISEXISTRULE_H
