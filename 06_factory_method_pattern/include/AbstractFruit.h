//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_ABSTRACTFRUIT_H
#define DESIGN_PATTERNS_ABSTRACTFRUIT_H

#include <iostream>

using namespace std;

/**
 * @class   水果抽象类
 */
class AbstractFruit {
public:
    virtual ~AbstractFruit() = 0;
    
    /**
     * @brief   显示水果名字
     */
    virtual void showName() = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTFRUIT_H
