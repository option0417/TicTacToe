#ifndef EVALDPAIRVALUE_H
#define EVALDPAIRVALUE_H

#include "IRule.h"

class EvalDPairValue : public IRule {
public:
    EvalDPairValue();
    EvalDPairValue(IRule*);
    virtual ~EvalDPairValue();

    virtual int check(int*);
};

#endif // EVALDPAIRVALUE_H
