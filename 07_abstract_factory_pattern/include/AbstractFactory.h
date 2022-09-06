//
// Created by AILEE on 2022/9/6.
//

#ifndef DESIGN_PATTERNS_ABSTRACTFACTORY_H
#define DESIGN_PATTERNS_ABSTRACTFACTORY_H

#include "AbstractApple.h"
#include "AbstractBanana.h"
#include "AbstractPear.h"


/**
 * @brief   抽象工厂针对产品族
 */
class AbstractFactory {
public:
    virtual AbstractApple* createApple() = 0;
    virtual AbstractBanana* createBanana() = 0;
    virtual AbstractPear* createPear() = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTFACTORY_H
