#ifndef INDEXBOUNDRULE_H
#define INDEXBOUNDRULE_H

#include "IRule.h"

class IndexBoundRule : public IRule {
 public:
  IndexBoundRule();
  IndexBoundRule(IRule* );
  virtual ~IndexBoundRule();

  virtual bool check(IBoard* , Position*);
};

#endif // INDEXBOUNDRULE_H
