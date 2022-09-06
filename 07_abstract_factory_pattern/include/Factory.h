//
// Created by AILEE on 2022/9/6.
//

#ifndef DESIGN_PATTERNS_FACTORY_H
#define DESIGN_PATTERNS_FACTORY_H

#include "AbstractFactory.h"


class USAFactory : public AbstractFactory{
public:
    AbstractApple * createApple() override;
    AbstractBanana * createBanana() override;
    AbstractPear * createPear() override;
};

class ChinaFactory : public AbstractFactory{
public:
    AbstractApple * createApple() override;
    AbstractBanana * createBanana() override;
    AbstractPear * createPear() override;
};

class JapanFactory : public AbstractFactory{
public:
    AbstractApple * createApple() override;
    AbstractBanana * createBanana() override;
    AbstractPear * createPear() override;
};


#endif //DESIGN_PATTERNS_FACTORY_H
