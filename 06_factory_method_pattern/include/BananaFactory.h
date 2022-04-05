//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_BANANAFACTORY_H
#define DESIGN_PATTERNS_BANANAFACTORY_H

#include "AbstractFruitFactory.h"
#include "Banana.h"

/**
 * @class   香蕉工厂类
 */
class BananaFactory : public AbstractFruitFactory{
    AbstractFruit * CreateFruit() override;
};


#endif //DESIGN_PATTERNS_BANANAFACTORY_H
