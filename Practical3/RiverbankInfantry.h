#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H

#include "Infantry.h"

class RiverbankInfantry : public Infantry {
	public:
		RiverbankInfantry(int health, int defence, int attack);
		void move();
		void fight();

	private: 
		int health;
		int defence;
		int attack;
};

#endif