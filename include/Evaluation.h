#ifndef EVALUATION_H
#define EVALUATION_H

#include "IBoard.h"
#include "IRule.h"

class Evaluation {
public:
    Evaluation(IBoard*);
    ~Evaluation();

    int getEvaluateValue();
private:
    IBoard* board;
    IRule* rule;
    Position* pos;

    int lineValue[8];
    int* calValueArray();
};

#endif // EVALUATION_H
