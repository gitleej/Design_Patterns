//
// Created by AILEE on 2022/9/6.
//

#ifndef DESIGN_PATTERNS_PEAR_H
#define DESIGN_PATTERNS_PEAR_H

#include "AbstractPear.h"


class USAPear : public AbstractPear {
public:
    void showName() override;
};

class ChinaPear : public AbstractPear {
public:
    void showName() override;
};

class JapanPear : public AbstractPear {
public:
    void showName() override;
};


#endif //DESIGN_PATTERNS_PEAR_H
