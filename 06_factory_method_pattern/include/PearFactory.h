//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_PEARFACTORY_H
#define DESIGN_PATTERNS_PEARFACTORY_H

#include "AbstractFruitFactory.h"
#include "Pear.h"

class PearFactory : public AbstractFruitFactory{
public:
    AbstractFruit * CreateFruit() override;
};


#endif //DESIGN_PATTERNS_PEARFACTORY_H
