#include "RiverbankCavalry.h"
#include <iostream>

RiverbankCavalry::RiverbankCavalry(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void RiverbankCavalry::move() {
    std::cout << "Riverbank Cavalry charging across the riverbank." << std::endl;
}

void RiverbankCavalry::fight() {
    std::cout << "Riverbank Cavalry executing a swift riverbank attack." << std::endl;
}