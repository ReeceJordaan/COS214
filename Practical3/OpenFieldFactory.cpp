#include "OpenFieldFactory.h"
#include <iostream>

Infantry* OpenFieldFactory::createInfantry(){
    return new OpenFieldInfantry();
}

Cavalry* OpenFieldFactory::createCavalry(){
    return new OpenFieldCavalry();
}

Artillery* OpenFieldFactory::createArtillery(){
    return new OpenFieldArtillery();
}

void OpenFieldFactory::deployArtillery(){
    std::cout << "Deploying OpenField-specific Artillery: Long-range cannons for flat terrain." << std::endl;
}