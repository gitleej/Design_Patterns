//
// Created by AILEE on 2022/4/5.
//

#include "PearFactory.h"

AbstractFruit *PearFactory::CreateFruit() {
    return new Pear;
}
