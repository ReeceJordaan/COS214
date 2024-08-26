#include "RiverbankInfantry.h"
#include <iostream>

RiverbankInfantry::RiverbankInfantry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void RiverbankInfantry::move(){
    std::cout << "Riverbank Infantry moving along the river." << std::endl;
}

void RiverbankInfantry::fight(){
    std::cout << "Riverbank Infantry engaging in amphibious assault." << std::endl;
}