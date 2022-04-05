//
// Created by AILEE on 2022/4/5.
//

#include "FruitFactory.h"

AbstractFruit *FruitFactory::CreateFruit(const string &name) {
    if (name == "apple") {
        return new Apple;
    } else if (name == "banana") {
        return new Banana;
    } else if (name == "pear") {
        return new Pear;
    } else {
        return NULL;
    }
}
