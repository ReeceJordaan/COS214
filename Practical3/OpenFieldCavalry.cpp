#include "OpenFieldCavalry.h"
#include <iostream>

OpenFieldCavalry::OpenFieldCavalry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void OpenFieldCavalry::move() {
    std::cout << "OpenField Cavalry galloping across the open terrain." << std::endl;
}

void OpenFieldCavalry::fight() {
    std::cout << "OpenField Cavalry charging with devastating force." << std::endl;
}