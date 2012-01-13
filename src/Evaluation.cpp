/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/Evaluation.h"
#include "../include/EvalOverGameRule.h"
#include "../include/EvalPairValue.h"
#include "../include/EvalSingleValue.h"
#include "../include/EvalDPairValue.h"
#include <iostream>

Evaluation* Evaluation::instance = 0;

Evaluation::Evaluation(IBoard* board) {
    this->board = board;
    pos = new Position();
    rule = new EvalOverGameRule(
               new EvalDPairValue(
                   new EvalPairValue(
                       new EvalSingleValue(0))));
}

Evaluation::~Evaluation() {
    delete rule;
    delete pos;
}

Evaluation* Evaluation::getInstance(IBoard* board) {
	if (instance == 0) {
		instance = new Evaluation(board);
	}
	return instance;
}

int Evaluation::getEvaluateValue() {
    return rule->check(calValueArray());
}

void Evaluation::addRule(IRule* rule) {
	if (this->rule == 0) {
		this->rule = rule;
	} else {
		this->rule->setRule(rule);
	}
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
