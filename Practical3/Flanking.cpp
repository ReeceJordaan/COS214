#include "Flanking.h"
#include <iostream>

void Flanking::engage(){
    std::cout << "Executing Flanking strategy: Surround the enemy from the sides!" << std::endl;
}

BattleStrategy* Flanking::clone() const {
    return new Flanking(*this);
}