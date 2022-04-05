//
// Created by AILEE on 2022/4/5.
//

#include "AbstractBuilding.h"
#include "BuildingA.h"
#include "BuildingB.h"
#include "MediatorA.h"

using namespace std;

/**
 * @brief   迪米特法则，又叫知识最少原则
 */

/**
 * @brief   测试案例01
 *          不遵循迪米特法则，每一个楼盘都被涉及
 */
void test01() {
    BuildingA *buildingA = new BuildingA();
    if (buildingA->getQuality() == "高品质") {
        buildingA->sale();
    }

    BuildingB *buildingB = new BuildingB();
    if (buildingB->getQuality() == "高品质") {
        buildingB->sale();
    }
}

/**
 * @brief   测试案例02
 *          遵循迪米特法则，使用中介类来管理楼盘类，只给客户暴露中介接口，而无需了解具体楼盘。
 */
void test02() {
    AbstractMediator *mediator = new MediatorA();
    AbstractBuilding *building = mediator->findBuilding("高品质");
    if (building != NULL) {
        building->sale();
    } else {
        cout << "没有符合要求的楼盘" << endl;
    }
}

/**
 * @brief   主函数
 * @return
 */
int main() {

//    test01();
    test02();
    return 0;
}
