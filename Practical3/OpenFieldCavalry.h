#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H

#include "Cavalry.h"

class OpenFieldCavalry : public Cavalry {
	public:
		OpenFieldCavalry(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};

#endif