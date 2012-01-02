/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/Evaluation.h"
#include "../include/EvalOverGameRule.h"
#include "../include/EvalPairValue.h"
#include "../include/EvalSingleValue.h"

Evaluation::Evaluation(IBoard* board) {
    this->board = board;
    pos = new Position();
    rule = new EvalOverGameRule(
                new EvalPairValue(
                    new EvalSingleValue(0)));
}

Evaluation::~Evaluation() {
    delete rule;
    delete pos;
}

int Evaluation::getEvaluateValue() {
    return rule->check(calValueArray());
}

int* Evaluation::calValueArray() {
    for (int i = 0; i < 8; i++) {
        lineValue[i] = 0;
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            pos->setPosition(i, j);
            lineValue[i] += board->getElement(pos)->getStatus();

            pos->setPosition(j, i);
            lineValue[i+3] += board->getElement(pos)->getStatus();
        }
    }

    for (int i = 0; i < 3; i++) {
        pos->setPosition(i, i);
        lineValue[6] += board->getElement(pos)->getStatus();
    }

    pos->setPosition(2, 0);
    lineValue[7] += board->getElement(pos)->getStatus();

    pos->setPosition(1, 1);
    lineValue[7] += board->getElement(pos)->getStatus();

    pos->setPosition(0, 2);
    lineValue[7] += board->getElement(pos)->getStatus();

    return lineValue;
}
