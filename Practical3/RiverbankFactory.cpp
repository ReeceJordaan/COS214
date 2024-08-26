#include "RiverbankFactory.h"
#include <iostream>

Infantry* RiverbankFactory::createInfantry(int health, int defence, int attack){
    return new RiverbankInfantry(health, defence, attack);
}

Cavalry* RiverbankFactory::createCavalry(int health, int defence, int attack){
    return new RiverbankCavalry(health, defence, attack);
}

Artillery* RiverbankFactory::createArtillery(int health, int defence, int attack){
    return new RiverbankArtillery(health, defence, attack);
}

void RiverbankFactory::deployArtillery(){
    std::cout << "Deploying Riverbank-specific Artillery: River barges with mounted cannons." << std::endl;
}