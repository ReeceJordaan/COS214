#include "WoodlandCavalry.h"
#include <iostream>

WoodlandCavalry::WoodlandCavalry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void WoodlandCavalry::move() {
    std::cout << "Woodland Cavalry swiftly navigating through the trees." << std::endl;
}

void WoodlandCavalry::fight() {
    std::cout << "Woodland Cavalry performing a flanking maneuver." << std::endl;
}