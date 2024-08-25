#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"

using namespace std;

class RiverbankFactory : public LegionFactory
{
	public:
		Infantry* createInfantry();
		Cavalry* createCavalry();
		Artillery* createArtillery();
		void deployArtillery();
};


#endif
