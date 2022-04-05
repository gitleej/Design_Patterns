//
// Created by AILEE on 2022/4/5.
//

#include "AppleFactory.h"

AbstractFruit *AppleFactory::CreateFruit() {
    return new Apple;
}
