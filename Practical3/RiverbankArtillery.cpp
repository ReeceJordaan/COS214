#include "RiverbankArtillery.h"
#include <iostream>

RiverbankArtillery::RiverbankArtillery(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void RiverbankArtillery::move() {
    std::cout << "Riverbank Artillery being deployed on river barges." << std::endl;
}

void RiverbankArtillery::fight() {
    std::cout << "Riverbank Artillery launching a bombardment from the river." << std::endl;
}