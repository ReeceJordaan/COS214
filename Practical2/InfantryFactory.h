#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class InfantryFactory : public SoldierFactory
{
	public:
		InfantryFactory(Soldiers* soldiers);
		Soldiers* createUnit();
		int calculateTotalHealthPerUnit();
		int calculateTotalDamagePerUnit();
		int calculateTotalDefencePerUnit();
};


#endif
