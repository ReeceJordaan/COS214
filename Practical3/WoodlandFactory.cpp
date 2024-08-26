#include "WoodlandFactory.h"
#include <iostream>

Infantry* WoodlandFactory::createInfantry(int health, int defence, int attack) {
    return new WoodlandInfantry(health, defence, attack);
}

Cavalry* WoodlandFactory::createCavalry(int health, int defence, int attack) {
    return new WoodlandCavalry(health, defence, attack);
}

Artillery* WoodlandFactory::createArtillery(int health, int defence, int attack) {
    return new WoodlandArtillery(health, defence, attack);
}

void WoodlandFactory::deployArtillery() {
    std::cout << "Deploying Woodland-specific Artillery: Trebuchets camouflaged in the forest." << std::endl;
}
