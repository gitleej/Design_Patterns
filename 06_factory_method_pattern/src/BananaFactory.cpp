//
// Created by AILEE on 2022/4/5.
//

#include "BananaFactory.h"

AbstractFruit *BananaFactory::CreateFruit() {
    return new Banana;
}
