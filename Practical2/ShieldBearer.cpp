#include "ShieldBearer.h"
#include <iostream>

ShieldBearer::ShieldBearer(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName) : Soldiers(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName) {

}

Soldiers* ShieldBearer::clonis() {
    return new ShieldBearer(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
}

void ShieldBearer::engage() {
    prepare();
    execute();
}

void ShieldBearer::disengage() {
    retreat();
    rest();
}

void ShieldBearer::prepare() {
    std::cout << "ShieldBearer: Raising shields to form a protective barrier." << std::endl;
}

void ShieldBearer::execute() {
    std::cout << "ShieldBearer: Advancing with shields held high." << std::endl;
}

void ShieldBearer::retreat() {
    std::cout << "ShieldBearer: Withdrawing while maintaining shield wall." << std::endl;
}

void ShieldBearer::rest() {
    std::cout << "ShieldBearer: Lowering shields and catching breath." << std::endl;
}