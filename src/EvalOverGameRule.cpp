/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/EvalOverGameRule.h"
#include <iostream>

EvalOverGameRule::EvalOverGameRule() {}
EvalOverGameRule::EvalOverGameRule(IRule* nextRule) : IRule(nextRule) {}

EvalOverGameRule::~EvalOverGameRule() {
  if (nextRule != 0) {
    delete nextRule;
    nextRule = 0;
  }
}

int EvalOverGameRule::check(int* lineValue) {
    for (int i = 0; i < 8; i++) {
      if (lineValue[i] == 3) {
          return 100;
      } else if (lineValue[i] == 15) {
          return -100;
      }
    }

    if (nextRule != 0) {
        return nextRule->check(lineValue);
    } else {
        return 0;
    }
}
