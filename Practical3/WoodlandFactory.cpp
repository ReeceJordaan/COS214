#include "WoodlandFactory.h"
#include <iostream>

Infantry* WoodlandFactory::createInfantry() override {
    return new WoodlandInfantry();
}

Cavalry* WoodlandFactory::createCavalry() override {
    return new WoodlandCavalry();
}

Artillery* WoodlandFactory::createArtillery() override {
    return new WoodlandArtillery();
}

void WoodlandFactory::deployArtillery() override {
    std::cout << "Deploying Woodland-specific Artillery: Trebuchets camouflaged in the forest." << std::endl;
}
