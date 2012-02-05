/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "EvalSingleValue.h"
#include <iostream>

EvalSingleValue::EvalSingleValue() {}
EvalSingleValue::EvalSingleValue(IRule* nextRule) : IRule(nextRule) {}

EvalSingleValue::~EvalSingleValue() {
  if (nextRule != 0) {
    delete nextRule;
    nextRule = 0;
  }
}

int EvalSingleValue::check(int* lineValue) {
    int value = 0;

    for (int i = 0; i < 8; i++) {
      if (lineValue[i] == 1) {
          value += 5;
      } else if (lineValue[i] == 5) {
          value += -5;
      }
    }

    if (nextRule != 0) {
      return value += nextRule->check(lineValue);
    } else {
      return value;
    }
}
