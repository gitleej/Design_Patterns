//
// Created by AILEE on 2022/4/5.
//

#include "Person.h"

Person::~Person() {
    if (this->m_car != NULL) {
        delete this->m_car;
        this->m_car = NULL;
    }
}

void Person::setCar(AbstractCar *car) {
    this->m_car = car;
}

void Person::Doufeng() {
    this->m_car->run();
    if (this->m_car != NULL) {
        delete this->m_car;
        this->m_car = NULL;
    }
    cout << "兜风结束" << endl;
}
