//
// Created by AILEE on 2022/9/6.
//

#ifndef DESIGN_PATTERNS_BANANA_H
#define DESIGN_PATTERNS_BANANA_H

#include "AbstractBanana.h"


class USABanana : public AbstractBanana{
public:
    void showName() override;
};

class ChinaBanana : public AbstractBanana{
public:
    void showName() override;
};

class JapanBanana : public AbstractBanana{
public:
    void showName() override;
};


#endif //DESIGN_PATTERNS_BANANA_H
