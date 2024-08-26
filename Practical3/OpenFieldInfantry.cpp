#include "OpenFieldInfantry.h"
#include <iostream>

OpenFieldInfantry::OpenFieldInfantry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void OpenFieldInfantry::move(){
    std::cout << "OpenField Infantry marching across the plains." << std::endl;
}

void OpenFieldInfantry::fight(){
    std::cout << "OpenField Infantry engaging in a pitched battle." << std::endl;
}