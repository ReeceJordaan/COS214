#include "Soldiers.h"
#include "Memento.h"
#include <iostream>

Soldiers::Soldiers(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, string unitName) {
    this->healthPerSoldier = healthPerSoldier;
    this->damagePerSoldier = damagePerSoldier;
    this->defencePerSoldier = defencePerSoldier;
    this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
    this->unitName = unitName;
}

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}

Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
    if (mem != nullptr) {
        healthPerSoldier = mem->healthPerSoldier;
        damagePerSoldier = mem->damagePerSoldier;
        defencePerSoldier = mem->defencePerSoldier;
        amountOfSoldiersPerUnit = mem->amountOfSoldiersPerUnit;
        unitName = mem->unitName;
    }
}

int Soldiers::getHealthPerSoldier() const {
    return healthPerSoldier;
}

int Soldiers::getDamagePerSoldier() const {
    return damagePerSoldier;
}

int Soldiers::getDefencePerSoldier() const {
    return defencePerSoldier;
}

int Soldiers::getAmountOfSoldiersPerUnit() const {
    return amountOfSoldiersPerUnit;
}
		
string Soldiers::getUnitName() const {
    return unitName;
}

void Soldiers::printStats() {
    std::cout << "Health:\t\t" << this->getHealthPerSoldier() << std::endl;
    std::cout << "Damage:\t\t" << this->getDamagePerSoldier() << std::endl;
    std::cout << "Defence:\t" << this->getDefencePerSoldier() << std::endl;
    std::cout << "Soldiers:\t" << this->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout << "Unit Name:\t" << this->getUnitName() << std::endl;
}

void Soldiers::damage(Soldiers* target) {
    if(target != nullptr && target->healthPerSoldier > 0) {
        target->healthPerSoldier -= this->damagePerSoldier;
        std::cout << this->unitName << " deals " << this->getDamagePerSoldier() << " damage points to " << target->unitName << "!" << std::endl;

        if(target->healthPerSoldier <= 0) {
            std::cout << this->unitName << " has completely destroyed " << target->unitName << "!" << std::endl;
        }
    }else if(target != nullptr && target->healthPerSoldier <= 0) {
        std::cout << target->unitName << " has already been completely destroyed!" << std::endl;
    }
}

void Soldiers::heal() {
    this->healthPerSoldier += 10;
    std::cout << this->unitName << " heals by 10 points!" << std::endl;
}