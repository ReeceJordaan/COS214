#include "Ambush.h"
#include <iostream>

void Ambush::engage(){
    std::cout << "Executing Ambush strategy: Lure the enemy into a trap!" << std::endl;
}

BattleStrategy* Ambush::clone() const {
    return new Ambush(*this);
}