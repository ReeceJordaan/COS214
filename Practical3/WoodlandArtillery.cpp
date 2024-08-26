#include "WoodlandArtillery.h"
#include <iostream>

WoodlandArtillery::WoodlandArtillery(int health, int defence, int attack) {
    this->health = health;
    this->defence = defence;
    this->attack = attack;
}

void WoodlandArtillery::move(){
    std::cout << "Woodland Artillery positioning in the forest." << std::endl;
}

void WoodlandArtillery::fight(){
    std::cout << "Woodland Artillery launching an ambush barrage." << std::endl;
}