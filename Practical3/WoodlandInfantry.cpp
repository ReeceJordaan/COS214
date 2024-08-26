#include "WoodlandInfantry.h"
#include <iostream>

WoodlandInfantry::WoodlandInfantry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void WoodlandInfantry::move(){
    std::cout << "Woodland Infantry moving through forest." << std::endl;
}

void WoodlandInfantry::fight(){
    std::cout << "Woodland Infantry attacking with close combat." << std::endl;
}