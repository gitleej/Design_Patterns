//
// Created by AILEE on 2022/4/5.
//

#include "MediatorA.h"

MediatorA::MediatorA() {
    AbstractBuilding *building = new BuildingA();
    m_buildings.push_back(building);
    building = new BuildingB();
    m_buildings.push_back(building);
}

MediatorA::~MediatorA() {
    for (auto it = m_buildings.begin(); it != m_buildings.end(); it++) {
        if (*it != NULL) {
            delete *it;
        }
    }
}

AbstractBuilding *MediatorA::findBuilding(string quality) {
    for (auto it = m_buildings.begin(); it != m_buildings.end(); it++) {
        if ((*it)->getQuality() == quality) {
            return *it;
        }
    }

    return NULL;
}
