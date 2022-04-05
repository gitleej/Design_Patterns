//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_BANANA_H
#define DESIGN_PATTERNS_BANANA_H

#include "AbstractFruit.h"

class Banana : public AbstractFruit{
public:
    void showName() override;
};


#endif //DESIGN_PATTERNS_BANANA_H
