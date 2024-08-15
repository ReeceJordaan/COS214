#include "SoldierFactory.h"

SoldierFactory::SoldierFactory(Soldiers* soldiers){
	this->soldiers = soldiers;
}

int SoldierFactory::calculateTotalHealthPerUnit(){
	return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int SoldierFactory::calculateTotalDamagePerUnit(){
	return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int SoldierFactory::calculateTotalDefencePerUnit(){
	return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}