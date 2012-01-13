/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/IsExistRule.h"
#include <iostream>

IsExistRule::IsExistRule() {}

IsExistRule::IsExistRule(IRule* rule) :IRule(rule) {}

IsExistRule::~IsExistRule() {
  if (nextRule != NULL) {
    delete nextRule;
    nextRule = 0;
  }
}

bool IsExistRule::check(IBoard* board, Position* pos) {
  if (board->getElement(pos)->getStatus() == DEFAULT) {
    if (nextRule != NULL) {
      return nextRule->check(board, pos);
    } else {
      return true;
    }
  }
  throw "IsExistElement";
}
