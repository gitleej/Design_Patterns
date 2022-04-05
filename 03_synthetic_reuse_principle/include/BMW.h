//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_BMW_H
#define DESIGN_PATTERNS_BMW_H

#include "AbstractCar.h"

#include <iostream>

using namespace std;

class BMW : public AbstractCar{
public:
    void run() override;
};


#endif //DESIGN_PATTERNS_BMW_H
