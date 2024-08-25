#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "LegionFactory.h"


using namespace std;

class WoodlandFactory : public LegionFactory
{
	public:
		Infantry* createInfantry();
		Cavalry* createCavalry();
		Artillery* createArtillery();
		void deployArtillery();
};


#endif
