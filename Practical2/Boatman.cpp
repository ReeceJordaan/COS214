#include "Boatman.h"
#include <iostream>

Boatman::Boatman(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName) : Soldiers(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName) {

}

Soldiers* Boatman::clonis() {
    return new Boatman(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
}

void Boatman::engage() {
    prepare();
    execute();
}

void Boatman::disengage() {
    retreat();
    rest();
}

void Boatman::prepare() {
    std::cout << "Boatman: Maneuvering boats into strategic positions." << std::endl;
}

void Boatman::execute() {
    std::cout << "Boatman: Launching projectiles from the boats." << std::endl;
}

void Boatman::retreat() {
    std::cout << "Boatman: Steering boats away from danger." << std::endl;
}

void Boatman::rest() {
    std::cout << "Boatman: Anchoring boats and resting the oarsmen." << std::endl;
}