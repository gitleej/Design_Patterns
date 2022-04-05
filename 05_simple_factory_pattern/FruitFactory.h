//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_FRUITFACTORY_H
#define DESIGN_PATTERNS_FRUITFACTORY_H

#include "AbstractFruit.h"
#include "Apple.h"
#include "Banana.h"
#include "Pear.h"

#include <string>

using namespace std;

class FruitFactory {
public:
    static AbstractFruit* CreateFruit(const string &name);
};


#endif //DESIGN_PATTERNS_FRUITFACTORY_H
