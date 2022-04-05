//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_ABSTRACTBUILDING_H
#define DESIGN_PATTERNS_ABSTRACTBUILDING_H

#include <string>

using namespace std;

/**
 * @class   楼盘抽象类
 */
class AbstractBuilding {
public:
    virtual ~AbstractBuilding() = 0;

    /**
     * @brief   售卖房子
     */
    virtual void sale() = 0;

    /**
     * @brief   获取房子品质
     * @return  房子品质
     */
    virtual string getQuality() = 0;
};


#endif //DESIGN_PATTERNS_ABSTRACTBUILDING_H
