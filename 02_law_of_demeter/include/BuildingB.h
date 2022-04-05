//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_BUILDINGB_H
#define DESIGN_PATTERNS_BUILDINGB_H

#include "AbstractBuilding.h"

#include <iostream>

using namespace std;

/**
 * @class   楼盘B
 */
class BuildingB : public AbstractBuilding{
public:
    BuildingB();

    virtual void sale();

    virtual string getQuality();

private:
    string m_quality;   ///< 房子品质
};


#endif //DESIGN_PATTERNS_BUILDINGB_H
