#ifndef IEVALUTEDRULE_H
#define IEVALUTEDRULE_H


class IEvalutedRule {
public:
    IEvalutedRule(IEvalutedRule*);

    virtual int evaluted(IBoard*) = 0;

protected:
    IEvalutedRule* nextRule;
};

#endif // IEVALUTEDRULE_H
