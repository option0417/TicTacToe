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
    int value = 0;
    int countO = 0;
    int countX = 0;

    for (int i = 0; i < 8; i++) {
      if (lineValue[i] == 2) {
          countO++;
      } else if (lineValue[i] == 10) {
          countX++;
      }
    }
    
    if (countO >= 2) {
       value += 100;
    } else if (countX >= 2) {
       value -= 100;
    }

    if (nextRule != 0) {
      return value += nextRule->check(lineValue);
    } else {
      return value;
    }
}
