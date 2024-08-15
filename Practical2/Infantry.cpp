#include "Infantry.h"
#include <iostream>

Infantry::Infantry(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName) : Soldiers(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName) {

}

Soldiers* Infantry::clonis() {
    return new Infantry(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
}

void Infantry::engage() {
    prepare();
    execute();
}

void Infantry::disengage() {
    retreat();
    rest();
}

void Infantry::prepare() {
    std::cout << "Infantry: Forming tight defensive formations." << std::endl;
}

void Infantry::execute() {
    std::cout << "Infantry: Charging forward with bayonets." << std::endl;
}

void Infantry::retreat() {
    std::cout << "Infantry: Falling back in an orderly fashion." << std::endl;
}

void Infantry::rest() {
    std::cout << "Infantry: Resting and resupplying ammunition." << std::endl;
}