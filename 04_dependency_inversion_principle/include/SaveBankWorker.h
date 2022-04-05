//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_SAVEBANKWORKER_H
#define DESIGN_PATTERNS_SAVEBANKWORKER_H

#include "AbstractBankWorker.h"

#include <iostream>

using namespace std;

/**
 * @class   存款业务员
 */
class SaveBankWorker : public AbstractBankWorker {
public:
    void doBusiness() override;
};


#endif //DESIGN_PATTERNS_SAVEBANKWORKER_H
