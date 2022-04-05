//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_APPLEFACTORY_H
#define DESIGN_PATTERNS_APPLEFACTORY_H

#include "AbstractFruitFactory.h"
#include "Apple.h"

/**
 * @class   苹果工厂类
 */
class AppleFactory : public AbstractFruitFactory{
public:
    AbstractFruit * CreateFruit() override;
};


#endif //DESIGN_PATTERNS_APPLEFACTORY_H
