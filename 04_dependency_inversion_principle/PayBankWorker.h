//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_PAYBANKWORKER_H
#define DESIGN_PATTERNS_PAYBANKWORKER_H

#include "AbstractBankWorker.h"

#include <iostream>

using namespace std;

/**
 * @class   支付业务员
 */
class PayBankWorker : public AbstractBankWorker {
public:
    void doBusiness() override;
};


#endif //DESIGN_PATTERNS_PAYBANKWORKER_H
