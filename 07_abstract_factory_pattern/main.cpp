//
// Created by AILEE on 2022/9/6.
// @brief   抽象工厂针对产品族，而不是产品等级结构。
//

#include <iostream>

#include "./include/AbstractFactory.h"
#include "./include/AbstractApple.h"
#include "./include/AbstractBanana.h"
#include "./include/AbstractPear.h"

#include "./include/Factory.h"
#include "./include/Apple.h"
#include "./include/Banana.h"
#include "./include/Pear.h"

void test_01() {
    AbstractFactory *factory = nullptr;
    AbstractApple *apple = nullptr;
    AbstractBanana *banana = nullptr;
    AbstractPear *pear = nullptr;

    factory = new USAFactory();
    apple = factory->createApple();
    banana = factory->createBanana();
    pear = factory->createPear();

    apple->showName();
    banana->showName();
    pear->showName();

    factory = new ChinaFactory();
    apple = factory->createApple();
    banana = factory->createBanana();
    pear = factory->createPear();

    apple->showName();
    banana->showName();
    pear->showName();

    factory = new JapanFactory();
    apple = factory->createApple();
    banana = factory->createBanana();
    pear = factory->createPear();

    apple->showName();
    banana->showName();
    pear->showName();

}

int main(int argc, char** argv) {
    test_01();

    return 0;
}