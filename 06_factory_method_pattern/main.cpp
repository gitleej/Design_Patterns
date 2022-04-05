//
// Created by AILEE on 2022/4/5.
//

#include "AbstractFruitFactory.h"
#include "AbstractFruit.h"
#include "AppleFactory.h"
#include "BananaFactory.h"
#include "PearFactory.h"

#include <iostream>

/**
 * @brief   测试案例
 */
void test01() {
    AbstractFruitFactory *fruitFactory = new AppleFactory;
    AbstractFruit *fruit = fruitFactory->CreateFruit();
    fruit->showName();
    delete fruit;

    fruitFactory = new BananaFactory;
    fruit = fruitFactory->CreateFruit();
    fruit->showName();
    delete fruit;

    fruitFactory = new PearFactory;
    fruit = fruitFactory->CreateFruit();
    fruit->showName();
    delete fruit;
    delete fruitFactory;
}

/**
 * @brief   主函数
 */
int main() {
    test01();
    return 0;
}
