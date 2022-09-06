//
// Created by AILEE on 2022/9/6.
//

#include "../include/Factory.h"

#include "../include/Apple.h"
#include "../include/Banana.h"
#include "../include/Pear.h"

AbstractApple *USAFactory::createApple() {
    return new USSApple();
}

AbstractBanana *USAFactory::createBanana() {
    return new USABanana();
}

AbstractPear *USAFactory::createPear() {
    return new USAPear();
}

AbstractApple *ChinaFactory::createApple() {
    return new ChinaApple();
}

AbstractBanana *ChinaFactory::createBanana() {
    return new ChinaBanana();
}

AbstractPear *ChinaFactory::createPear() {
    return new ChinaPear();
}

AbstractApple *JapanFactory::createApple() {
    return new JapanApple();
}

AbstractBanana *JapanFactory::createBanana() {
    return new JapanBanana();
}

AbstractPear *JapanFactory::createPear() {
    return new JapanPear();
}
