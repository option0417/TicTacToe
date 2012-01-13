#ifndef EVALOVERGAMERULE_H
#define EVALOVERGAMERULE_H

#include "IRule.h"


class EvalOverGameRule : public IRule {
public:
    EvalOverGameRule();
    EvalOverGameRule(IRule*);
    virtual ~EvalOverGameRule();

    virtual int check(int []);
};

#endif // EVALOVERGAMERULE_H
