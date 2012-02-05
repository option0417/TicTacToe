#ifndef EVALUATION_H
#define EVALUATION_H

#include "../domain/IBoard.h"
#include "../ruleset/IRule.h"

class Evaluation {
public:
	static Evaluation* getInstance(IBoard*);
    int getEvaluateValue();

    void addRule(IRule*);
private:
    Evaluation(IBoard*);
    ~Evaluation();

    static Evaluation* instance;
    IBoard* board;
    IRule* rule;
    Position* pos;

    int lineValue[8];
    int* calValueArray();
};

#endif // EVALUATION_H
