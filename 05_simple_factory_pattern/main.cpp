//
// Created by AILEE on 2022/4/5.
//

#include "AbstractFruit.h"
#include "FruitFactory.h"

#include <iostream>

/**
 * @brief   测试案例
 */
void test01() {
    AbstractFruit* fruit = FruitFactory::CreateFruit("apple");
    fruit->showName();
    delete fruit;

    fruit = FruitFactory::CreateFruit("banana");
    fruit->showName();
    delete fruit;

    fruit = FruitFactory::CreateFruit("pear");
    fruit->showName();
    delete fruit;
}

/**
 * @brief   主函数
 */
int main() {
    test01();

    return 0;
}
