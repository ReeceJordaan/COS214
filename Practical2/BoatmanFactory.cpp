#include "BoatmanFactory.h"
#include "Boatman.h"

BoatmanFactory::BoatmanFactory(Soldiers* soldiers) : SoldierFactory(soldiers)
{}

Soldiers* BoatmanFactory::createUnit(){
	return new Boatman(soldiers->getHealthPerSoldier(), soldiers->getDamagePerSoldier(), soldiers->getDefencePerSoldier(), soldiers->getAmountOfSoldiersPerUnit(), soldiers->getUnitName());
}

int BoatmanFactory::calculateTotalHealthPerUnit(){
	return SoldierFactory::calculateTotalHealthPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit(){
	return SoldierFactory::calculateTotalDamagePerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit(){
	return SoldierFactory::calculateTotalDefencePerUnit();
}
