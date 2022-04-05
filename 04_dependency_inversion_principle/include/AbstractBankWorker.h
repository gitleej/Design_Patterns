//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_ABSTRACTBANKWORKER_H
#define DESIGN_PATTERNS_ABSTRACTBANKWORKER_H

/**
 * @brief   银行工作人员抽象类
 */
class AbstractBankWorker {
public:
    virtual ~AbstractBankWorker() = 0;

    virtual void doBusiness() = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTBANKWORKER_H
