#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H

#include "Artillery.h"

class OpenFieldArtillery : public Artillery {
	public:
		OpenFieldArtillery(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};

#endif