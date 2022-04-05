//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_ABSTRACTMEDIATOR_H
#define DESIGN_PATTERNS_ABSTRACTMEDIATOR_H

#include "AbstractBuilding.h"

/**
 * @class   中介抽象类
 */
class AbstractMediator {
public:
/**
     * @brief   析构函数
     */
    virtual ~AbstractMediator() = 0;

    /**
     * @brief   查找合适的楼盘，对外提供接口
     * @param quality   楼盘质量
     * @return  返回楼盘
     */
    virtual AbstractBuilding* findBuilding(string quality) = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTMEDIATOR_H
