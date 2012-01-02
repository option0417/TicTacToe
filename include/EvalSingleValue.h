#ifndef EVALSINGLEVALUE_H
#define EVALSINGLEVALUE_H

#include "IRule.h"

class EvalSingleValue : public IRule {
public:
    EvalSingleValue();
    EvalSingleValue(IRule*);
    virtual ~EvalSingleValue();

    virtual int check(int*);
};

#endif // EVALSINGLEVALUE_H
