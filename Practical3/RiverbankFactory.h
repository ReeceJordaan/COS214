#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"

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
