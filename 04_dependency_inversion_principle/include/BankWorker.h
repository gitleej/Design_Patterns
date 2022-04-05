//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_BANKWORKER_H
#define DESIGN_PATTERNS_BANKWORKER_H

#include <iostream>

using namespace std;

/**
 * @brief   银行工作人员类
 *          未遵循单一职责原则
 */
class BankWorker {
public:
    /**
     * @brief   存款业务
     */
    void saveService();

    /**
     * @brief   支付业务
     */
    void payService();

    /**
     * @brief   转账业务
     */
    void transferService();
};


#endif //DESIGN_PATTERNS_BANKWORKER_H
