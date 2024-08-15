#include "InfantryFactory.h"
#include "Infantry.h"

InfantryFactory::InfantryFactory(Soldiers* soldiers) : SoldierFactory(soldiers){
}

Soldiers* InfantryFactory::createUnit(){
	//cout<<"check: "<<soldiers->getHealthPerSoldier();
	//return NULL;
	return new Infantry(soldiers->getHealthPerSoldier(), soldiers->getDamagePerSoldier(), soldiers->getDefencePerSoldier(), soldiers->getAmountOfSoldiersPerUnit(), soldiers->getUnitName());
}

int InfantryFactory::calculateTotalHealthPerUnit(){
	return SoldierFactory::calculateTotalHealthPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit(){
	return SoldierFactory::calculateTotalDamagePerUnit();
}

int InfantryFactory::calculateTotalDefencePerUnit(){
	return SoldierFactory::calculateTotalDefencePerUnit();
}
