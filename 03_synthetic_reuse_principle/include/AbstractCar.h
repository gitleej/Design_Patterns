//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_ABSTRACTCAR_H
#define DESIGN_PATTERNS_ABSTRACTCAR_H


/**
 * @class   抽象车类
 */
class AbstractCar {
public:
    virtual ~AbstractCar() = 0;

    virtual void run() = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTCAR_H
