#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"

class RiverbankFactory : public LegionFactory {
	public:
		Infantry* createInfantry(int health, int defence, int attack);
		Cavalry* createCavalry(int health, int defence, int attack);
		Artillery* createArtillery(int health, int defence, int attack);
		void deployArtillery();
};

#endif