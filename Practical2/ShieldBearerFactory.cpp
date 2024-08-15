#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

ShieldBearerFactory::ShieldBearerFactory(Soldiers* soldiers) : SoldierFactory(soldiers)
{}

Soldiers* ShieldBearerFactory::createUnit(){
	return new ShieldBearer(soldiers->getHealthPerSoldier(), soldiers->getDamagePerSoldier(), soldiers->getDefencePerSoldier(), soldiers->getAmountOfSoldiersPerUnit(), soldiers->getUnitName());
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(){
	return SoldierFactory::calculateTotalHealthPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(){
	return SoldierFactory::calculateTotalDamagePerUnit();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(){
	return SoldierFactory::calculateTotalDefencePerUnit();
}
