//
// Created by AILEE on 2022/4/5.
//

#include "BuildingA.h"

BuildingA::BuildingA() : m_quality("高品质") {}

void BuildingA::sale() {
    cout << "楼盘A被售卖" << endl;
}

string BuildingA::getQuality() {
    return this->m_quality;
}