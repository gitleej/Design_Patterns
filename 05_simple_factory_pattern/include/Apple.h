//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_APPLE_H
#define DESIGN_PATTERNS_APPLE_H

#include "AbstractFruit.h"

class Apple : public AbstractFruit{
public:
    void showName() override;
};


#endif //DESIGN_PATTERNS_APPLE_H
