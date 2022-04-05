//
// Created by AILEE on 2022/4/5.
//

#ifndef DESIGN_PATTERNS_MEDIATORA_H
#define DESIGN_PATTERNS_MEDIATORA_H

#include "AbstractMediator.h"
#include "BuildingA.h"
#include "BuildingB.h"

#include <vector>

class MediatorA : public AbstractMediator{
public:
    MediatorA();

    ~MediatorA() override;

    AbstractBuilding * findBuilding(string quality) override;

private:
    vector<AbstractBuilding *> m_buildings; ///< 楼盘
};


#endif //DESIGN_PATTERNS_MEDIATORA_H
