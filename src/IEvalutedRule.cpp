/* ****************************************
 * Project:
 * Author:
 * Date :
 * ****************************************/
#include "../include/IEvalutedRule.h"

IEvalutedRule::IEvalutedRule(IEvalutedRule* nextRule) {
    this->nextRule = nextRule;
}
