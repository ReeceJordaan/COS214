#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"


using namespace std;

class OpenFieldFactory : public LegionFactory
{
	public:
		Infantry* createInfantry();
		Cavalry* createCavalry();
		Artillery* createArtillery();
		void deployArtillery();
};


#endif
