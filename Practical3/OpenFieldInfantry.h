#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H

#include "Infantry.h"

class OpenFieldInfantry : public Infantry {
	public:
		OpenFieldInfantry(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};

#endif