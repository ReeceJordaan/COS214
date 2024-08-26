#include "Fortification.h"
#include <iostream>

void Fortification::engage() {
    std::cout << "Executing Fortification strategy: Strengthen defenses and hold the line!" << std::endl;
}

BattleStrategy* Fortification::clone() const {
    return new Fortification(*this);
}