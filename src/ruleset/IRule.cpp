/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "IRule.h"
#include <iostream>

IRule::IRule() {
  nextRule = 0;
}

IRule::IRule(IRule* rule) {
  nextRule = rule;
}

IRule::~IRule() {
  if (nextRule != NULL) {
    delete nextRule;
    nextRule = 0;
  }
}

void IRule::setRule(IRule* rule) {
  nextRule = rule;
}

int IRule::check(int* lineValue) { return -1; }
bool IRule::check(IBoard* board,Position* ) { return false; }
