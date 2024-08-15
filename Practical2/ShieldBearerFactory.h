#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include <iostream>

using namespace std;

class ShieldBearerFactory : public SoldierFactory
{
	public:
		ShieldBearerFactory(Soldiers* soldiers);
		Soldiers* createUnit();
		int calculateTotalHealthPerUnit();
		int calculateTotalDamagePerUnit();
		int calculateTotalDefencePerUnit();
};


#endif
