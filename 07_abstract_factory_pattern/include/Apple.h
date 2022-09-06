//
// Created by AILEE on 2022/9/6.
//

#ifndef DESIGN_PATTERNS_APPLE_H
#define DESIGN_PATTERNS_APPLE_H

#include "AbstractApple.h"

class USSApple : public AbstractApple{
public:
    void showName() override;
};

class ChinaApple : public AbstractApple {
public:
    void showName() override;
};

class JapanApple : public AbstractApple {
public:
    void showName() override;
};


#endif //DESIGN_PATTERNS_APPLE_H
