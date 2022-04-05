//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_ABSTRACTFRUITFACTORY_H
#define DESIGN_PATTERNS_ABSTRACTFRUITFACTORY_H

#include "AbstractFruit.h"

/**
 * @class   工厂抽象类
 */
class AbstractFruitFactory {
public:
    virtual ~AbstractFruitFactory() = 0;

    /**
     * @brief   创建水果实例
     */
    virtual AbstractFruit* CreateFruit() = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTFRUITFACTORY_H
