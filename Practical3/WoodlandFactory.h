#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "LegionFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"

class WoodlandFactory : public LegionFactory {
	public:
		Infantry* createInfantry(int health, int defence, int attack);
		Cavalry* createCavalry(int health, int defence, int attack);
		Artillery* createArtillery(int health, int defence, int attack);
		void deployArtillery();
};


#endif
