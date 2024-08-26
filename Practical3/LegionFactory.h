#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory {
	public:
		virtual Infantry* createInfantry(int health, int defence, int attack) = 0;
		virtual Cavalry* createCavalry(int health, int defence, int attack) = 0;
		virtual Artillery* createArtillery(int health, int defence, int attack) = 0;
		virtual void deployArtillery() = 0;
		virtual ~LegionFactory() = default;
};

#endif