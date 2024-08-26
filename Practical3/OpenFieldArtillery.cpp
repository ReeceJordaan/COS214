#include "OpenFieldArtillery.h"
#include <iostream>

OpenFieldArtillery::OpenFieldArtillery(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void OpenFieldArtillery::move(){
    std::cout << "OpenField Artillery setting up on the plains." << std::endl;
}

void OpenFieldArtillery::fight(){
    std::cout << "OpenField Artillery launching a long-range bombardment." << std::endl;
}