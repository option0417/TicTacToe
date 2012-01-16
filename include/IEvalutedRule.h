#ifndef IEVALUTEDRULE_H
#define IEVALUTEDRULE_H

#include "IBoard.h"

class IEvalutedRule {
public:
    IEvalutedRule(IEvalutedRule*);
    virtual ~IEvalutedRule();

    virtual int evaluted(IBoard*) = 0;

protected:
    IEvalutedRule* nextRule;
};

#endif // IEVALUTEDRULE_H
