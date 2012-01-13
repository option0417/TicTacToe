/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/EvalPairValue.h"
#include <iostream>

EvalPairValue::EvalPairValue() {}
EvalPairValue::EvalPairValue(IRule* nextRule) : IRule(nextRule) {}

EvalPairValue::~EvalPairValue() {
  if (nextRule != 0) {
    delete nextRule;
    nextRule = 0;
  }
}

int EvalPairValue::check(int* lineValue) {
    int value = 0;

    for (int i = 0; i < 8; i++) {
      if (lineValue[i] == 2) {
          value += 10;
      } else if (lineValue[i] == 10) {
          value += -10;
      }
    }

    if (nextRule != 0) {
      return value += nextRule->check(lineValue);
    } else {
      return value;
    }
}
