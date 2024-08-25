#include "RiverbankFactory.h"
#include <iostream>

Infantry* RiverbankFactory::createInfantry(){
    return new RiverbankInfantry();
}

Cavalry* RiverbankFactory::createCavalry(){
    return new RiverbankCavalry();
}

Artillery* RiverbankFactory::createArtillery(){
    return new RiverbankArtillery();
}

void RiverbankFactory::deployArtillery(){
    std::cout << "Deploying Riverbank-specific Artillery: River barges with mounted cannons." << std::endl;
}