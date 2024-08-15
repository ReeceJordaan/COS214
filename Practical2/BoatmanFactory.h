#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class BoatmanFactory : public SoldierFactory
{
	public:
		BoatmanFactory(Soldiers* soldiers);
		Soldiers* createUnit();
		int calculateTotalHealthPerUnit();
		int calculateTotalDamagePerUnit();
		int calculateTotalDefencePerUnit();
};


#endif
