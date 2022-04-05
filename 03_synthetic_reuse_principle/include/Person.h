//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_PERSON_H
#define DESIGN_PATTERNS_PERSON_H

#include "AbstractCar.h"

#include <iostream>

using namespace std;

/**
 * @brief   人类，遵循合成复用原则，使用Car的组合
 */
class Person {
public:
    ~Person();
    void setCar(AbstractCar* car);
    void Doufeng();

private:
    AbstractCar *m_car;
};


#endif //DESIGN_PATTERNS_PERSON_H
