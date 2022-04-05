//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_BUILDINGA_H
#define DESIGN_PATTERNS_BUILDINGA_H

#include "AbstractBuilding.h"

#include <iostream>

using namespace std;

/**
 * @class   楼盘A
 */
class BuildingA : public AbstractBuilding{
public:
    BuildingA();

    virtual void sale();

    virtual string getQuality();

private:
    string m_quality;   ///< 房子品质
};


#endif //DESIGN_PATTERNS_BUILDINGA_H
