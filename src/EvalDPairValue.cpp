#include "../include/EvalDPairValue.h"
#include <iostream>

EvalDPairValue::EvalDPairValue() {}

EvalDPairValue::EvalDPairValue(IRule* nextRule) : IRule(nextRule) {}


EvalDPairValue::~EvalDPairValue() {
    if (nextRule != 0) {
        delete nextRule;
        nextRule = 0;
    }
}

int EvalDPairValue::check(int* lineValue) {
    return 0;
}
