//
// Created by AILEE on 2022/4/5.
//

#include "BuildingB.h"

BuildingB::BuildingB() : m_quality("低品质") {}

void BuildingB::sale() {
    cout << "楼盘B被售卖" << endl;
}

string BuildingB::getQuality() {
    return this->m_quality;
}