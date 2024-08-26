#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"

class OpenFieldFactory : public LegionFactory {
	public:
		Infantry* createInfantry(int health, int defence, int attack);
		Cavalry* createCavalry(int health, int defence, int attack);
		Artillery* createArtillery(int health, int defence, int attack);
		void deployArtillery();
};

#endif