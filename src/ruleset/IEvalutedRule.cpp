/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "IEvalutedRule.h"

IEvalutedRule::IEvalutedRule(IEvalutedRule* nextRule) {
    this->nextRule = nextRule;
}

IEvalutedRule::~IEvalutedRule() {}
