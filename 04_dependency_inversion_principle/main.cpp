//
// Created by AILEE on 2022/4/5.
//

#include "BankWorker.h"
#include "AbstractBankWorker.h"
#include "PayBankWorker.h"
#include "SaveBankWorker.h"
#include "TransferBankWorker.h"

/**
 * @brief   依赖倒转原则
 */

/**
 * @brief   中层业务
 *          未遵循依赖倒转原则，顶层客户业务的实现依赖于每一个具体的中层业务，中层业务依赖于具体的银行工作人员。
 */
/**
 * @brief   业务一：存款业务
 * @param worker    银行工作人员
 */
void doSaveBusiness(BankWorker* worker) {
    worker->saveService();
}

/**
 * @brief   业务二：支付业务
 * @param worker    银行工作人员
 */
void doPayBusiness(BankWorker* worker) {
    worker->payService();
}

/**
 * @brief   业务三：转账业务
 * @param worker    银行工作人员
 */
void doTransferBusiness(BankWorker* worker) {
    worker->transferService();
}

/**
 * @brief   中层业务
 *          遵循依赖倒转原则，顶层实现仅依赖抽象的银行工作人员
 */
void doNewBusiness(AbstractBankWorker* worker){
    worker->doBusiness();
    delete worker;
}

/**
 * @brief   测试案例：未遵循依赖倒转原则
 */
void test01() {
    BankWorker *worker = new BankWorker;
    doPayBusiness(worker);
    doSaveBusiness(worker);
    doTransferBusiness(worker);
}

/**
 * @brief   测试案例，遵循依赖倒转原则
 */
void test02() {
    doNewBusiness(new PayBankWorker);
    doNewBusiness(new SaveBankWorker);
    doNewBusiness(new TransferBankWorker);
}

/**
 * @brief   主函数
 * @return
 */
int main() {
//    test01();
    test02();
    return 0;
}