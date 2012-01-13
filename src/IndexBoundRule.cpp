/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/IndexBoundRule.h"
#include <iostream>

IndexBoundRule::IndexBoundRule() {}

IndexBoundRule::IndexBoundRule(IRule* nextRule) : IRule(nextRule) {}

IndexBoundRule::~IndexBoundRule() {
  if (nextRule != NULL) {
    delete nextRule;
    nextRule = 0;
  }
}

bool IndexBoundRule::check(IBoard* board, Position* pos) {
  if (pos->getX() >= 0 && pos->getX() <= 2) {
    if (pos->getY() >= 0 && pos->getY() <= 2) {
      if (nextRule != NULL) {
        return nextRule->check(board, pos);
      } else {
        return true;
      }
    }
  }
  throw "Index OutOfBound";
}
