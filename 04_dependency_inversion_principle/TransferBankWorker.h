//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_TRANSFERBANKWORKER_H
#define DESIGN_PATTERNS_TRANSFERBANKWORKER_H

#include "AbstractBankWorker.h"

#include <iostream>

using namespace std;

/**
 * @class   转账业务员
 */
class TransferBankWorker : public AbstractBankWorker {
public:
    void doBusiness() override;
};


#endif //DESIGN_PATTERNS_TRANSFERBANKWORKER_H
