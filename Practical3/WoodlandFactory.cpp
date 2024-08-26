#include "WoodlandFactory.h"
#include <iostream>

Infantry* WoodlandFactory::createInfantry() {
    return new WoodlandInfantry();
}

Cavalry* WoodlandFactory::createCavalry() {
    return new WoodlandCavalry();
}

Artillery* WoodlandFactory::createArtillery() {
    return new WoodlandArtillery();
}

void WoodlandFactory::deployArtillery() {
    std::cout << "Deploying Woodland-specific Artillery: Trebuchets camouflaged in the forest." << std::endl;
}
