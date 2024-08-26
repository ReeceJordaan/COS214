#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

using namespace std;

class LegionFactory
{
	public:
		virtual Infantry* createInfantry() = 0;
		virtual Cavalry* createCavalry() = 0;
		virtual Artillery* createArtillery() = 0;
		virtual void deployArtillery() = 0;
		virtual ~LegionFactory() = default;
};

#endif
