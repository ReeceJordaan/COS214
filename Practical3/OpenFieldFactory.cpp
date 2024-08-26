#include "OpenFieldFactory.h"
#include <iostream>

Infantry* OpenFieldFactory::createInfantry(int health, int defence, int attack){
    return new OpenFieldInfantry(health, defence, attack);
}

Cavalry* OpenFieldFactory::createCavalry(int health, int defence, int attack){
    return new OpenFieldCavalry(health, defence, attack);
}

Artillery* OpenFieldFactory::createArtillery(int health, int defence, int attack){
    return new OpenFieldArtillery(health, defence, attack);
}

void OpenFieldFactory::deployArtillery(){
    std::cout << "Deploying OpenField-specific Artillery: Long-range cannons for flat terrain." << std::endl;
}