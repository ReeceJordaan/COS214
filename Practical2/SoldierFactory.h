#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"
#include <iostream>

using namespace std;

class SoldierFactory
{
	protected:
		SoldierFactory(Soldiers* soldiers);
		virtual Soldiers* createUnit() = 0;
		virtual int calculateTotalHealthPerUnit();
		virtual int calculateTotalDamagePerUnit();
		virtual int calculateTotalDefencePerUnit();

	protected:
		Soldiers* soldiers;
};


#endif
