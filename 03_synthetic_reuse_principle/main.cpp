//
// Created by AILEE on 2022/4/5.
//

/**
 * @brief   合成复用原则，即继承和组合，优先使用组合。
 */

#include "BMW.h"
#include "Porsche.h"
#include "Person.h"

/**
 * @brief   测试案例
 */
void test01() {
    Person *person = new Person;
    person->setCar(new BMW);
    person->Doufeng();

    person->setCar(new Porsche);
    person->Doufeng();
}

/**
 * @brief   主函数
 * @return
 */
int main() {
    test01();
    return 0;
}