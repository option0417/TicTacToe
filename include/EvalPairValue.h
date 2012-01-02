#ifndef EVALPAIRVALUE_H
#define EVALPAIRVALUE_H

#include "IRule.h"

class EvalPairValue : public IRule {
public:
    EvalPairValue();
    EvalPairValue(IRule*);
    virtual ~EvalPairValue();

    virtual int check(int*);
};

#endif // EVALPAIRVALUE_H
